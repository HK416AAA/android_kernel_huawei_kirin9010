from pathlib import Path


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


def patch_makefile() -> None:
    path = Path("Makefile")
    lines = path.read_text().splitlines()
    keep = [
        line for line in lines
        if "-fprofile-use" not in line
        and "--symbol-ordering-file" not in line
    ]
    path.write_text("\n".join(keep) + "\n")
    print("Makefile lines removed:", len(lines) - len(keep))


def patch_display() -> None:
    for name in (
        "platform_source/display/drivers/dpu_drm/Makefile",
        "platform_source/display/drivers/dpu_drm/heap/Makefile",
    ):
        path = Path(name)
        if path.exists():
            text = path.read_text().replace(
                "-I$(srctree)/../../vendor/hisi/ap/kernel/include", "")
            path.write_text(text)


if __name__ == "__main__":
    patch_defconfig()
    patch_makefile()
    patch_display()
