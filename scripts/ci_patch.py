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
        new = text
        for old in ("clang-r416183b1", "clang-r353983c", "clang-r365631c"):
            new = new.replace(old, "clang-r383902b")
        if new != text:
            path.write_text(new)
            print("patched clang version:", path)


if __name__ == "__main__":
    patch_clang_version()
