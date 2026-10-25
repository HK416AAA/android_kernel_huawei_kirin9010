from pathlib import Path

CLANG = "clang-r487747c"

# Vendor subtrees under drivers/ that are safe to drop (not used by the
# boot/UEFI path). Core drivers (usb, media, hid, gpu, opp, devfreq) stay.
VENDOR_DRIVERS = (
    "connectivity", "hwnet", "hwpower", "huawei_platform",
    "dubai", "iomt_host", "sim_adapt", "emcom",
    "reclaim_acct", "mdmbuf", "mntn", "hwevent",
    "platform_drivers", "devkit", "hwmemcheck", "cpuload",
)

# Leaf directories inside platform_source whose sources are missing from the
# open-source package. platform_source itself stays enabled so its see/hck
# hooks (used by core kernel code) are still built.
MISSING_LEAVES = (
    "platform_source/cee/drivers/heca",
    "platform_source/cee/drivers/pm/main",
    "platform_source/see/drivers/bl31_hibernate",
    "platform_source/see/drivers/hhee",
    "platform_source/basicplatform/drivers/rpmb",
    "platform_source/audio/drivers/hifi_dsp",
    "platform_source/basicplatform/drivers/clk/extreme/platform",
)

STUBS = r"""/* Stubs for vendor-only symbols whose sources are absent from the
 * open-source package (missing leaf directories).
 */
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>

#define WEAK_VOID(name) void name(void) { } EXPORT_SYMBOL(name);
#define WEAK_INT(name) int name(void) { return 0; } EXPORT_SYMBOL(name);
#define WEAK_UL(name) unsigned long name(void) { return 0; } EXPORT_SYMBOL(name);

WEAK_VOID(register_sr_mntn)
WEAK_VOID(wait_dsp_load_completion_timeout)
WEAK_INT(dsp_misc_get_platform_type)
WEAK_INT(dsp_load_and_verify_image)
WEAK_VOID(dsp_watchdog_send_event)
WEAK_UL(om_get_dsp_timestamp)
WEAK_VOID(dsp_reset_release_syscache)
WEAK_INT(is_dsp_img_loaded)
WEAK_INT(get_rpmb_key_status)
WEAK_INT(get_rpmb_init_status)
WEAK_INT(rpmb_ufs_init)
WEAK_VOID(mspc_report_rpmb)
WEAK_VOID(mspc_exception_to_reset_rpmb)
WEAK_VOID(hkip_hvc4)
WEAK_VOID(hkip_hvc3)
WEAK_INT(hhee_check_enable)
WEAK_INT(heca_get_next_freq)
WEAK_INT(heca_cpu_enable)
WEAK_VOID(heca_unregister_dev_freq_notifier)
WEAK_INT(heca_get_kernel_freq)
WEAK_VOID(heca_context_switch)
WEAK_VOID(hibernate_get_slot)
WEAK_VOID(hhee_hibernate_freeze)
WEAK_VOID(hhee_hibernate_restore)
WEAK_VOID(bl31_hibernate_freeze)
WEAK_VOID(bl31_hibernate_restore)
"""


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


def patch_missing_leaves() -> None:
    for rel in MISSING_LEAVES:
        path = Path(rel) / "Makefile"
        if not path.exists():
            continue
        out = []
        for line in path.read_text(errors="ignore").splitlines():
            stripped = line.strip()
            if stripped.startswith(("obj-y", "obj-$(CONFIG", "obj-m")):
                out.append("# " + stripped + "   # disabled: missing vendor source")
            else:
                out.append(line)
        path.write_text("\n".join(out) + "\n")
        print("disabled leaf:", rel)


def patch_disable_vendor_drivers() -> None:
    drv = Path("drivers/Makefile")
    if not drv.exists():
        return
    out = []
    for line in drv.read_text(errors="ignore").splitlines():
        stripped = line.strip()
        if stripped.startswith(("obj-y", "obj-$(CONFIG", "obj-m")) and \
                any(name + "/" in stripped for name in VENDOR_DRIVERS):
            out.append("# " + stripped + "   # disabled: vendor driver")
        else:
            out.append(line)
    drv.write_text("\n".join(out) + "\n")
    print("disabled vendor drivers")


def patch_stubs() -> None:
    Path("init/vendor_stubs.c").write_text(STUBS)
    makefile = Path("init/Makefile")
    text = makefile.read_text()
    if "vendor_stubs.o" not in text:
        makefile.write_text(text.rstrip() + "\nobj-y += vendor_stubs.o\n")
    print("installed init/vendor_stubs.c")


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
            "CONFIG_LTO=", "CONFIG_LTO_CLANG=", "CONFIG_LTO_CLANG_FULL=",
            "CONFIG_CFI_CLANG=", "CONFIG_CFI_CLANG_SHADOW=",
            "CONFIG_MODULE_SIG", "CONFIG_SYSTEM_TRUSTED_KEYS",
            "CONFIG_SYSTEM_REVOCATION_KEYS", "CONFIG_STACKPROTECTOR",
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
    print("patched defconfig")


def patch_ldflags_cleanup() -> None:
    path = Path("arch/arm64/Makefile")
    if not path.exists():
        return
    text = path.read_text(errors="ignore")
    if "--unresolved-symbols=ignore-all" in text:
        text = text.replace("LDFLAGS_vmlinux += --unresolved-symbols=ignore-all\n", "")
        path.write_text(text)
        print("removed ignore-all LDFLAGS")


if __name__ == "__main__":
    patch_ldflags_cleanup()
    patch_clang_version()
    patch_pgo()
    patch_missing_leaves()
    patch_disable_vendor_drivers()
    patch_stubs()
    patch_warnings()
    patch_defconfig()
