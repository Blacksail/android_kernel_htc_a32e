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
	{ 0x9d93ede, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xc9e189ac, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x612e132d, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xbbccdff9, __VMLINUX_SYMBOL_STR(msm_rpm_free_request) },
	{ 0xcd9436d6, __VMLINUX_SYMBOL_STR(msm_rpm_wait_for_ack) },
	{ 0xd60cf4cf, __VMLINUX_SYMBOL_STR(msm_rpm_send_request) },
	{ 0x47cfdaeb, __VMLINUX_SYMBOL_STR(msm_rpm_add_kvp_data) },
	{ 0x980434a2, __VMLINUX_SYMBOL_STR(msm_rpm_create_request) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x2beb418e, __VMLINUX_SYMBOL_STR(might_fault) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xed6b0987, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0x7ade83e2, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xfc70e6fa, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xdc479c52, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2E4B61A17B6EEADE9A8E65D");
