from pathlib import Path

CLANG = "clang-r487747c"
WARN_OVERRIDES = (
    "KBUILD_CFLAGS += -Wno-error\n"
    "KBUILD_CFLAGS += -Wno-error=strict-prototypes "
    "-Wno-error=int-conversion -Wno-error=implicit-int\n"
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


def patch_warnings() -> None:
    path = Path("Makefile")
    lines = path.read_text().splitlines()
    if any(line.strip() == "KBUILD_CFLAGS += -Wno-error" for line in lines):
        return
    path.write_text(WARN_OVERRIDES + "\n" + "\n".join(lines) + "\n")
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
        )):
            out.append("# " + line.split("=", 1)[0] + " is not set")
        elif line.startswith("# CONFIG_LTO_NONE"):
            out.append("CONFIG_LTO_NONE=y")
        else:
            out.append(line)
    path.write_text("\n".join(out) + "\n")
    print("patched defconfig LTO/CFI")


if __name__ == "__main__":
    patch_clang_version()
    patch_pgo()
    patch_warnings()
    patch_defconfig()
