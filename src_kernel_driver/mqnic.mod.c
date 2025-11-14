#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(mqnic_enumerate_reg_block_list, "", "");
KSYMTAB_FUNC(mqnic_find_reg_block, "", "");
KSYMTAB_FUNC(mqnic_free_reg_block_list, "", "");
KSYMTAB_FUNC(mqnic_interface_get_tx_mtu, "", "");
KSYMTAB_FUNC(mqnic_interface_set_tx_mtu, "", "");
KSYMTAB_FUNC(mqnic_interface_get_rx_mtu, "", "");
KSYMTAB_FUNC(mqnic_interface_set_rx_mtu, "", "");
KSYMTAB_FUNC(mqnic_interface_get_rx_queue_map_rss_mask, "", "");
KSYMTAB_FUNC(mqnic_interface_set_rx_queue_map_rss_mask, "", "");
KSYMTAB_FUNC(mqnic_interface_get_rx_queue_map_app_mask, "", "");
KSYMTAB_FUNC(mqnic_interface_set_rx_queue_map_app_mask, "", "");
KSYMTAB_FUNC(mqnic_interface_get_rx_queue_map_indir_table, "", "");
KSYMTAB_FUNC(mqnic_interface_set_rx_queue_map_indir_table, "", "");
KSYMTAB_FUNC(mqnic_port_get_tx_ctrl, "", "");
KSYMTAB_FUNC(mqnic_port_set_tx_ctrl, "", "");
KSYMTAB_FUNC(mqnic_port_get_rx_ctrl, "", "");
KSYMTAB_FUNC(mqnic_port_set_rx_ctrl, "", "");
KSYMTAB_FUNC(mqnic_port_get_fc_ctrl, "", "");
KSYMTAB_FUNC(mqnic_port_set_fc_ctrl, "", "");
KSYMTAB_FUNC(mqnic_port_get_lfc_ctrl, "", "");
KSYMTAB_FUNC(mqnic_port_set_lfc_ctrl, "", "");
KSYMTAB_FUNC(mqnic_port_get_pfc_ctrl, "", "");
KSYMTAB_FUNC(mqnic_port_set_pfc_ctrl, "", "");
KSYMTAB_FUNC(mqnic_activate_sched_block, "", "");
KSYMTAB_FUNC(mqnic_deactivate_sched_block, "", "");
KSYMTAB_FUNC(mqnic_scheduler_enable, "", "");
KSYMTAB_FUNC(mqnic_scheduler_disable, "", "");
KSYMTAB_FUNC(mqnic_get_core_clk_nom_freq_hz, "", "");
KSYMTAB_FUNC(mqnic_get_ref_clk_nom_freq_hz, "", "");
KSYMTAB_FUNC(mqnic_get_core_clk_freq_hz, "", "");
KSYMTAB_FUNC(mqnic_get_clk_freq_hz, "", "");
KSYMTAB_FUNC(mqnic_core_clk_cycles_to_ns, "", "");
KSYMTAB_FUNC(mqnic_core_clk_ns_to_cycles, "", "");
KSYMTAB_FUNC(mqnic_ref_clk_cycles_to_ns, "", "");
KSYMTAB_FUNC(mqnic_ref_clk_ns_to_cycles, "", "");
KSYMTAB_FUNC(mqnic_stats_read, "", "");

