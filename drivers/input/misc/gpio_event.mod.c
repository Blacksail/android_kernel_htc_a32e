#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xcd590367, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x7884c528, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x60d0f8fd, __VMLINUX_SYMBOL_STR(platform_driver_register) },
	{ 0xab8d38da, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x4e2ce103, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x78d88aa3, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x16d59ef, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9072bb5f, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x1d4d9543, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

