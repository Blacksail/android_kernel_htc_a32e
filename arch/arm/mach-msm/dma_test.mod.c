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
	{ 0xc9e189ac, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x612e132d, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xdc479c52, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xd60e4d59, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x6ccf7bd7, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0xdf397353, __VMLINUX_SYMBOL_STR(msm_dmov_exec_cmd) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0xf473ffaf, __VMLINUX_SYMBOL_STR(down) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x7ade83e2, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xfc70e6fa, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9C80854EE50AF7E8572E891");