SYMBOL_CRC(mqnic_enumerate_reg_block_list, 0xb3e7e039, "");
SYMBOL_CRC(mqnic_find_reg_block, 0x9cf0ed85, "");
SYMBOL_CRC(mqnic_free_reg_block_list, 0x5d5bc766, "");
SYMBOL_CRC(mqnic_interface_get_tx_mtu, 0x57309cee, "");
SYMBOL_CRC(mqnic_interface_set_tx_mtu, 0xd8c4aa66, "");
SYMBOL_CRC(mqnic_interface_get_rx_mtu, 0x57309cee, "");
SYMBOL_CRC(mqnic_interface_set_rx_mtu, 0xd8c4aa66, "");
SYMBOL_CRC(mqnic_interface_get_rx_queue_map_rss_mask, 0x6c508edb, "");
SYMBOL_CRC(mqnic_interface_set_rx_queue_map_rss_mask, 0x6ce700e3, "");
SYMBOL_CRC(mqnic_interface_get_rx_queue_map_app_mask, 0x6c508edb, "");
SYMBOL_CRC(mqnic_interface_set_rx_queue_map_app_mask, 0x6ce700e3, "");
SYMBOL_CRC(mqnic_interface_get_rx_queue_map_indir_table, 0x998211a9, "");
SYMBOL_CRC(mqnic_interface_set_rx_queue_map_indir_table, 0x1afbacf1, "");
SYMBOL_CRC(mqnic_port_get_tx_ctrl, 0x7cdd708d, "");
SYMBOL_CRC(mqnic_port_set_tx_ctrl, 0x36c8ed12, "");
SYMBOL_CRC(mqnic_port_get_rx_ctrl, 0x7cdd708d, "");
SYMBOL_CRC(mqnic_port_set_rx_ctrl, 0x36c8ed12, "");
SYMBOL_CRC(mqnic_port_get_fc_ctrl, 0x7cdd708d, "");
SYMBOL_CRC(mqnic_port_set_fc_ctrl, 0x36c8ed12, "");
SYMBOL_CRC(mqnic_port_get_lfc_ctrl, 0x7cdd708d, "");
SYMBOL_CRC(mqnic_port_set_lfc_ctrl, 0x36c8ed12, "");
SYMBOL_CRC(mqnic_port_get_pfc_ctrl, 0xed47a407, "");
SYMBOL_CRC(mqnic_port_set_pfc_ctrl, 0x817df996, "");
SYMBOL_CRC(mqnic_activate_sched_block, 0xf071e242, "");
SYMBOL_CRC(mqnic_deactivate_sched_block, 0x25dcccca, "");
SYMBOL_CRC(mqnic_scheduler_enable, 0x0fd6d3b6, "");
SYMBOL_CRC(mqnic_scheduler_disable, 0x875733a2, "");
SYMBOL_CRC(mqnic_get_core_clk_nom_freq_hz, 0x09f867fe, "");
SYMBOL_CRC(mqnic_get_ref_clk_nom_freq_hz, 0x09f867fe, "");
SYMBOL_CRC(mqnic_get_core_clk_freq_hz, 0x09f867fe, "");
SYMBOL_CRC(mqnic_get_clk_freq_hz, 0xaf767e83, "");
SYMBOL_CRC(mqnic_core_clk_cycles_to_ns, 0xb4e4f5ac, "");
SYMBOL_CRC(mqnic_core_clk_ns_to_cycles, 0xaabdf051, "");
SYMBOL_CRC(mqnic_ref_clk_cycles_to_ns, 0xb4e4f5ac, "");
SYMBOL_CRC(mqnic_ref_clk_ns_to_cycles, 0xaabdf051, "");
SYMBOL_CRC(mqnic_stats_read, 0x61d5ce6a, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1f824f4f, "alloc_etherdev_mqs" },
	{ 0xc45d298e, "is_vmalloc_addr" },
	{ 0x7e2232fb, "ioread32" },
	{ 0x83bca7d2, "napi_gro_frags" },
	{ 0xdb5c5ac9, "__init_rwsem" },
	{ 0xab571464, "misc_deregister" },
	{ 0x423a24a8, "devlink_unregister" },
	{ 0x964ae2f2, "devm_request_threaded_irq" },
	{ 0x2d4f4516, "param_ops_uint" },
	{ 0x62fffc04, "radix_tree_insert" },
	{ 0x092a35a2, "_copy_from_user" },
	{ 0xb3b48cc3, "devm_kmalloc" },
	{ 0x899e7373, "skb_tstamp_tx" },
	{ 0x2182515b, "__num_online_cpus" },
	{ 0xd272d446, "__rcu_read_lock" },
	{ 0xfad8f384, "iowrite32" },
	{ 0x534ed5f3, "__msecs_to_jiffies" },
	{ 0xd710adbf, "__kmalloc_noprof" },
	{ 0x680628e7, "ktime_get_ts64" },
	{ 0xde2396a2, "auxiliary_device_init" },
	{ 0x69c8f6fc, "pci_enable_device_mem" },
	{ 0x76730be0, "platform_driver_unregister" },
	{ 0x963a607c, "pci_alloc_irq_vectors" },
	{ 0x220fe466, "platform_get_irq" },
	{ 0x40a621c5, "snprintf" },
	{ 0x6a062cc4, "i2c_smbus_write_i2c_block_data" },
	{ 0x712d5919, "i2c_bit_add_bus" },
	{ 0x210598c9, "unregister_netdev" },
	{ 0xa0773b5b, "napi_get_frags" },
	{ 0xdba98963, "devlink_info_version_fixed_put" },
	{ 0x76f973b7, "radix_tree_lookup" },
	{ 0x6ffd2b78, "dma_unmap_page_attrs" },
	{ 0x6a8a412a, "__pci_register_driver" },
	{ 0x1be3b130, "devlink_port_attrs_set" },
	{ 0xd67f61fc, "ptp_clock_index" },
	{ 0x7403fb75, "pci_request_regions" },
	{ 0x78379b76, "reset_control_assert" },
	{ 0x71245655, "remap_pfn_range" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0xa7ae5434, "devlink_alloc_ns" },
	{ 0x423a24a8, "devlink_register" },
	{ 0x5d05e3c5, "pcpu_hot" },
	{ 0x423a24a8, "devlink_free" },
	{ 0x56c2310c, "eth_validate_addr" },
	{ 0xa01e3ca6, "netif_napi_add_weight_locked" },
	{ 0x0feb1e94, "usleep_range_state" },
	{ 0x3c8fac46, "netdev_warn" },
	{ 0x2352b148, "timer_delete_sync" },
	{ 0xeb0b3d5f, "pci_irq_vector" },
	{ 0xa6a33da7, "bitmap_free" },
	{ 0xd9f8a2d4, "__dynamic_dev_dbg" },
	{ 0xb06245e9, "netif_tx_unlock" },
	{ 0x2ebc98fa, "pci_ioremap_bar" },
	{ 0xde338d9a, "_raw_spin_lock" },
	{ 0x4056a4f8, "pci_unregister_driver" },
	{ 0x3c8fac46, "netdev_err" },
	{ 0xd272d446, "__fentry__" },
	{ 0xe199f25f, "jiffies_to_usecs" },
	{ 0x8c14c044, "dev_driver_string" },
	{ 0x8f48acc3, "dev_addr_mod" },
	{ 0xdba98963, "devlink_info_version_running_put" },
	{ 0x22029f10, "pci_read_config_dword" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0xcf7a9820, "dma_map_page_attrs" },
	{ 0x13aba9be, "napi_complete_done" },
	{ 0x98bddcb4, "__alloc_pages_noprof" },
	{ 0xe8213e80, "_printk" },
	{ 0xde338d9a, "_raw_spin_lock_irq" },
	{ 0xbf40c6ad, "platform_irq_count" },
	{ 0x36dc448b, "priv_to_devlink" },
	{ 0xf902d9a6, "skb_checksum_help" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x68038454, "atomic_notifier_chain_register" },
	{ 0xde338d9a, "_raw_spin_unlock_bh" },
	{ 0xbd3d594f, "put_device" },
	{ 0x7ce7afb5, "pci_free_irq" },
	{ 0x9479a1e8, "strnlen" },
	{ 0x7ec472ba, "numa_node" },
	{ 0x1fdec5bb, "pci_disable_link_state" },
	{ 0xa254dac2, "__free_pages" },
	{ 0xb1d6f058, "_dev_info" },
	{ 0x210598c9, "netif_device_attach" },
	{ 0x335965de, "i2c_del_adapter" },
	{ 0x61079369, "print_hex_dump" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0xbd03ed67, "page_offset_base" },
	{ 0xd70733be, "sized_strscpy" },
	{ 0x44decd6f, "hugetlb_optimize_vmemmap_key" },
	{ 0x4c57c0eb, "radix_tree_delete" },
	{ 0x249ac51d, "pci_clear_master" },
	{ 0x9893ae06, "__dma_sync_single_for_cpu" },
	{ 0x0688a4fa, "cc_mkdec" },
	{ 0x8a46b7bf, "devlink_port_unregister" },
	{ 0xa59da3c0, "down_write" },
	{ 0xb1d6f058, "_dev_err" },
	{ 0x742455cf, "pci_request_irq" },
	{ 0x30b0617d, "init_net" },
	{ 0xa59da3c0, "up_write" },
	{ 0x070425b3, "softnet_data" },
	{ 0xf61dc2cd, "i2c_unregister_device" },
	{ 0x2e8154f2, "radix_tree_next_chunk" },
	{ 0x7454fb2e, "ptp_clock_register" },
	{ 0xd272d446, "__rcu_read_unlock" },
	{ 0x77fdb0b9, "netif_set_real_num_tx_queues" },
	{ 0x4d16afca, "__auxiliary_device_add" },
	{ 0x32feeafc, "mod_timer" },
	{ 0xc20c00ae, "platform_get_resource" },
	{ 0xdb9a8da6, "netif_set_real_num_rx_queues" },
	{ 0x1f539e40, "device_attach" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0x78379b76, "reset_control_deassert" },
	{ 0x27687163, "mac_pton" },
	{ 0xf46d5bf3, "mutex_lock" },
	{ 0x775d33b4, "dma_alloc_attrs" },
	{ 0xa9e0800a, "pci_read_config_word" },
	{ 0xf2a51970, "napi_enable" },
	{ 0xde338d9a, "_raw_spin_unlock_irq" },
	{ 0x8a23df34, "set_normalized_timespec64" },
	{ 0x3c4d1bb7, "register_netdev" },
	{ 0x210598c9, "free_netdev" },
	{ 0xbd03ed67, "phys_base" },
	{ 0x680628e7, "ktime_get_raw_ts64" },
	{ 0x680628e7, "ktime_get_real_ts64" },
	{ 0x86632fd6, "_find_next_bit" },
	{ 0xfcc2e8f3, "__local_bh_enable_ip" },
	{ 0x31d64a3e, "ethtool_op_get_link" },
	{ 0xc1e6c71e, "__mutex_init" },
	{ 0x988188f2, "i2c_new_client_device" },
	{ 0xe54e0a6b, "__fortify_panic" },
	{ 0xdcf837ae, "pci_iounmap" },
	{ 0x210598c9, "netif_tx_stop_all_queues" },
	{ 0xa6963e32, "netif_tx_wake_queue" },
	{ 0xbd3d594f, "device_del" },
	{ 0xb311a158, "ns_to_timespec64" },
	{ 0x27683a56, "memset" },
	{ 0xb1d6f058, "_dev_warn" },
	{ 0xb34d1fb3, "bitmap_zalloc" },
	{ 0x0011321a, "misc_register" },
	{ 0x249ac51d, "pci_set_master" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x092a35a2, "_copy_to_user" },
	{ 0x2ecc6b55, "rtc_time64_to_tm" },
	{ 0x33348405, "atomic_notifier_call_chain" },
	{ 0xd67f61fc, "ptp_clock_unregister" },
	{ 0x6cfc9ab9, "__pskb_pull_tail" },
	{ 0xb06245e9, "netif_tx_lock" },
	{ 0xa59da3c0, "down_read" },
	{ 0xf161c930, "__netif_napi_del_locked" },
	{ 0xfe52ebe3, "__dynamic_netdev_dbg" },
	{ 0x058c185a, "jiffies" },
	{ 0xd72cd9aa, "__platform_driver_register" },
	{ 0x796b22ef, "dma_set_coherent_mask" },
	{ 0xa71be893, "__devm_reset_control_get" },
	{ 0xbd03ed67, "vmemmap_base" },
	{ 0x82fd7238, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x320185c7, "dma_free_attrs" },
	{ 0x68038454, "atomic_notifier_chain_unregister" },
	{ 0xf46d5bf3, "mutex_unlock" },
	{ 0x02f9bbf0, "init_timer_key" },
	{ 0x036414fc, "pci_release_regions" },
	{ 0xcbae5412, "__const_udelay" },
	{ 0x5a531633, "devm_ioremap_resource" },
	{ 0x249ac51d, "pcie_print_link_status" },
	{ 0xe18fddbc, "__kmalloc_cache_noprof" },
	{ 0x75738bed, "__warn_printk" },
	{ 0xb06245e9, "netif_carrier_off" },
	{ 0x62f06320, "devlink_priv" },
	{ 0x595b4905, "devlink_port_register_with_ops" },
	{ 0xde338d9a, "_raw_spin_lock_bh" },
	{ 0xb06245e9, "netif_carrier_on" },
	{ 0x249ac51d, "pci_disable_device" },
	{ 0xb1ad3f2f, "boot_cpu_data" },
	{ 0x796b22ef, "dma_set_mask" },
	{ 0x224a53e7, "get_random_bytes" },
	{ 0xce0b1bd7, "i2c_smbus_read_i2c_block_data" },
	{ 0x84f07bf7, "cachemode2protval" },
	{ 0xf2a51970, "__napi_schedule_irqoff" },
	{ 0x9ab73ced, "napi_schedule_prep" },
	{ 0x3c79049a, "napi_consume_skb" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0xf2a51970, "napi_disable" },
	{ 0x940b2af7, "dev_kfree_skb_any_reason" },
	{ 0xf1de9e85, "kvfree" },
	{ 0xea10ea06, "netdev_stats_to_stats64" },
	{ 0xde338d9a, "_raw_spin_unlock" },
	{ 0x1d942b14, "pci_free_irq_vectors" },
	{ 0x810df6c4, "__kvmalloc_node_noprof" },
	{ 0x00f2d519, "skb_clone_tx_timestamp" },
	{ 0xa59da3c0, "up_read" },
	{ 0x67628f51, "msleep" },
	{ 0x12ca6142, "ktime_get_with_offset" },
	{ 0xfc961df9, "kmalloc_caches" },
	{ 0xfbe26b10, "krealloc_noprof" },
	{ 0x3c8fac46, "netdev_info" },
	{ 0x37c0b5f3, "__request_module" },
	{ 0xd272d446, "synchronize_net" },
	{ 0xd268ca91, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x1f824f4f,
	0xc45d298e,
	0x7e2232fb,
	0x83bca7d2,
	0xdb5c5ac9,
	0xab571464,
	0x423a24a8,
	0x964ae2f2,
	0x2d4f4516,
	0x62fffc04,
	0x092a35a2,
	0xb3b48cc3,
	0x899e7373,
	0x2182515b,
	0xd272d446,
	0xfad8f384,
	0x534ed5f3,
	0xd710adbf,
	0x680628e7,
	0xde2396a2,
	0x69c8f6fc,
	0x76730be0,
	0x963a607c,
	0x220fe466,
	0x40a621c5,
	0x6a062cc4,
	0x712d5919,
	0x210598c9,
	0xa0773b5b,
	0xdba98963,
	0x76f973b7,
	0x6ffd2b78,
	0x6a8a412a,
	0x1be3b130,
	0xd67f61fc,
	0x7403fb75,
	0x78379b76,
	0x71245655,
	0xcb8b6ec6,
	0xa7ae5434,
	0x423a24a8,
	0x5d05e3c5,
	0x423a24a8,
	0x56c2310c,
	0xa01e3ca6,
	0x0feb1e94,
	0x3c8fac46,
	0x2352b148,
	0xeb0b3d5f,
	0xa6a33da7,
	0xd9f8a2d4,
	0xb06245e9,
	0x2ebc98fa,
	0xde338d9a,
	0x4056a4f8,
	0x3c8fac46,
	0xd272d446,
	0xe199f25f,
	0x8c14c044,
	0x8f48acc3,
	0xdba98963,
	0x22029f10,
	0x5a844b26,
	0xcf7a9820,
	0x13aba9be,
	0x98bddcb4,
	0xe8213e80,
	0xde338d9a,
	0xbf40c6ad,
	0x36dc448b,
	0xf902d9a6,
	0xd272d446,
	0x68038454,
	0xde338d9a,
	0xbd3d594f,
	0x7ce7afb5,
	0x9479a1e8,
	0x7ec472ba,
	0x1fdec5bb,
	0xa254dac2,
	0xb1d6f058,
	0x210598c9,
	0x335965de,
	0x61079369,
	0x90a48d82,
	0xbd03ed67,
	0xd70733be,
	0x44decd6f,
	0x4c57c0eb,
	0x249ac51d,
	0x9893ae06,
	0x0688a4fa,
	0x8a46b7bf,
	0xa59da3c0,
	0xb1d6f058,
	0x742455cf,
	0x30b0617d,
	0xa59da3c0,
	0x070425b3,
	0xf61dc2cd,
	0x2e8154f2,
	0x7454fb2e,
	0xd272d446,
	0x77fdb0b9,
	0x4d16afca,
	0x32feeafc,
	0xc20c00ae,
	0xdb9a8da6,
	0x1f539e40,
	0xbd03ed67,
	0x78379b76,
	0x27687163,
	0xf46d5bf3,
	0x775d33b4,
	0xa9e0800a,
	0xf2a51970,
	0xde338d9a,
	0x8a23df34,
	0x3c4d1bb7,
	0x210598c9,
	0xbd03ed67,
	0x680628e7,
	0x680628e7,
	0x86632fd6,
	0xfcc2e8f3,
	0x31d64a3e,
	0xc1e6c71e,
	0x988188f2,
	0xe54e0a6b,
	0xdcf837ae,
	0x210598c9,
	0xa6963e32,
	0xbd3d594f,
	0xb311a158,
	0x27683a56,
	0xb1d6f058,
	0xb34d1fb3,
	0x0011321a,
	0x249ac51d,
	0xd272d446,
	0x092a35a2,
	0x2ecc6b55,
	0x33348405,
	0xd67f61fc,
	0x6cfc9ab9,
	0xb06245e9,
	0xa59da3c0,
	0xf161c930,
	0xfe52ebe3,
	0x058c185a,
	0xd72cd9aa,
	0x796b22ef,
	0xa71be893,
	0xbd03ed67,
	0x82fd7238,
	0x320185c7,
	0x68038454,
	0xf46d5bf3,
	0x02f9bbf0,
	0x036414fc,
	0xcbae5412,
	0x5a531633,
	0x249ac51d,
	0xe18fddbc,
	0x75738bed,
	0xb06245e9,
	0x62f06320,
	0x595b4905,
	0xde338d9a,
	0xb06245e9,
	0x249ac51d,
	0xb1ad3f2f,
	0x796b22ef,
	0x224a53e7,
	0xce0b1bd7,
	0x84f07bf7,
	0xf2a51970,
	0x9ab73ced,
	0x3c79049a,
	0xe4de56b4,
	0xf2a51970,
	0x940b2af7,
	0xf1de9e85,
	0xea10ea06,
	0xde338d9a,
	0x1d942b14,
	0x810df6c4,
	0x00f2d519,
	0xa59da3c0,
	0x67628f51,
	0x12ca6142,
	0xfc961df9,
	0xfbe26b10,
	0x3c8fac46,
	0x37c0b5f3,
	0xd272d446,
	0xd268ca91,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"alloc_etherdev_mqs\0"
	"is_vmalloc_addr\0"
	"ioread32\0"
	"napi_gro_frags\0"
	"__init_rwsem\0"
	"misc_deregister\0"
	"devlink_unregister\0"
	"devm_request_threaded_irq\0"
	"param_ops_uint\0"
	"radix_tree_insert\0"
	"_copy_from_user\0"
	"devm_kmalloc\0"
	"skb_tstamp_tx\0"
	"__num_online_cpus\0"
	"__rcu_read_lock\0"
	"iowrite32\0"
	"__msecs_to_jiffies\0"
	"__kmalloc_noprof\0"
	"ktime_get_ts64\0"
	"auxiliary_device_init\0"
	"pci_enable_device_mem\0"
	"platform_driver_unregister\0"
	"pci_alloc_irq_vectors\0"
	"platform_get_irq\0"
	"snprintf\0"
	"i2c_smbus_write_i2c_block_data\0"
	"i2c_bit_add_bus\0"
	"unregister_netdev\0"
	"napi_get_frags\0"
	"devlink_info_version_fixed_put\0"
	"radix_tree_lookup\0"
	"dma_unmap_page_attrs\0"
	"__pci_register_driver\0"
	"devlink_port_attrs_set\0"
	"ptp_clock_index\0"
	"pci_request_regions\0"
	"reset_control_assert\0"
	"remap_pfn_range\0"
	"kfree\0"
	"devlink_alloc_ns\0"
	"devlink_register\0"
	"pcpu_hot\0"
	"devlink_free\0"
	"eth_validate_addr\0"
	"netif_napi_add_weight_locked\0"
	"usleep_range_state\0"
	"netdev_warn\0"
	"timer_delete_sync\0"
	"pci_irq_vector\0"
	"bitmap_free\0"
	"__dynamic_dev_dbg\0"
	"netif_tx_unlock\0"
	"pci_ioremap_bar\0"
	"_raw_spin_lock\0"
	"pci_unregister_driver\0"
	"netdev_err\0"
	"__fentry__\0"
	"jiffies_to_usecs\0"
	"dev_driver_string\0"
	"dev_addr_mod\0"
	"devlink_info_version_running_put\0"
	"pci_read_config_dword\0"
	"__x86_indirect_thunk_rax\0"
	"dma_map_page_attrs\0"
	"napi_complete_done\0"
	"__alloc_pages_noprof\0"
	"_printk\0"
	"_raw_spin_lock_irq\0"
	"platform_irq_count\0"
	"priv_to_devlink\0"
	"skb_checksum_help\0"
	"__stack_chk_fail\0"
	"atomic_notifier_chain_register\0"
	"_raw_spin_unlock_bh\0"
	"put_device\0"
	"pci_free_irq\0"
	"strnlen\0"
	"numa_node\0"
	"pci_disable_link_state\0"
	"__free_pages\0"
	"_dev_info\0"
	"netif_device_attach\0"
	"i2c_del_adapter\0"
	"print_hex_dump\0"
	"__ubsan_handle_out_of_bounds\0"
	"page_offset_base\0"
	"sized_strscpy\0"
	"hugetlb_optimize_vmemmap_key\0"
	"radix_tree_delete\0"
	"pci_clear_master\0"
	"__dma_sync_single_for_cpu\0"
	"cc_mkdec\0"
	"devlink_port_unregister\0"
	"down_write\0"
	"_dev_err\0"
	"pci_request_irq\0"
	"init_net\0"
	"up_write\0"
	"softnet_data\0"
	"i2c_unregister_device\0"
	"radix_tree_next_chunk\0"
	"ptp_clock_register\0"
	"__rcu_read_unlock\0"
	"netif_set_real_num_tx_queues\0"
	"__auxiliary_device_add\0"
	"mod_timer\0"
	"platform_get_resource\0"
	"netif_set_real_num_rx_queues\0"
	"device_attach\0"
	"random_kmalloc_seed\0"
	"reset_control_deassert\0"
	"mac_pton\0"
	"mutex_lock\0"
	"dma_alloc_attrs\0"
	"pci_read_config_word\0"
	"napi_enable\0"
	"_raw_spin_unlock_irq\0"
	"set_normalized_timespec64\0"
	"register_netdev\0"
	"free_netdev\0"
	"phys_base\0"
	"ktime_get_raw_ts64\0"
	"ktime_get_real_ts64\0"
	"_find_next_bit\0"
	"__local_bh_enable_ip\0"
	"ethtool_op_get_link\0"
	"__mutex_init\0"
	"i2c_new_client_device\0"
	"__fortify_panic\0"
	"pci_iounmap\0"
	"netif_tx_stop_all_queues\0"
	"netif_tx_wake_queue\0"
	"device_del\0"
	"ns_to_timespec64\0"
	"memset\0"
	"_dev_warn\0"
	"bitmap_zalloc\0"
	"misc_register\0"
	"pci_set_master\0"
	"__x86_return_thunk\0"
	"_copy_to_user\0"
	"rtc_time64_to_tm\0"
	"atomic_notifier_call_chain\0"
	"ptp_clock_unregister\0"
	"__pskb_pull_tail\0"
	"netif_tx_lock\0"
	"down_read\0"
	"__netif_napi_del_locked\0"
	"__dynamic_netdev_dbg\0"
	"jiffies\0"
	"__platform_driver_register\0"
	"dma_set_coherent_mask\0"
	"__devm_reset_control_get\0"
	"vmemmap_base\0"
	"__ubsan_handle_shift_out_of_bounds\0"
	"dma_free_attrs\0"
	"atomic_notifier_chain_unregister\0"
	"mutex_unlock\0"
	"init_timer_key\0"
	"pci_release_regions\0"
	"__const_udelay\0"
	"devm_ioremap_resource\0"
	"pcie_print_link_status\0"
	"__kmalloc_cache_noprof\0"
	"__warn_printk\0"
	"netif_carrier_off\0"
	"devlink_priv\0"
	"devlink_port_register_with_ops\0"
	"_raw_spin_lock_bh\0"
	"netif_carrier_on\0"
	"pci_disable_device\0"
	"boot_cpu_data\0"
	"dma_set_mask\0"
	"get_random_bytes\0"
	"i2c_smbus_read_i2c_block_data\0"
	"cachemode2protval\0"
	"__napi_schedule_irqoff\0"
	"napi_schedule_prep\0"
	"napi_consume_skb\0"
	"__ubsan_handle_load_invalid_value\0"
	"napi_disable\0"
	"dev_kfree_skb_any_reason\0"
	"kvfree\0"
	"netdev_stats_to_stats64\0"
	"_raw_spin_unlock\0"
	"pci_free_irq_vectors\0"
	"__kvmalloc_node_noprof\0"
	"skb_clone_tx_timestamp\0"
	"up_read\0"
	"msleep\0"
	"ktime_get_with_offset\0"
	"kmalloc_caches\0"
	"krealloc_noprof\0"
	"netdev_info\0"
	"__request_module\0"
	"synchronize_net\0"
	"module_layout\0"
;

MODULE_INFO(depends, "i2c-algo-bit");

MODULE_ALIAS("pci:v00001234d00001001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005543d00001001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1392C380224A3C2C8FF517D");
