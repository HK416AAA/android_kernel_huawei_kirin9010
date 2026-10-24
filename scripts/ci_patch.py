from pathlib import Path

CLANG = "clang-r487747c"
MISSING_SUBTREES = (
    "platform_source/cee/drivers/heca",
    "platform_source/cee/drivers/pm/main",
    "platform_source/see/drivers/bl31_hibernate",
    "platform_source/see/drivers/hhee",
    "platform_source/basicplatform/drivers/rpmb",
    "platform_source/audio/drivers/hifi_dsp",
    "platform_source/basicplatform/drivers/clk/extreme/platform",
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


def patch_missing_subtrees() -> None:
    for rel in MISSING_SUBTREES:
        path = Path(rel) / "Makefile"
        if not path.exists():
            continue
        lines = path.read_text(errors="ignore").splitlines()
        out = []
        for line in lines:
            stripped = line.strip()
            if stripped.startswith("obj-y") or stripped.startswith("obj-$(CONFIG"):
                out.append("# " + stripped + "   # disabled: incomplete vendor source")
            else:
                out.append(line)
        path.write_text("\n".join(out) + "\n")
        print("disabled vendor subtree:", rel)


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
    )
    path.write_text(prefix + "\n" + "\n".join(lines) + "\n")
    print("prefixed global -Wno-error overrides")


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
    print("patched defconfig LTO/CFI/signing")


if __name__ == "__main__":
    patch_clang_version()
    patch_pgo()
    patch_missing_subtrees()
    patch_warnings()
    patch_defconfig()
