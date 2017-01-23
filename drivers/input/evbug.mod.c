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
	{ 0xe53f1a95, __VMLINUX_SYMBOL_STR(input_unregister_handler) },
	{ 0xc5f53cb2, __VMLINUX_SYMBOL_STR(input_register_handler) },
	{ 0x7ade83e2, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x72f9b58, __VMLINUX_SYMBOL_STR(input_open_device) },
	{ 0x2ef707b9, __VMLINUX_SYMBOL_STR(input_register_handle) },
	{ 0xfc70e6fa, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd282b82f, __VMLINUX_SYMBOL_STR(input_unregister_handle) },
	{ 0x95e5741b, __VMLINUX_SYMBOL_STR(input_close_device) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("input:b*v*p*e*-e*k*r*a*m*l*s*f*w*");
