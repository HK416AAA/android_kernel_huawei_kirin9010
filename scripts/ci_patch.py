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


def patch_all_makefiles() -> None:
    changed = 0
    for path in Path(".").rglob("*"):
        if not path.is_file():
            continue
        if not (path.name == "Makefile" or path.name == "Kbuild"
                or path.name.startswith("Makefile.")
                or path.suffix == ".mk"):
            continue
        try:
            text = path.read_text(errors="ignore")
        except OSError:
            continue
        if "-fprofile-use" not in text and "--symbol-ordering-file" not in text:
            continue
        lines = text.splitlines()
        keep = [
            line for line in lines
            if "-fprofile-use" not in line
            and "--symbol-ordering-file" not in line
        ]
        path.write_text("\n".join(keep) + "\n")
        changed += 1
        print("patched", path)
    print("patched files:", changed)


def patch_display() -> None:
    for name in (
        "platform_source/display/drivers/dpu_drm/Makefile",
        "platform_source/display/drivers/dpu_drm/heap/Makefile",
    ):
        path = Path(name)
        if path.exists():
            path.write_text(path.read_text().replace(
                "-I$(srctree)/../../vendor/hisi/ap/kernel/include", ""))


if __name__ == "__main__":
    patch_defconfig()
    patch_all_makefiles()
    patch_display()
