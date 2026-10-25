import re
import sys
from pathlib import Path

log = Path(sys.argv[1]).read_text(errors="ignore")
names = sorted(set(re.findall(r"undefined symbol: (\w+)", log)))
lines = [
    "/* Auto-generated weak symbols for vendor code missing from the",
    " * open-source package. Data symbols satisfy both variable and",
    " * function references at link time.",
    " */",
    "#include <linux/kernel.h>",
    "",
]
for name in names:
    lines.append(f"char {name}[64] __attribute__((weak, aligned(8)));")
Path("init/vendor_stubs.c").write_text("\n".join(lines) + "\n")
print("generated", len(names), "weak stubs")
