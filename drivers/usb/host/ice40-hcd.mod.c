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
	{ 0x4d405db8, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x1976aa06, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x90cd7121, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0x4048a1a1, __VMLINUX_SYMBOL_STR(ftrace_event_reg) },
	{ 0xa0ca83c, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x5698c44b, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xfbc655dd, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x8283734b, __VMLINUX_SYMBOL_STR(spi_register_driver) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x652f9ba5, __VMLINUX_SYMBOL_STR(usb_hcd_poll_rh_status) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x8d5b710c, __VMLINUX_SYMBOL_STR(pm_qos_update_request) },
	{ 0xea17b7d8, __VMLINUX_SYMBOL_STR(pm_relax) },
	{ 0xbf7fe3f3, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x3a9c5f6d, __VMLINUX_SYMBOL_STR(pm_qos_remove_request) },
	{ 0x63c6cdb2, __VMLINUX_SYMBOL_STR(usb_remove_hcd) },
	{ 0x1d4d9543, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x13b65b45, __VMLINUX_SYMBOL_STR(pm_qos_add_request) },
	{ 0x35871bc5, __VMLINUX_SYMBOL_STR(pm_stay_awake) },
	{ 0xafc0338a, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0xcbc9cf5e, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xc86121d2, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0x68ea9923, __VMLINUX_SYMBOL_STR(pm_runtime_no_callbacks) },
	{ 0x1ca2a2b0, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xa23e8b15, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xef4ffd02, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x73f26f56, __VMLINUX_SYMBOL_STR(usb_put_hcd) },
	{ 0x54bb7e43, __VMLINUX_SYMBOL_STR(usb_add_hcd) },
	{ 0xc2f26a84, __VMLINUX_SYMBOL_STR(usb_create_hcd) },
	{ 0x2c53ad7c, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x7141f031, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xd217e9e6, __VMLINUX_SYMBOL_STR(trace_set_clr_event) },
	{ 0xd715330f, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xdac11bae, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xa0f04079, __VMLINUX_SYMBOL_STR(devm_gpio_request) },
	{ 0xb3ddad32, __VMLINUX_SYMBOL_STR(devm_pinctrl_put) },
	{ 0x94cd2e1a, __VMLINUX_SYMBOL_STR(pinctrl_select_state) },
	{ 0x83fc3e82, __VMLINUX_SYMBOL_STR(pinctrl_lookup_state) },
	{ 0x2c69addf, __VMLINUX_SYMBOL_STR(devm_pinctrl_get) },
	{ 0x98cc564a, __VMLINUX_SYMBOL_STR(regulator_set_voltage) },
	{ 0x46448f8, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0x45ac0ff4, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x260cf8f8, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0x3757c9b, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xb2c3be87, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x2015fe65, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x6c8d5ae8, __VMLINUX_SYMBOL_STR(__gpio_get_value) },
	{ 0x43e324fb, __VMLINUX_SYMBOL_STR(spi_sync_locked) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xca16dbe7, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0x1a578ca2, __VMLINUX_SYMBOL_STR(spi_bus_unlock) },
	{ 0x88987590, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0x3b14a61e, __VMLINUX_SYMBOL_STR(spi_bus_lock) },
	{ 0x40bc8be6, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x11d86358, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xa7a10fb1, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x65d6d0f0, __VMLINUX_SYMBOL_STR(gpio_direction_input) },
	{ 0x1258d9d9, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0xa8f59416, __VMLINUX_SYMBOL_STR(gpio_direction_output) },
	{ 0x1e1322eb, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x7ade83e2, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xfc70e6fa, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x8eecca87, __VMLINUX_SYMBOL_STR(usb_hcd_link_urb_to_ep) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x4ee4780, __VMLINUX_SYMBOL_STR(usb_hcd_check_unlink_urb) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xc5e703ff, __VMLINUX_SYMBOL_STR(usb_hcd_giveback_urb) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x42d39916, __VMLINUX_SYMBOL_STR(usb_hcd_unlink_urb_from_ep) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xad31941f, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0x4cdb3178, __VMLINUX_SYMBOL_STR(ns_to_timeval) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xe6d47bb8, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf0567abd, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0x7e18ebf2, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xaef6e502, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x1e3a88fb, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0x2bc09792, __VMLINUX_SYMBOL_STR(ftrace_raw_output_prep) },
	{ 0x498d293a, __VMLINUX_SYMBOL_STR(trace_buffer_unlock_commit) },
	{ 0x3d89ead, __VMLINUX_SYMBOL_STR(filter_current_check_discard) },
	{ 0x9621849f, __VMLINUX_SYMBOL_STR(ring_buffer_event_data) },
	{ 0xe5bd3fe8, __VMLINUX_SYMBOL_STR(trace_event_buffer_lock_reserve) },
	{ 0x7f779b8f, __VMLINUX_SYMBOL_STR(perf_tp_event) },
	{ 0xd788742d, __VMLINUX_SYMBOL_STR(perf_trace_buf_prepare) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xdeb6aac7, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

