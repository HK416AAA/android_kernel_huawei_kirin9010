from pathlib import Path


def patch_clang_version() -> None:
    for path in Path(".").rglob("*"):
        if not path.is_file():
            continue
        if not (path.name == "Makefile" or path.name.startswith("Makefile.")
                or path.name == "Kbuild" or path.suffix == ".mk"):
            continue
        try:
            text = path.read_text(errors="ignore")
        except OSError:
            continue
        if "clang-r416183b1" in text:
            path.write_text(text.replace("clang-r416183b1", "clang-r353983c"))
            print("patched clang version:", path)


def patch_defconfig() -> None:
    path = Path("arch/arm64/configs/merge_8425m_defconfig")
    lines = path.read_text().splitlines()
    out = []
    for line in lines:
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


if __name__ == "__main__":
    patch_clang_version()
    patch_defconfig()
