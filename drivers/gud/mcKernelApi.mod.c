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
	{ 0x7ade83e2, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x5d019884, __VMLINUX_SYMBOL_STR(mobicore_open) },
	{ 0xe6d47bb8, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xcf3a7370, __VMLINUX_SYMBOL_STR(mobicore_unmap_vmem) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xb5b4e145, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f73d397, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xd715330f, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xdf5a94c6, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0x275b97b5, __VMLINUX_SYMBOL_STR(mobicore_map_vmem) },
	{ 0x4b08f7aa, __VMLINUX_SYMBOL_STR(mobicore_free_wsm) },
	{ 0x16404b6, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x1a7c4082, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x2c3c9f8a, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x4c51f8f3, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x78294ef2, __VMLINUX_SYMBOL_STR(mobicore_allocate_wsm) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xb4315810, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x4bb46a15, __VMLINUX_SYMBOL_STR(netlink_ack) },
	{ 0xfc70e6fa, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x2c2f802e, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xad7169a0, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x21ce5771, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x837d0f0a, __VMLINUX_SYMBOL_STR(down_timeout) },
	{ 0x1d064c90, __VMLINUX_SYMBOL_STR(mobicore_release) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mcDrvModule";

