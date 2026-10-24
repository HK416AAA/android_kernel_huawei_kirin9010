from pathlib import Path

CLANG = "clang-r487747c"
VENDOR_DRIVERS = (
    "connectivity", "hwnet", "hwpower", "huawei_platform",
    "dubai", "iomt_host", "sim_adapt",
)


def is_build_file(path: Path) -> bool:
    return (path.name == "Makefile" or path.name.startswith("Makefile.")
            or path.name == "Kbuild" or path.suffix == ".mk")


def patch_clang_version() -> None:
    for path in Path(".").rglob("*"):
        if not path.is_file() or not is_build_file(path):
            continue
        try:
            text = path.read_text(errors="ignore")
        except OSError:
            continue
        new = text
        for old in ("clang-r416183b1", "clang-r353983c", "clang-r365631c",
                    "clang-r383902b", "clang-r468909b"):
            new = new.replace(old, CLANG)
        if new != text:
            path.write_text(new)
            print("patched clang:", path)


def patch_pgo() -> None:
    for path in Path(".").rglob("*"):
        if not path.is_file() or not is_build_file(path):
            continue
        try:
            text = path.read_text(errors="ignore")
        except OSError:
            continue
        if "-fprofile-use" not in text and "--symbol-ordering-file" not in text:
            continue
        keep = [line for line in text.splitlines()
                if "-fprofile-use" not in line
                and "--symbol-ordering-file" not in line]
        path.write_text("\n".join(keep) + "\n")
        print("removed PGO:", path)


def patch_disable_vendor() -> None:
    ps = Path("platform_source/Makefile")
    if ps.exists():
        lines = ps.read_text(errors="ignore").splitlines()
        out = []
        for line in lines:
            stripped = line.strip()
            if stripped.startswith("obj-y") or stripped.startswith("obj-$(CONFIG"):
                out.append("# " + stripped + "   # disabled: vendor tree incomplete")
            else:
                out.append(line)
        ps.write_text("\n".join(out) + "\n")
        print("disabled platform_source")

    drv = Path("drivers/Makefile")
    if drv.exists():
        lines = drv.read_text(errors="ignore").splitlines()
        out = []
        for line in lines:
            stripped = line.strip()
            hit = False
            for name in VENDOR_DRIVERS:
                if stripped.startswith(("obj-y", "obj-$(CONFIG", "obj-m")) and \
                        (stripped.endswith("/") and stripped.split("/")[-2].endswith(name)
                         or (" " + name + "/") in stripped):
                    hit = True
            if hit:
                out.append("# " + stripped + "   # disabled: vendor driver")
            else:
                out.append(line)
        drv.write_text("\n".join(out) + "\n")
        print("disabled vendor drivers in drivers/Makefile")


def patch_warnings() -> None:
    path = Path("Makefile")
    lines = path.read_text().splitlines()
    if any(line.strip() == "KBUILD_CFLAGS += -Wno-error" for line in lines):
        return
    prefix = (
        "KBUILD_CFLAGS += -Wno-error\n"
        "KBUILD_CFLAGS += -Wno-error=strict-prototypes "
        "-Wno-error=int-conversion -Wno-error=implicit-int "
        "-Wno-error=unused-but-set-variable\n"
        "KBUILD_CFLAGS += -fno-stack-protector\n"
    )
    path.write_text(prefix + "\n" + "\n".join(lines) + "\n")
    print("prefixed -Wno-error / -fno-stack-protector")


def patch_defconfig() -> None:
    path = Path("arch/arm64/configs/merge_8425m_defconfig")
    out = []
    for line in path.read_text().splitlines():
        if line.startswith((
            "CONFIG_LTO=",
            "CONFIG_LTO_CLANG=",
            "CONFIG_LTO_CLANG_FULL=",
            "CONFIG_CFI_CLANG=",
            "CONFIG_CFI_CLANG_SHADOW=",
            "CONFIG_MODULE_SIG",
            "CONFIG_SYSTEM_TRUSTED_KEYS",
            "CONFIG_SYSTEM_REVOCATION_KEYS",
            "CONFIG_STACKPROTECTOR",
        )):
            key = line.split("=", 1)[0]
            if key in ("CONFIG_SYSTEM_TRUSTED_KEYS", "CONFIG_SYSTEM_REVOCATION_KEYS"):
                out.append(key + '=""')
            else:
                out.append("# " + key + " is not set")
        elif line.startswith("# CONFIG_LTO_NONE"):
            out.append("CONFIG_LTO_NONE=y")
        else:
            out.append(line)
    path.write_text("\n".join(out) + "\n")
    print("patched defconfig LTO/CFI/signing/stackprotector")


if __name__ == "__main__":
    patch_clang_version()
    patch_pgo()
    patch_disable_vendor()
    patch_warnings()
    patch_defconfig()
