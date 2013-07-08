struct NSISupports {
  uint32_t (*QueryInterface)(void *, void *, void *);
  uint32_t (*AddRef)(void *);
  uint32_t (*Release)(void *);
};
struct NSIException {
  struct NSISupports NSISupports;
  uint32_t (*get_message)(void *, void *);
  uint32_t (*get_result)(void *, void *);
  uint32_t (*get_name)(void *, void *);
  uint32_t (*get_filename)(void *, void *);
  uint32_t (*get_line_number)(void *, void *);
  uint32_t (*get_column_number)(void *, void *);
  uint32_t (*get_location)(void *, void *);
  uint32_t (*get_inner)(void *, void *);
  uint32_t (*get_data)(void *, void *);
  uint32_t (*to_string)(void *, wstring_t);
};
struct VirtualBoxErrorInfo {
  struct NSIException NSIException;
  uint32_t (*get_result_code)(void *, void *);
  uint32_t (*get_interface_i_d)(void *, void *);
  uint32_t (*get_component)(void *, void *);
  uint32_t (*get_text)(void *, void *);
  uint32_t (*get_next)(void *, void *);
};
struct DHCPServer {
  struct NSISupports NSISupports;
  uint32_t (*get_enabled)(void *, void *);
  uint32_t (*get_ip_address)(void *, void *);
  uint32_t (*get_network_mask)(void *, void *);
  uint32_t (*get_network_name)(void *, void *);
  uint32_t (*get_lower_ip)(void *, void *);
  uint32_t (*get_upper_ip)(void *, void *);
  uint32_t (*set_configuration)(void *, wstring_t, wstring_t, wstring_t, wstring_t);
  uint32_t (*start)(void *, wstring_t, wstring_t, wstring_t);
  uint32_t (*stop)(void *);
};
struct VirtualBox {
  struct NSISupports NSISupports;
  uint32_t (*get_version)(void *, void *);
  uint32_t (*get_version_normalized)(void *, void *);
  uint32_t (*get_revision)(void *, void *);
  uint32_t (*get_package_type)(void *, void *);
  uint32_t (*get_api_version)(void *, void *);
  uint32_t (*get_home_folder)(void *, void *);
  uint32_t (*get_settings_file_path)(void *, void *);
  uint32_t (*get_host)(void *, void *);
  uint32_t (*get_system_properties)(void *, void *);
  uint32_t (*get_machines)(void *, void *, void *);
  uint32_t (*get_machine_groups)(void *, void *, void *);
  uint32_t (*get_hard_disks)(void *, void *, void *);
  uint32_t (*get_dvd_images)(void *, void *, void *);
  uint32_t (*get_floppy_images)(void *, void *, void *);
  uint32_t (*get_progress_operations)(void *, void *, void *);
  uint32_t (*get_guest_os_types)(void *, void *, void *);
  uint32_t (*get_shared_folders)(void *, void *, void *);
  uint32_t (*get_performance_collector)(void *, void *);
  uint32_t (*get_dhcp_servers)(void *, void *, void *);
  uint32_t (*get_event_source)(void *, void *);
  uint32_t (*get_extension_pack_manager)(void *, void *);
  uint32_t (*get_internal_networks)(void *, void *, void *);
  uint32_t (*get_generic_network_drivers)(void *, void *, void *);
  uint32_t (*compose_machine_filename)(void *, wstring_t, wstring_t, wstring_t, wstring_t, void *);
  uint32_t (*create_machine)(void *, wstring_t, wstring_t, uint32_t, void *, wstring_t, wstring_t, void *);
  uint32_t (*open_machine)(void *, wstring_t, void *);
  uint32_t (*register_machine)(void *, void *);
  uint32_t (*find_machine)(void *, wstring_t, void *);
  uint32_t (*get_machines_by_groups)(void *, uint32_t, void *, void *, void *);
  uint32_t (*get_machine_states)(void *, uint32_t, void *, void *, void *);
  uint32_t (*create_appliance)(void *, void *);
  uint32_t (*create_hard_disk)(void *, wstring_t, wstring_t, void *);
  uint32_t (*open_medium)(void *, wstring_t, uint32_t, uint32_t, bool_t, void *);
  uint32_t (*get_guest_os_type)(void *, wstring_t, void *);
  uint32_t (*create_shared_folder)(void *, wstring_t, wstring_t, bool_t, bool_t);
  uint32_t (*remove_shared_folder)(void *, wstring_t);
  uint32_t (*get_extra_data_keys)(void *, void *, void *);
  uint32_t (*get_extra_data)(void *, wstring_t, void *);
  uint32_t (*set_extra_data)(void *, wstring_t, wstring_t);
  uint32_t (*set_settings_secret)(void *, wstring_t);
  uint32_t (*create_dhcp_server)(void *, wstring_t, void *);
  uint32_t (*find_dhcp_server_by_network_name)(void *, wstring_t, void *);
  uint32_t (*remove_dhcp_server)(void *, void *);
  uint32_t (*check_firmware_present)(void *, uint32_t, wstring_t, void *, void *, void *);
};
struct VFSExplorer {
  struct NSISupports NSISupports;
  uint32_t (*get_path)(void *, void *);
  uint32_t (*get_type)(void *, void *);
  uint32_t (*update)(void *, void *);
  uint32_t (*cd)(void *, wstring_t, void *);
  uint32_t (*cd_up)(void *, void *);
  uint32_t (*entry_list)(void *, void *, void *, void *, void *, void *, void *, void *, void *);
  uint32_t (*exists)(void *, uint32_t, void *, void *, void *);
  uint32_t (*remove)(void *, uint32_t, void *, void *);
};
struct Appliance {
  struct NSISupports NSISupports;
  uint32_t (*get_path)(void *, void *);
  uint32_t (*get_disks)(void *, void *, void *);
  uint32_t (*get_virtual_system_descriptions)(void *, void *, void *);
  uint32_t (*get_machines)(void *, void *, void *);
  uint32_t (*read)(void *, wstring_t, void *);
  uint32_t (*interpret)(void *);
  uint32_t (*import_machines)(void *, uint32_t, void *, void *);
  uint32_t (*create_vfs_explorer)(void *, wstring_t, void *);
  uint32_t (*write)(void *, wstring_t, bool_t, wstring_t, void *);
  uint32_t (*get_warnings)(void *, void *, void *);
};
struct VirtualSystemDescription {
  struct NSISupports NSISupports;
  uint32_t (*get_count)(void *, void *);
  uint32_t (*get_description)(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
  uint32_t (*get_description_by_type)(void *, uint32_t, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
  uint32_t (*get_values_by_type)(void *, uint32_t, uint32_t, void *, void *);
  uint32_t (*set_final_values)(void *, uint32_t, void *, uint32_t, void *, uint32_t, void *);
  uint32_t (*add_description)(void *, uint32_t, wstring_t, wstring_t);
};
struct InternalMachineControl {
  struct NSISupports NSISupports;
  uint32_t (*set_remove_saved_state_file)(void *, bool_t);
  uint32_t (*update_state)(void *, uint32_t);
  uint32_t (*get_ipcid)(void *, void *);
  uint32_t (*begin_power_up)(void *, void *);
  uint32_t (*end_power_up)(void *, int32_t);
  uint32_t (*begin_powering_down)(void *, void *);
  uint32_t (*end_powering_down)(void *, int32_t, wstring_t);
  uint32_t (*run_usb_device_filters)(void *, void *, void *, void *);
  uint32_t (*capture_usb_device)(void *, wstring_t);
  uint32_t (*detach_usb_device)(void *, wstring_t, bool_t);
  uint32_t (*auto_capture_usb_devices)(void *);
  uint32_t (*detach_all_usb_devices)(void *, bool_t);
  uint32_t (*on_session_end)(void *, void *, void *);
  uint32_t (*begin_saving_state)(void *, void *, void *);
  uint32_t (*end_saving_state)(void *, int32_t, wstring_t);
  uint32_t (*adopt_saved_state)(void *, wstring_t);
  uint32_t (*begin_taking_snapshot)(void *, void *, wstring_t, wstring_t, void *, bool_t, void *);
  uint32_t (*end_taking_snapshot)(void *, bool_t);
  uint32_t (*delete_snapshot)(void *, void *, wstring_t, wstring_t, bool_t, void *, void *);
  uint32_t (*finish_online_merge_medium)(void *, void *, void *, void *, bool_t, void *, uint32_t, void *);
  uint32_t (*restore_snapshot)(void *, void *, void *, void *, void *);
  uint32_t (*pull_guest_properties)(void *, void *, void *, void *, void *, void *, void *, void *, void *);
  uint32_t (*push_guest_property)(void *, wstring_t, wstring_t, int64_t, wstring_t);
  uint32_t (*lock_media)(void *);
  uint32_t (*unlock_media)(void *);
  uint32_t (*eject_medium)(void *, void *, void *);
  uint32_t (*report_vm_statistics)(void *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
};
struct BIOSSettings {
  struct NSISupports NSISupports;
  uint32_t (*get_logo_fade_in)(void *, void *);
  uint32_t (*get_logo_fade_out)(void *, void *);
  uint32_t (*get_logo_display_time)(void *, void *);
  uint32_t (*get_logo_image_path)(void *, void *);
  uint32_t (*get_boot_menu_mode)(void *, void *);
  uint32_t (*get_acpi_enabled)(void *, void *);
  uint32_t (*get_io_apic_enabled)(void *, void *);
  uint32_t (*get_time_offset)(void *, void *);
  uint32_t (*get_pxe_debug_enabled)(void *, void *);
};
struct PCIAddress {
  struct NSISupports NSISupports;
  uint32_t (*get_bus)(void *, void *);
  uint32_t (*get_device)(void *, void *);
  uint32_t (*get_dev_function)(void *, void *);
  uint32_t (*as_long)(void *, void *);
  uint32_t (*from_long)(void *, int32_t);
};
struct PCIDeviceAttachment {
  struct NSISupports NSISupports;
  uint32_t (*get_name)(void *, void *);
  uint32_t (*get_is_physical_device)(void *, void *);
  uint32_t (*get_host_address)(void *, void *);
  uint32_t (*get_guest_address)(void *, void *);
};
struct Machine {
  struct NSISupports NSISupports;
  uint32_t (*get_parent)(void *, void *);
  uint32_t (*get_accessible)(void *, void *);
  uint32_t (*get_access_error)(void *, void *);
  uint32_t (*get_name)(void *, void *);
  uint32_t (*get_description)(void *, void *);
  uint32_t (*get_id)(void *, void *);
  uint32_t (*get_groups)(void *, void *, void *);
  uint32_t (*get_os_type_id)(void *, void *);
  uint32_t (*get_hardware_version)(void *, void *);
  uint32_t (*get_hardware_uuid)(void *, void *);
  uint32_t (*get_cpu_count)(void *, void *);
  uint32_t (*get_cpu_hot_plug_enabled)(void *, void *);
  uint32_t (*get_cpu_execution_cap)(void *, void *);
  uint32_t (*get_memory_size)(void *, void *);
  uint32_t (*get_memory_balloon_size)(void *, void *);
  uint32_t (*get_page_fusion_enabled)(void *, void *);
  uint32_t (*get_vram_size)(void *, void *);
  uint32_t (*get_accelerate_3d_enabled)(void *, void *);
  uint32_t (*get_accelerate_2d_video_enabled)(void *, void *);
  uint32_t (*get_monitor_count)(void *, void *);
  uint32_t (*get_video_capture_enabled)(void *, void *);
  uint32_t (*get_video_capture_file)(void *, void *);
  uint32_t (*get_video_capture_width)(void *, void *);
  uint32_t (*get_video_capture_height)(void *, void *);
  uint32_t (*get_bios_settings)(void *, void *);
  uint32_t (*get_firmware_type)(void *, void *);
  uint32_t (*get_pointing_hid_type)(void *, void *);
  uint32_t (*get_keyboard_hid_type)(void *, void *);
  uint32_t (*get_hpet_enabled)(void *, void *);
  uint32_t (*get_chipset_type)(void *, void *);
  uint32_t (*get_snapshot_folder)(void *, void *);
  uint32_t (*get_vrde_server)(void *, void *);
  uint32_t (*get_emulated_usb_webcamera_enabled)(void *, void *);
  uint32_t (*get_emulated_usb_card_reader_enabled)(void *, void *);
  uint32_t (*get_medium_attachments)(void *, void *, void *);
  uint32_t (*get_usb_controller)(void *, void *);
  uint32_t (*get_audio_adapter)(void *, void *);
  uint32_t (*get_storage_controllers)(void *, void *, void *);
  uint32_t (*get_settings_file_path)(void *, void *);
  uint32_t (*get_settings_modified)(void *, void *);
  uint32_t (*get_session_state)(void *, void *);
  uint32_t (*get_session_type)(void *, void *);
  uint32_t (*get_session_pid)(void *, void *);
  uint32_t (*get_state)(void *, void *);
  uint32_t (*get_last_state_change)(void *, void *);
  uint32_t (*get_state_file_path)(void *, void *);
  uint32_t (*get_log_folder)(void *, void *);
  uint32_t (*get_current_snapshot)(void *, void *);
  uint32_t (*get_snapshot_count)(void *, void *);
  uint32_t (*get_current_state_modified)(void *, void *);
  uint32_t (*get_shared_folders)(void *, void *, void *);
  uint32_t (*get_clipboard_mode)(void *, void *);
  uint32_t (*get_drag_and_drop_mode)(void *, void *);
  uint32_t (*get_guest_property_notification_patterns)(void *, void *);
  uint32_t (*get_teleporter_enabled)(void *, void *);
  uint32_t (*get_teleporter_port)(void *, void *);
  uint32_t (*get_teleporter_address)(void *, void *);
  uint32_t (*get_teleporter_password)(void *, void *);
  uint32_t (*get_fault_tolerance_state)(void *, void *);
  uint32_t (*get_fault_tolerance_port)(void *, void *);
  uint32_t (*get_fault_tolerance_address)(void *, void *);
  uint32_t (*get_fault_tolerance_password)(void *, void *);
  uint32_t (*get_fault_tolerance_sync_interval)(void *, void *);
  uint32_t (*get_rtc_use_utc)(void *, void *);
  uint32_t (*get_io_cache_enabled)(void *, void *);
  uint32_t (*get_io_cache_size)(void *, void *);
  uint32_t (*get_pci_device_assignments)(void *, void *, void *);
  uint32_t (*get_bandwidth_control)(void *, void *);
  uint32_t (*get_tracing_enabled)(void *, void *);
  uint32_t (*get_tracing_config)(void *, void *);
  uint32_t (*get_allow_tracing_to_access_vm)(void *, void *);
  uint32_t (*get_autostart_enabled)(void *, void *);
  uint32_t (*get_autostart_delay)(void *, void *);
  uint32_t (*get_autostop_type)(void *, void *);
  uint32_t (*lock_machine)(void *, void *, uint32_t);
  uint32_t (*launch_vm_process)(void *, void *, wstring_t, wstring_t, void *);
  uint32_t (*set_boot_order)(void *, uint32_t, uint32_t);
  uint32_t (*get_boot_order)(void *, uint32_t, void *);
  uint32_t (*attach_device)(void *, wstring_t, int32_t, int32_t, uint32_t, void *);
  uint32_t (*attach_device_without_medium)(void *, wstring_t, int32_t, int32_t, uint32_t);
  uint32_t (*detach_device)(void *, wstring_t, int32_t, int32_t);
  uint32_t (*passthrough_device)(void *, wstring_t, int32_t, int32_t, bool_t);
  uint32_t (*temporary_eject_device)(void *, wstring_t, int32_t, int32_t, bool_t);
  uint32_t (*non_rotational_device)(void *, wstring_t, int32_t, int32_t, bool_t);
  uint32_t (*set_auto_discard_for_device)(void *, wstring_t, int32_t, int32_t, bool_t);
  uint32_t (*set_bandwidth_group_for_device)(void *, wstring_t, int32_t, int32_t, void *);
  uint32_t (*set_no_bandwidth_group_for_device)(void *, wstring_t, int32_t, int32_t);
  uint32_t (*unmount_medium)(void *, wstring_t, int32_t, int32_t, bool_t);
  uint32_t (*mount_medium)(void *, wstring_t, int32_t, int32_t, void *, bool_t);
  uint32_t (*get_medium)(void *, wstring_t, int32_t, int32_t, void *);
  uint32_t (*get_medium_attachments_of_controller)(void *, wstring_t, void *, void *);
  uint32_t (*get_medium_attachment)(void *, wstring_t, int32_t, int32_t, void *);
  uint32_t (*attach_host_pci_device)(void *, int32_t, int32_t, bool_t);
  uint32_t (*detach_host_pci_device)(void *, int32_t);
  uint32_t (*get_network_adapter)(void *, uint32_t, void *);
  uint32_t (*add_storage_controller)(void *, wstring_t, uint32_t, void *);
  uint32_t (*get_storage_controller_by_name)(void *, wstring_t, void *);
  uint32_t (*get_storage_controller_by_instance)(void *, uint32_t, void *);
  uint32_t (*remove_storage_controller)(void *, wstring_t);
  uint32_t (*set_storage_controller_bootable)(void *, wstring_t, bool_t);
  uint32_t (*get_serial_port)(void *, uint32_t, void *);
  uint32_t (*get_parallel_port)(void *, uint32_t, void *);
  uint32_t (*get_extra_data_keys)(void *, void *, void *);
  uint32_t (*get_extra_data)(void *, wstring_t, void *);
  uint32_t (*set_extra_data)(void *, wstring_t, wstring_t);
  uint32_t (*get_cpu_property)(void *, uint32_t, void *);
  uint32_t (*set_cpu_property)(void *, uint32_t, bool_t);
  uint32_t (*get_cpuid_leaf)(void *, uint32_t, void *, void *, void *, void *);
  uint32_t (*set_cpuid_leaf)(void *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
  uint32_t (*remove_cpuid_leaf)(void *, uint32_t);
  uint32_t (*remove_all_cpuid_leaves)(void *);
  uint32_t (*get_hw_virt_ex_property)(void *, uint32_t, void *);
  uint32_t (*set_hw_virt_ex_property)(void *, uint32_t, bool_t);
  uint32_t (*save_settings)(void *);
  uint32_t (*discard_settings)(void *);
  uint32_t (*unregister)(void *, uint32_t, void *, void *);
  uint32_t (*delete)(void *, uint32_t, void *, void *);
  uint32_t (*export)(void *, void *, wstring_t, void *);
  uint32_t (*find_snapshot)(void *, wstring_t, void *);
  uint32_t (*create_shared_folder)(void *, wstring_t, wstring_t, bool_t, bool_t);
  uint32_t (*remove_shared_folder)(void *, wstring_t);
  uint32_t (*can_show_console_window)(void *, void *);
  uint32_t (*show_console_window)(void *, void *);
  uint32_t (*get_guest_property)(void *, wstring_t, void *, void *, void *);
  uint32_t (*get_guest_property_value)(void *, wstring_t, void *);
  uint32_t (*get_guest_property_timestamp)(void *, wstring_t, void *);
  uint32_t (*set_guest_property)(void *, wstring_t, wstring_t, wstring_t);
  uint32_t (*set_guest_property_value)(void *, wstring_t, wstring_t);
  uint32_t (*delete_guest_property)(void *, wstring_t);
  uint32_t (*enumerate_guest_properties)(void *, wstring_t, void *, void *, void *, void *, void *, void *, void *, void *);
  uint32_t (*query_saved_guest_screen_info)(void *, uint32_t, void *, void *, void *, void *, void *);
  uint32_t (*query_saved_thumbnail_size)(void *, uint32_t, void *, void *, void *);
  uint32_t (*read_saved_thumbnail_to_array)(void *, uint32_t, bool_t, void *, void *, void *, void *);
  uint32_t (*read_saved_thumbnail_png_to_array)(void *, uint32_t, void *, void *, void *, void *);
  uint32_t (*query_saved_screenshot_png_size)(void *, uint32_t, void *, void *, void *);
  uint32_t (*read_saved_screenshot_png_to_array)(void *, uint32_t, void *, void *, void *, void *);
  uint32_t (*hot_plug_cpu)(void *, uint32_t);
  uint32_t (*hot_unplug_cpu)(void *, uint32_t);
  uint32_t (*get_cpu_status)(void *, uint32_t, void *);
  uint32_t (*query_log_filename)(void *, uint32_t, void *);
  uint32_t (*read_log)(void *, uint32_t, int64_t, int64_t, void *, void *);
  uint32_t (*clone_to)(void *, void *, uint32_t, uint32_t, void *, void *);
};
struct VRDEServerInfo {
  struct NSISupports NSISupports;
  uint32_t (*get_active)(void *, void *);
  uint32_t (*get_port)(void *, void *);
  uint32_t (*get_number_of_clients)(void *, void *);
  uint32_t (*get_begin_time)(void *, void *);
  uint32_t (*get_end_time)(void *, void *);
  uint32_t (*get_bytes_sent)(void *, void *);
  uint32_t (*get_bytes_sent_total)(void *, void *);
  uint32_t (*get_bytes_received)(void *, void *);
  uint32_t (*get_bytes_received_total)(void *, void *);
  uint32_t (*get_user)(void *, void *);
  uint32_t (*get_domain)(void *, void *);
  uint32_t (*get_client_name)(void *, void *);
  uint32_t (*get_client_ip)(void *, void *);
  uint32_t (*get_client_version)(void *, void *);
  uint32_t (*get_encryption_style)(void *, void *);
};
struct Console {
  struct NSISupports NSISupports;
  uint32_t (*get_machine)(void *, void *);
  uint32_t (*get_state)(void *, void *);
  uint32_t (*get_guest)(void *, void *);
  uint32_t (*get_keyboard)(void *, void *);
  uint32_t (*get_mouse)(void *, void *);
  uint32_t (*get_display)(void *, void *);
  uint32_t (*get_debugger)(void *, void *);
  uint32_t (*get_usb_devices)(void *, void *, void *);
  uint32_t (*get_remote_usb_devices)(void *, void *, void *);
  uint32_t (*get_shared_folders)(void *, void *, void *);
  uint32_t (*get_vrde_server_info)(void *, void *);
  uint32_t (*get_event_source)(void *, void *);
  uint32_t (*get_attached_pci_devices)(void *, void *, void *);
  uint32_t (*get_use_host_clipboard)(void *, void *);
  uint32_t (*power_up)(void *, void *);
  uint32_t (*power_up_paused)(void *, void *);
  uint32_t (*power_down)(void *, void *);
  uint32_t (*reset)(void *);
  uint32_t (*pause)(void *);
  uint32_t (*resume)(void *);
  uint32_t (*power_button)(void *);
  uint32_t (*sleep_button)(void *);
  uint32_t (*get_power_button_handled)(void *, void *);
  uint32_t (*get_guest_entered_acpi_mode)(void *, void *);
  uint32_t (*save_state)(void *, void *);
  uint32_t (*adopt_saved_state)(void *, wstring_t);
  uint32_t (*discard_saved_state)(void *, bool_t);
  uint32_t (*get_device_activity)(void *, uint32_t, void *);
  uint32_t (*attach_usb_device)(void *, wstring_t);
  uint32_t (*detach_usb_device)(void *, wstring_t, void *);
  uint32_t (*find_usb_device_by_address)(void *, wstring_t, void *);
  uint32_t (*find_usb_device_by_id)(void *, wstring_t, void *);
  uint32_t (*create_shared_folder)(void *, wstring_t, wstring_t, bool_t, bool_t);
  uint32_t (*remove_shared_folder)(void *, wstring_t);
  uint32_t (*take_snapshot)(void *, wstring_t, wstring_t, void *);
  uint32_t (*delete_snapshot)(void *, wstring_t, void *);
  uint32_t (*delete_snapshot_and_all_children)(void *, wstring_t, void *);
  uint32_t (*delete_snapshot_range)(void *, wstring_t, wstring_t, void *);
  uint32_t (*restore_snapshot)(void *, void *, void *);
  uint32_t (*teleport)(void *, wstring_t, uint32_t, wstring_t, uint32_t, void *);
};
struct HostNetworkInterface {
  struct NSISupports NSISupports;
  uint32_t (*get_name)(void *, void *);
  uint32_t (*get_id)(void *, void *);
  uint32_t (*get_network_name)(void *, void *);
  uint32_t (*get_dhcp_enabled)(void *, void *);
  uint32_t (*get_ip_address)(void *, void *);
  uint32_t (*get_network_mask)(void *, void *);
  uint32_t (*get_ipv6_supported)(void *, void *);
  uint32_t (*get_ipv6_address)(void *, void *);
  uint32_t (*get_ipv6_network_mask_prefix_length)(void *, void *);
  uint32_t (*get_hardware_address)(void *, void *);
  uint32_t (*get_medium_type)(void *, void *);
  uint32_t (*get_status)(void *, void *);
  uint32_t (*get_interface_type)(void *, void *);
  uint32_t (*enable_static_ip_config)(void *, wstring_t, wstring_t);
  uint32_t (*enable_static_ip_config_v6)(void *, wstring_t, uint32_t);
  uint32_t (*enable_dynamic_ip_config)(void *);
  uint32_t (*dhcp_rediscover)(void *);
};
struct Host {
  struct NSISupports NSISupports;
  uint32_t (*get_dvd_drives)(void *, void *, void *);
  uint32_t (*get_floppy_drives)(void *, void *, void *);
  uint32_t (*get_usb_devices)(void *, void *, void *);
  uint32_t (*get_usb_device_filters)(void *, void *, void *);
  uint32_t (*get_network_interfaces)(void *, void *, void *);
  uint32_t (*get_processor_count)(void *, void *);
  uint32_t (*get_processor_online_count)(void *, void *);
  uint32_t (*get_processor_core_count)(void *, void *);
  uint32_t (*get_memory_size)(void *, void *);
  uint32_t (*get_memory_available)(void *, void *);
  uint32_t (*get_operating_system)(void *, void *);
  uint32_t (*get_os_version)(void *, void *);
  uint32_t (*get_utc_time)(void *, void *);
  uint32_t (*get_acceleration3d_available)(void *, void *);
  uint32_t (*get_processor_speed)(void *, uint32_t, void *);
  uint32_t (*get_processor_feature)(void *, uint32_t, void *);
  uint32_t (*get_processor_description)(void *, uint32_t, void *);
  uint32_t (*get_processor_cpuid_leaf)(void *, uint32_t, uint32_t, uint32_t, void *, void *, void *, void *);
  uint32_t (*create_host_only_network_interface)(void *, void *, void *);
  uint32_t (*remove_host_only_network_interface)(void *, wstring_t, void *);
  uint32_t (*create_usb_device_filter)(void *, wstring_t, void *);
  uint32_t (*insert_usb_device_filter)(void *, uint32_t, void *);
  uint32_t (*remove_usb_device_filter)(void *, uint32_t);
  uint32_t (*find_host_dvd_drive)(void *, wstring_t, void *);
  uint32_t (*find_host_floppy_drive)(void *, wstring_t, void *);
  uint32_t (*find_host_network_interface_by_name)(void *, wstring_t, void *);
  uint32_t (*find_host_network_interface_by_id)(void *, wstring_t, void *);
  uint32_t (*find_host_network_interfaces_of_type)(void *, uint32_t, void *, void *);
  uint32_t (*find_usb_device_by_id)(void *, wstring_t, void *);
  uint32_t (*find_usb_device_by_address)(void *, wstring_t, void *);
  uint32_t (*generate_mac_address)(void *, void *);
};
struct SystemProperties {
  struct NSISupports NSISupports;
  uint32_t (*get_min_guest_ram)(void *, void *);
  uint32_t (*get_max_guest_ram)(void *, void *);
  uint32_t (*get_min_guest_vram)(void *, void *);
  uint32_t (*get_max_guest_vram)(void *, void *);
  uint32_t (*get_min_guest_cpu_count)(void *, void *);
  uint32_t (*get_max_guest_cpu_count)(void *, void *);
  uint32_t (*get_max_guest_monitors)(void *, void *);
  uint32_t (*get_info_vd_size)(void *, void *);
  uint32_t (*get_serial_port_count)(void *, void *);
  uint32_t (*get_parallel_port_count)(void *, void *);
  uint32_t (*get_max_boot_position)(void *, void *);
  uint32_t (*get_default_machine_folder)(void *, void *);
  uint32_t (*get_medium_formats)(void *, void *, void *);
  uint32_t (*get_default_hard_disk_format)(void *, void *);
  uint32_t (*get_free_disk_space_warning)(void *, void *);
  uint32_t (*get_free_disk_space_percent_warning)(void *, void *);
  uint32_t (*get_free_disk_space_error)(void *, void *);
  uint32_t (*get_free_disk_space_percent_error)(void *, void *);
  uint32_t (*get_vrde_auth_library)(void *, void *);
  uint32_t (*get_web_service_auth_library)(void *, void *);
  uint32_t (*get_default_vrde_ext_pack)(void *, void *);
  uint32_t (*get_log_history_count)(void *, void *);
  uint32_t (*get_default_audio_driver)(void *, void *);
  uint32_t (*get_autostart_database_path)(void *, void *);
  uint32_t (*get_default_additions_iso)(void *, void *);
  uint32_t (*get_max_network_adapters)(void *, uint32_t, void *);
  uint32_t (*get_max_network_adapters_of_type)(void *, uint32_t, uint32_t, void *);
  uint32_t (*get_max_devices_per_port_for_storage_bus)(void *, uint32_t, void *);
  uint32_t (*get_min_port_count_for_storage_bus)(void *, uint32_t, void *);
  uint32_t (*get_max_port_count_for_storage_bus)(void *, uint32_t, void *);
  uint32_t (*get_max_instances_of_storage_bus)(void *, uint32_t, uint32_t, void *);
  uint32_t (*get_device_types_for_storage_bus)(void *, uint32_t, void *, void *);
  uint32_t (*get_default_io_cache_setting_for_storage_controller)(void *, uint32_t, void *);
};
struct GuestOSType {
  struct NSISupports NSISupports;
  uint32_t (*get_family_id)(void *, void *);
  uint32_t (*get_family_description)(void *, void *);
  uint32_t (*get_id)(void *, void *);
  uint32_t (*get_description)(void *, void *);
  uint32_t (*get_is64_bit)(void *, void *);
  uint32_t (*get_recommended_io_apic)(void *, void *);
  uint32_t (*get_recommended_virt_ex)(void *, void *);
  uint32_t (*get_recommended_ram)(void *, void *);
  uint32_t (*get_recommended_vram)(void *, void *);
  uint32_t (*get_recommended2d_video_acceleration)(void *, void *);
  uint32_t (*get_recommended3d_acceleration)(void *, void *);
  uint32_t (*get_recommended_hdd)(void *, void *);
  uint32_t (*get_adapter_type)(void *, void *);
  uint32_t (*get_recommended_pae)(void *, void *);
  uint32_t (*get_recommended_dvd_storage_controller)(void *, void *);
  uint32_t (*get_recommended_dvd_storage_bus)(void *, void *);
  uint32_t (*get_recommended_hd_storage_controller)(void *, void *);
  uint32_t (*get_recommended_hd_storage_bus)(void *, void *);
  uint32_t (*get_recommended_firmware)(void *, void *);
  uint32_t (*get_recommended_usb_hid)(void *, void *);
  uint32_t (*get_recommended_hpet)(void *, void *);
  uint32_t (*get_recommended_usb_tablet)(void *, void *);
  uint32_t (*get_recommended_rtc_use_utc)(void *, void *);
  uint32_t (*get_recommended_chipset)(void *, void *);
  uint32_t (*get_recommended_audio_controller)(void *, void *);
  uint32_t (*get_recommended_floppy)(void *, void *);
  uint32_t (*get_recommended_usb)(void *, void *);
};
struct AdditionsFacility {
  struct NSISupports NSISupports;
  uint32_t (*get_class_type)(void *, void *);
  uint32_t (*get_last_updated)(void *, void *);
  uint32_t (*get_name)(void *, void *);
  uint32_t (*get_status)(void *, void *);
  uint32_t (*get_type)(void *, void *);
};
struct GuestSession {
  struct NSISupports NSISupports;
  uint32_t (*get_user)(void *, void *);
  uint32_t (*get_domain)(void *, void *);
  uint32_t (*get_name)(void *, void *);
  uint32_t (*get_id)(void *, void *);
  uint32_t (*get_timeout)(void *, void *);
  uint32_t (*get_environment)(void *, void *, void *);
  uint32_t (*get_processes)(void *, void *, void *);
  uint32_t (*get_directories)(void *, void *, void *);
  uint32_t (*get_files)(void *, void *, void *);
  uint32_t (*close)(void *);
  uint32_t (*copy_from)(void *, wstring_t, wstring_t, uint32_t, void *, void *);
  uint32_t (*copy_to)(void *, wstring_t, wstring_t, uint32_t, void *, void *);
  uint32_t (*directory_create)(void *, wstring_t, uint32_t, uint32_t, void *);
  uint32_t (*directory_create_temp)(void *, wstring_t, uint32_t, wstring_t, bool_t, void *);
  uint32_t (*directory_exists)(void *, wstring_t, void *);
  uint32_t (*directory_open)(void *, wstring_t, wstring_t, uint32_t, void *, void *);
  uint32_t (*directory_query_info)(void *, wstring_t, void *);
  uint32_t (*directory_remove)(void *, wstring_t);
  uint32_t (*directory_remove_recursive)(void *, wstring_t, uint32_t, void *, void *);
  uint32_t (*directory_rename)(void *, wstring_t, wstring_t, uint32_t, void *);
  uint32_t (*directory_set_acl)(void *, wstring_t, wstring_t);
  uint32_t (*environment_clear)(void *);
  uint32_t (*environment_get)(void *, wstring_t, void *);
  uint32_t (*environment_set)(void *, wstring_t, wstring_t);
  uint32_t (*environment_unset)(void *, wstring_t);
  uint32_t (*file_create_temp)(void *, wstring_t, uint32_t, wstring_t, bool_t, void *);
  uint32_t (*file_exists)(void *, wstring_t, void *);
  uint32_t (*file_remove)(void *, wstring_t);
  uint32_t (*file_open)(void *, wstring_t, wstring_t, wstring_t, uint32_t, int64_t, void *);
  uint32_t (*file_query_info)(void *, wstring_t, void *);
  uint32_t (*file_query_size)(void *, wstring_t, void *);
  uint32_t (*file_rename)(void *, wstring_t, wstring_t, uint32_t, void *);
  uint32_t (*file_set_acl)(void *, wstring_t, wstring_t);
  uint32_t (*process_create)(void *, wstring_t, uint32_t, void *, uint32_t, void *, uint32_t, void *, uint32_t, void *);
  uint32_t (*process_create_ex)(void *, wstring_t, uint32_t, void *, uint32_t, void *, uint32_t, void *, uint32_t, uint32_t, uint32_t, void *, void *);
  uint32_t (*process_get)(void *, uint32_t, void *);
  uint32_t (*symlink_create)(void *, wstring_t, wstring_t, uint32_t);
  uint32_t (*symlink_exists)(void *, wstring_t, void *);
  uint32_t (*symlink_read)(void *, wstring_t, uint32_t, void *, void *);
  uint32_t (*symlink_remove_directory)(void *, wstring_t);
  uint32_t (*symlink_remove_file)(void *, wstring_t);
};
struct Process {
  struct NSISupports NSISupports;
  uint32_t (*get_pid)(void *, void *);
  uint32_t (*get_status)(void *, void *);
  uint32_t (*get_exit_code)(void *, void *);
  uint32_t (*get_environment)(void *, void *, void *);
  uint32_t (*get_arguments)(void *, void *, void *);
  uint32_t (*get_executable_path)(void *, void *);
  uint32_t (*get_name)(void *, void *);
  uint32_t (*wait_for)(void *, uint32_t, uint32_t, void *);
  uint32_t (*wait_for_array)(void *, uint32_t, void *, uint32_t, void *);
  uint32_t (*read)(void *, uint32_t, uint32_t, uint32_t, void *, void *);
  uint32_t (*write)(void *, uint32_t, uint32_t, uint32_t, void *, uint32_t, void *);
  uint32_t (*write_array)(void *, uint32_t, uint32_t, void *, uint32_t, void *, uint32_t, void *);
  uint32_t (*terminate)(void *);
};
struct GuestProcess {
  struct Process Process;
};
struct Directory {
  struct NSISupports NSISupports;
  uint32_t (*get_directory_name)(void *, void *);
  uint32_t (*get_filter)(void *, void *);
  uint32_t (*close)(void *);
  uint32_t (*read)(void *, void *);
};
struct GuestDirectory {
  struct Directory Directory;
};
struct File {
  struct NSISupports NSISupports;
  uint32_t (*get_creation_mode)(void *, void *);
  uint32_t (*get_disposition)(void *, void *);
  uint32_t (*get_file_name)(void *, void *);
  uint32_t (*get_initial_size)(void *, void *);
  uint32_t (*get_open_mode)(void *, void *);
  uint32_t (*get_offset)(void *, void *);
  uint32_t (*close)(void *);
  uint32_t (*query_info)(void *, void *);
  uint32_t (*read)(void *, uint32_t, uint32_t, void *, void *);
  uint32_t (*read_at)(void *, int64_t, uint32_t, uint32_t, void *, void *);
  uint32_t (*seek)(void *, int64_t, uint32_t);
  uint32_t (*set_acl)(void *, wstring_t);
  uint32_t (*write)(void *, uint32_t, void *, uint32_t, void *);
  uint32_t (*write_at)(void *, int64_t, uint32_t, void *, uint32_t, void *);
};
struct GuestFile {
  struct File File;
};
struct FsObjInfo {
  struct NSISupports NSISupports;
  uint32_t (*get_access_time)(void *, void *);
  uint32_t (*get_allocated_size)(void *, void *);
  uint32_t (*get_birth_time)(void *, void *);
  uint32_t (*get_change_time)(void *, void *);
  uint32_t (*get_device_number)(void *, void *);
  uint32_t (*get_file_attributes)(void *, void *);
  uint32_t (*get_generation_id)(void *, void *);
  uint32_t (*get_gid)(void *, void *);
  uint32_t (*get_group_name)(void *, void *);
  uint32_t (*get_hard_links)(void *, void *);
  uint32_t (*get_modification_time)(void *, void *);
  uint32_t (*get_name)(void *, void *);
  uint32_t (*get_node_id)(void *, void *);
  uint32_t (*get_node_id_device)(void *, void *);
  uint32_t (*get_object_size)(void *, void *);
  uint32_t (*get_type)(void *, void *);
  uint32_t (*get_uid)(void *, void *);
  uint32_t (*get_user_flags)(void *, void *);
  uint32_t (*get_user_name)(void *, void *);
};
struct GuestFsObjInfo {
  struct FsObjInfo FsObjInfo;
};
struct Guest {
  struct NSISupports NSISupports;
  uint32_t (*get_os_type_id)(void *, void *);
  uint32_t (*get_additions_run_level)(void *, void *);
  uint32_t (*get_additions_version)(void *, void *);
  uint32_t (*get_additions_revision)(void *, void *);
  uint32_t (*get_facilities)(void *, void *, void *);
  uint32_t (*get_sessions)(void *, void *, void *);
  uint32_t (*get_memory_balloon_size)(void *, void *);
  uint32_t (*get_statistics_update_interval)(void *, void *);
  uint32_t (*internal_get_statistics)(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
  uint32_t (*get_facility_status)(void *, uint32_t, void *, void *);
  uint32_t (*get_additions_status)(void *, uint32_t, void *);
  uint32_t (*set_credentials)(void *, wstring_t, wstring_t, wstring_t, bool_t);
  uint32_t (*drag_hg_enter)(void *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, void *, uint32_t, void *, void *);
  uint32_t (*drag_hg_move)(void *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, void *, uint32_t, void *, void *);
  uint32_t (*drag_hg_leave)(void *, uint32_t);
  uint32_t (*drag_hg_drop)(void *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, void *, uint32_t, void *, void *, void *);
  uint32_t (*drag_hg_put_data)(void *, uint32_t, wstring_t, uint32_t, void *, void *);
  uint32_t (*drag_gh_pending)(void *, uint32_t, void *, void *, void *, void *, void *);
  uint32_t (*drag_gh_dropped)(void *, wstring_t, uint32_t, void *);
  uint32_t (*drag_gh_get_data)(void *, void *, void *);
  uint32_t (*create_session)(void *, wstring_t, wstring_t, wstring_t, wstring_t, void *);
  uint32_t (*find_session)(void *, wstring_t, void *, void *);
  uint32_t (*update_guest_additions)(void *, wstring_t, uint32_t, void *, void *);
};
struct Progress {
  struct NSISupports NSISupports;
  uint32_t (*get_id)(void *, void *);
  uint32_t (*get_description)(void *, void *);
  uint32_t (*get_initiator)(void *, void *);
  uint32_t (*get_cancelable)(void *, void *);
  uint32_t (*get_percent)(void *, void *);
  uint32_t (*get_time_remaining)(void *, void *);
  uint32_t (*get_completed)(void *, void *);
  uint32_t (*get_canceled)(void *, void *);
  uint32_t (*get_result_code)(void *, void *);
  uint32_t (*get_error_info)(void *, void *);
  uint32_t (*get_operation_count)(void *, void *);
  uint32_t (*get_operation)(void *, void *);
  uint32_t (*get_operation_description)(void *, void *);
  uint32_t (*get_operation_percent)(void *, void *);
  uint32_t (*get_operation_weight)(void *, void *);
  uint32_t (*get_timeout)(void *, void *);
  uint32_t (*set_current_operation_progress)(void *, uint32_t);
  uint32_t (*set_next_operation)(void *, wstring_t, uint32_t);
  uint32_t (*wait_for_completion)(void *, int32_t);
  uint32_t (*wait_for_operation_completion)(void *, uint32_t, int32_t);
  uint32_t (*wait_for_async_progress_completion)(void *, void *);
  uint32_t (*cancel)(void *);
};
struct Snapshot {
  struct NSISupports NSISupports;
  uint32_t (*get_id)(void *, void *);
  uint32_t (*get_name)(void *, void *);
  uint32_t (*get_description)(void *, void *);
  uint32_t (*get_time_stamp)(void *, void *);
  uint32_t (*get_online)(void *, void *);
  uint32_t (*get_machine)(void *, void *);
  uint32_t (*get_parent)(void *, void *);
  uint32_t (*get_children)(void *, void *, void *);
  uint32_t (*get_children_count)(void *, void *);
};
struct MediumAttachment {
  struct NSISupports NSISupports;
  uint32_t (*get_medium)(void *, void *);
  uint32_t (*get_controller)(void *, void *);
  uint32_t (*get_port)(void *, void *);
  uint32_t (*get_device)(void *, void *);
  uint32_t (*get_type)(void *, void *);
  uint32_t (*get_passthrough)(void *, void *);
  uint32_t (*get_temporary_eject)(void *, void *);
  uint32_t (*get_is_ejected)(void *, void *);
  uint32_t (*get_non_rotational)(void *, void *);
  uint32_t (*get_discard)(void *, void *);
  uint32_t (*get_bandwidth_group)(void *, void *);
};
struct Medium {
  struct NSISupports NSISupports;
  uint32_t (*get_id)(void *, void *);
  uint32_t (*get_description)(void *, void *);
  uint32_t (*get_state)(void *, void *);
  uint32_t (*get_variant)(void *, void *);
  uint32_t (*get_location)(void *, void *);
  uint32_t (*get_name)(void *, void *);
  uint32_t (*get_device_type)(void *, void *);
  uint32_t (*get_host_drive)(void *, void *);
  uint32_t (*get_size)(void *, void *);
  uint32_t (*get_format)(void *, void *);
  uint32_t (*get_medium_format)(void *, void *);
  uint32_t (*get_type)(void *, void *);
  uint32_t (*get_allowed_types)(void *, void *, void *);
  uint32_t (*get_parent)(void *, void *);
  uint32_t (*get_children)(void *, void *, void *);
  uint32_t (*get_base)(void *, void *);
  uint32_t (*get_read_only)(void *, void *);
  uint32_t (*get_logical_size)(void *, void *);
  uint32_t (*get_auto_reset)(void *, void *);
  uint32_t (*get_last_access_error)(void *, void *);
  uint32_t (*get_machine_ids)(void *, void *, void *);
  uint32_t (*set_ids)(void *, bool_t, wstring_t, bool_t, wstring_t);
  uint32_t (*refresh_state)(void *, void *);
  uint32_t (*get_snapshot_ids)(void *, wstring_t, void *, void *);
  uint32_t (*lock_read)(void *, void *);
  uint32_t (*unlock_read)(void *, void *);
  uint32_t (*lock_write)(void *, void *);
  uint32_t (*unlock_write)(void *, void *);
  uint32_t (*close)(void *);
  uint32_t (*get_property)(void *, wstring_t, void *);
  uint32_t (*set_property)(void *, wstring_t, wstring_t);
  uint32_t (*get_properties)(void *, wstring_t, void *, void *, void *, void *);
  uint32_t (*set_properties)(void *, uint32_t, void *, uint32_t, void *);
  uint32_t (*create_base_storage)(void *, int64_t, uint32_t, void *);
  uint32_t (*delete_storage)(void *, void *);
  uint32_t (*create_diff_storage)(void *, void *, uint32_t, void *);
  uint32_t (*merge_to)(void *, void *, void *);
  uint32_t (*clone_to)(void *, void *, uint32_t, void *, void *);
  uint32_t (*clone_to_base)(void *, void *, uint32_t, void *);
  uint32_t (*compact)(void *, void *);
  uint32_t (*resize)(void *, int64_t, void *);
  uint32_t (*reset)(void *, void *);
};
struct MediumFormat {
  struct NSISupports NSISupports;
  uint32_t (*get_id)(void *, void *);
  uint32_t (*get_name)(void *, void *);
  uint32_t (*get_capabilities)(void *, void *);
  uint32_t (*describe_file_extensions)(void *, void *, void *, void *, void *);
  uint32_t (*describe_properties)(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
};
struct Keyboard {
  struct NSISupports NSISupports;
  uint32_t (*get_event_source)(void *, void *);
  uint32_t (*put_scancode)(void *, int32_t);
  uint32_t (*put_scancodes)(void *, uint32_t, void *, void *);
  uint32_t (*put_cad)(void *);
};
struct Mouse {
  struct NSISupports NSISupports;
  uint32_t (*get_absolute_supported)(void *, void *);
  uint32_t (*get_relative_supported)(void *, void *);
  uint32_t (*get_needs_host_cursor)(void *, void *);
  uint32_t (*get_event_source)(void *, void *);
  uint32_t (*put_mouse_event)(void *, int32_t, int32_t, int32_t, int32_t, int32_t);
  uint32_t (*put_mouse_event_absolute)(void *, int32_t, int32_t, int32_t, int32_t, int32_t);
};
struct Framebuffer {
  struct NSISupports NSISupports;
  uint32_t (*get_address)(void *, void *);
  uint32_t (*get_width)(void *, void *);
  uint32_t (*get_height)(void *, void *);
  uint32_t (*get_bits_per_pixel)(void *, void *);
  uint32_t (*get_bytes_per_line)(void *, void *);
  uint32_t (*get_pixel_format)(void *, void *);
  uint32_t (*get_uses_guest_vram)(void *, void *);
  uint32_t (*get_height_reduction)(void *, void *);
  uint32_t (*get_overlay)(void *, void *);
  uint32_t (*get_win_id)(void *, void *);
  uint32_t (*lock)(void *);
  uint32_t (*unlock)(void *);
  uint32_t (*notify_update)(void *, uint32_t, uint32_t, uint32_t, uint32_t);
  uint32_t (*request_resize)(void *, uint32_t, uint32_t, void *, uint32_t, uint32_t, uint32_t, uint32_t, void *);
  uint32_t (*video_mode_supported)(void *, uint32_t, uint32_t, uint32_t, void *);
  uint32_t (*get_visible_region)(void *, void *, uint32_t, void *);
  uint32_t (*set_visible_region)(void *, void *, uint32_t);
  uint32_t (*process_vhwa_command)(void *, void *);
};
struct FramebufferOverlay {
  struct Framebuffer Framebuffer;
  uint32_t (*get_x)(void *, void *);
  uint32_t (*get_y)(void *, void *);
  uint32_t (*get_visible)(void *, void *);
  uint32_t (*get_alpha)(void *, void *);
  uint32_t (*move)(void *, uint32_t, uint32_t);
};
struct Display {
  struct NSISupports NSISupports;
  uint32_t (*get_screen_resolution)(void *, uint32_t, void *, void *, void *);
  uint32_t (*set_framebuffer)(void *, uint32_t, void *);
  uint32_t (*get_framebuffer)(void *, uint32_t, void *, void *, void *);
  uint32_t (*set_video_mode_hint)(void *, uint32_t, bool_t, bool_t, int32_t, int32_t, uint32_t, uint32_t, uint32_t);
  uint32_t (*set_seamless_mode)(void *, bool_t);
  uint32_t (*take_screenshot)(void *, uint32_t, void *, uint32_t, uint32_t);
  uint32_t (*take_screenshot_to_array)(void *, uint32_t, uint32_t, uint32_t, void *, void *);
  uint32_t (*take_screenshot_png_to_array)(void *, uint32_t, uint32_t, uint32_t, void *, void *);
  uint32_t (*draw_to_screen)(void *, uint32_t, void *, uint32_t, uint32_t, uint32_t, uint32_t);
  uint32_t (*invalidate_and_update)(void *);
  uint32_t (*resize_completed)(void *, uint32_t);
  uint32_t (*complete_vhwa_command)(void *, void *);
  uint32_t (*viewport_changed)(void *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
};
struct NetworkAdapter {
  struct NSISupports NSISupports;
  uint32_t (*get_adapter_type)(void *, void *);
  uint32_t (*get_slot)(void *, void *);
  uint32_t (*get_enabled)(void *, void *);
  uint32_t (*get_mac_address)(void *, void *);
  uint32_t (*get_attachment_type)(void *, void *);
  uint32_t (*get_bridged_interface)(void *, void *);
  uint32_t (*get_host_only_interface)(void *, void *);
  uint32_t (*get_internal_network)(void *, void *);
  uint32_t (*get_nat_network)(void *, void *);
  uint32_t (*get_generic_driver)(void *, void *);
  uint32_t (*get_cable_connected)(void *, void *);
  uint32_t (*get_line_speed)(void *, void *);
  uint32_t (*get_promisc_mode_policy)(void *, void *);
  uint32_t (*get_trace_enabled)(void *, void *);
  uint32_t (*get_trace_file)(void *, void *);
  uint32_t (*get_nat_engine)(void *, void *);
  uint32_t (*get_boot_priority)(void *, void *);
  uint32_t (*get_bandwidth_group)(void *, void *);
  uint32_t (*get_property)(void *, wstring_t, void *);
  uint32_t (*set_property)(void *, wstring_t, wstring_t);
  uint32_t (*get_properties)(void *, wstring_t, void *, void *, void *, void *);
};
struct SerialPort {
  struct NSISupports NSISupports;
  uint32_t (*get_slot)(void *, void *);
  uint32_t (*get_enabled)(void *, void *);
  uint32_t (*get_io_base)(void *, void *);
  uint32_t (*get_irq)(void *, void *);
  uint32_t (*get_host_mode)(void *, void *);
  uint32_t (*get_server)(void *, void *);
  uint32_t (*get_path)(void *, void *);
};
struct ParallelPort {
  struct NSISupports NSISupports;
  uint32_t (*get_slot)(void *, void *);
  uint32_t (*get_enabled)(void *, void *);
  uint32_t (*get_io_base)(void *, void *);
  uint32_t (*get_irq)(void *, void *);
  uint32_t (*get_path)(void *, void *);
};
struct MachineDebugger {
  struct NSISupports NSISupports;
  uint32_t (*get_single_step)(void *, void *);
  uint32_t (*get_recompile_user)(void *, void *);
  uint32_t (*get_recompile_supervisor)(void *, void *);
  uint32_t (*get_patm_enabled)(void *, void *);
  uint32_t (*get_csam_enabled)(void *, void *);
  uint32_t (*get_log_enabled)(void *, void *);
  uint32_t (*get_log_dbg_flags)(void *, void *);
  uint32_t (*get_log_dbg_groups)(void *, void *);
  uint32_t (*get_log_dbg_destinations)(void *, void *);
  uint32_t (*get_log_rel_flags)(void *, void *);
  uint32_t (*get_log_rel_groups)(void *, void *);
  uint32_t (*get_log_rel_destinations)(void *, void *);
  uint32_t (*get_hw_virt_ex_enabled)(void *, void *);
  uint32_t (*get_hw_virt_ex_nested_paging_enabled)(void *, void *);
  uint32_t (*get_hw_virt_ex_vpid_enabled)(void *, void *);
  uint32_t (*get_os_name)(void *, void *);
  uint32_t (*get_os_version)(void *, void *);
  uint32_t (*get_pae_enabled)(void *, void *);
  uint32_t (*get_virtual_time_rate)(void *, void *);
  uint32_t (*get_vm)(void *, void *);
  uint32_t (*dump_guest_core)(void *, wstring_t, wstring_t);
  uint32_t (*dump_host_process_core)(void *, wstring_t, wstring_t);
  uint32_t (*info)(void *, wstring_t, wstring_t, void *);
  uint32_t (*inject_n_m_i)(void *);
  uint32_t (*modify_log_groups)(void *, wstring_t);
  uint32_t (*modify_log_flags)(void *, wstring_t);
  uint32_t (*modify_log_destinations)(void *, wstring_t);
  uint32_t (*read_physical_memory)(void *, int64_t, uint32_t, void *, void *);
  uint32_t (*write_physical_memory)(void *, int64_t, uint32_t, uint32_t, void *);
  uint32_t (*read_virtual_memory)(void *, uint32_t, int64_t, uint32_t, void *, void *);
  uint32_t (*write_virtual_memory)(void *, uint32_t, int64_t, uint32_t, uint32_t, void *);
  uint32_t (*detect_os)(void *, void *);
  uint32_t (*get_register)(void *, uint32_t, wstring_t, void *);
  uint32_t (*get_registers)(void *, uint32_t, void *, void *, void *, void *);
  uint32_t (*set_register)(void *, uint32_t, wstring_t, wstring_t);
  uint32_t (*set_registers)(void *, uint32_t, uint32_t, void *, uint32_t, void *);
  uint32_t (*dump_guest_stack)(void *, uint32_t, void *);
  uint32_t (*reset_stats)(void *, wstring_t);
  uint32_t (*dump_stats)(void *, wstring_t);
  uint32_t (*get_stats)(void *, wstring_t, bool_t, void *);
};
struct USBController {
  struct NSISupports NSISupports;
  uint32_t (*get_enabled)(void *, void *);
  uint32_t (*get_enabled_ehci)(void *, void *);
  uint32_t (*get_proxy_available)(void *, void *);
  uint32_t (*get_usb_standard)(void *, void *);
  uint32_t (*get_device_filters)(void *, void *, void *);
  uint32_t (*create_device_filter)(void *, wstring_t, void *);
  uint32_t (*insert_device_filter)(void *, uint32_t, void *);
  uint32_t (*remove_device_filter)(void *, uint32_t, void *);
};
struct USBDevice {
  struct NSISupports NSISupports;
  uint32_t (*get_id)(void *, void *);
  uint32_t (*get_vendor_id)(void *, void *);
  uint32_t (*get_product_id)(void *, void *);
  uint32_t (*get_revision)(void *, void *);
  uint32_t (*get_manufacturer)(void *, void *);
  uint32_t (*get_product)(void *, void *);
  uint32_t (*get_serial_number)(void *, void *);
  uint32_t (*get_address)(void *, void *);
  uint32_t (*get_port)(void *, void *);
  uint32_t (*get_version)(void *, void *);
  uint32_t (*get_port_version)(void *, void *);
  uint32_t (*get_remote)(void *, void *);
};
struct USBDeviceFilter {
  struct NSISupports NSISupports;
  uint32_t (*get_name)(void *, void *);
  uint32_t (*get_active)(void *, void *);
  uint32_t (*get_vendor_id)(void *, void *);
  uint32_t (*get_product_id)(void *, void *);
  uint32_t (*get_revision)(void *, void *);
  uint32_t (*get_manufacturer)(void *, void *);
  uint32_t (*get_product)(void *, void *);
  uint32_t (*get_serial_number)(void *, void *);
  uint32_t (*get_port)(void *, void *);
  uint32_t (*get_remote)(void *, void *);
  uint32_t (*get_masked_interfaces)(void *, void *);
};
struct HostUSBDevice {
  struct USBDevice USBDevice;
  uint32_t (*get_state)(void *, void *);
};
struct HostUSBDeviceFilter {
  struct USBDeviceFilter USBDeviceFilter;
  uint32_t (*get_action)(void *, void *);
};
struct AudioAdapter {
  struct NSISupports NSISupports;
  uint32_t (*get_enabled)(void *, void *);
  uint32_t (*get_audio_controller)(void *, void *);
  uint32_t (*get_audio_driver)(void *, void *);
};
struct VRDEServer {
  struct NSISupports NSISupports;
  uint32_t (*get_enabled)(void *, void *);
  uint32_t (*get_auth_type)(void *, void *);
  uint32_t (*get_auth_timeout)(void *, void *);
  uint32_t (*get_allow_multi_connection)(void *, void *);
  uint32_t (*get_reuse_single_connection)(void *, void *);
  uint32_t (*get_vrde_ext_pack)(void *, void *);
  uint32_t (*get_auth_library)(void *, void *);
  uint32_t (*get_vrde_properties)(void *, void *, void *);
  uint32_t (*set_vrde_property)(void *, wstring_t, wstring_t);
  uint32_t (*get_vrde_property)(void *, wstring_t, void *);
};
struct SharedFolder {
  struct NSISupports NSISupports;
  uint32_t (*get_name)(void *, void *);
  uint32_t (*get_host_path)(void *, void *);
  uint32_t (*get_accessible)(void *, void *);
  uint32_t (*get_writable)(void *, void *);
  uint32_t (*get_auto_mount)(void *, void *);
  uint32_t (*get_last_access_error)(void *, void *);
};
struct InternalSessionControl {
  struct NSISupports NSISupports;
  uint32_t (*get_pid)(void *, void *);
  uint32_t (*get_remote_console)(void *, void *);
  uint32_t (*assign_machine)(void *, void *, uint32_t);
  uint32_t (*assign_remote_machine)(void *, void *, void *);
  uint32_t (*update_machine_state)(void *, uint32_t);
  uint32_t (*uninitialize)(void *);
  uint32_t (*on_network_adapter_change)(void *, void *, bool_t);
  uint32_t (*on_serial_port_change)(void *, void *);
  uint32_t (*on_parallel_port_change)(void *, void *);
  uint32_t (*on_storage_controller_change)(void *);
  uint32_t (*on_medium_change)(void *, void *, bool_t);
  uint32_t (*on_storage_device_change)(void *, void *, bool_t);
  uint32_t (*on_clipboard_mode_change)(void *, uint32_t);
  uint32_t (*on_drag_and_drop_mode_change)(void *, uint32_t);
  uint32_t (*on_cpu_change)(void *, uint32_t, bool_t);
  uint32_t (*on_cpu_execution_cap_change)(void *, uint32_t);
  uint32_t (*on_vrde_server_change)(void *, bool_t);
  uint32_t (*on_usb_controller_change)(void *);
  uint32_t (*on_shared_folder_change)(void *, bool_t);
  uint32_t (*on_usb_device_attach)(void *, void *, void *, uint32_t);
  uint32_t (*on_usb_device_detach)(void *, wstring_t, void *);
  uint32_t (*on_show_window)(void *, bool_t, void *, void *);
  uint32_t (*on_bandwidth_group_change)(void *, void *);
  uint32_t (*access_guest_property)(void *, wstring_t, wstring_t, wstring_t, bool_t, void *, void *, void *);
  uint32_t (*enumerate_guest_properties)(void *, wstring_t, void *, void *, void *, void *, void *, void *, void *, void *);
  uint32_t (*online_merge_medium)(void *, void *, uint32_t, uint32_t, void *, void *, bool_t, void *, uint32_t, void *, void *);
  uint32_t (*enable_vm_m_statistics)(void *, bool_t);
};
struct Session {
  struct NSISupports NSISupports;
  uint32_t (*get_state)(void *, void *);
  uint32_t (*get_type)(void *, void *);
  uint32_t (*get_machine)(void *, void *);
  uint32_t (*get_console)(void *, void *);
  uint32_t (*unlock_machine)(void *);
};
struct StorageController {
  struct NSISupports NSISupports;
  uint32_t (*get_name)(void *, void *);
  uint32_t (*get_max_devices_per_port_count)(void *, void *);
  uint32_t (*get_min_port_count)(void *, void *);
  uint32_t (*get_max_port_count)(void *, void *);
  uint32_t (*get_instance)(void *, void *);
  uint32_t (*get_port_count)(void *, void *);
  uint32_t (*get_bus)(void *, void *);
  uint32_t (*get_controller_type)(void *, void *);
  uint32_t (*get_use_host_io_cache)(void *, void *);
  uint32_t (*get_bootable)(void *, void *);
};
struct PerformanceMetric {
  struct NSISupports NSISupports;
  uint32_t (*get_metric_name)(void *, void *);
  uint32_t (*get_object)(void *, void *);
  uint32_t (*get_description)(void *, void *);
  uint32_t (*get_period)(void *, void *);
  uint32_t (*get_count)(void *, void *);
  uint32_t (*get_unit)(void *, void *);
  uint32_t (*get_minimum_value)(void *, void *);
  uint32_t (*get_maximum_value)(void *, void *);
};
struct PerformanceCollector {
  struct NSISupports NSISupports;
  uint32_t (*get_metric_names)(void *, void *, void *);
  uint32_t (*get_metrics)(void *, uint32_t, void *, uint32_t, void *, void *, void *);
  uint32_t (*setup_metrics)(void *, uint32_t, void *, uint32_t, void *, uint32_t, uint32_t, void *, void *);
  uint32_t (*enable_metrics)(void *, uint32_t, void *, uint32_t, void *, void *, void *);
  uint32_t (*disable_metrics)(void *, uint32_t, void *, uint32_t, void *, void *, void *);
  uint32_t (*query_metrics_data)(void *, uint32_t, void *, uint32_t, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
};
struct NATEngine {
  struct NSISupports NSISupports;
  uint32_t (*get_network)(void *, void *);
  uint32_t (*get_host_ip)(void *, void *);
  uint32_t (*get_tftp_prefix)(void *, void *);
  uint32_t (*get_tftp_boot_file)(void *, void *);
  uint32_t (*get_tftp_next_server)(void *, void *);
  uint32_t (*get_alias_mode)(void *, void *);
  uint32_t (*get_dns_pass_domain)(void *, void *);
  uint32_t (*get_dns_proxy)(void *, void *);
  uint32_t (*get_dns_use_host_resolver)(void *, void *);
  uint32_t (*get_redirects)(void *, void *, void *);
  uint32_t (*set_network_settings)(void *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
  uint32_t (*get_network_settings)(void *, void *, void *, void *, void *, void *);
  uint32_t (*add_redirect)(void *, wstring_t, uint32_t, wstring_t, uint16_t, wstring_t, uint16_t);
  uint32_t (*remove_redirect)(void *, wstring_t);
};
struct ExtPackPlugIn {
  struct NSISupports NSISupports;
  uint32_t (*get_name)(void *, void *);
  uint32_t (*get_description)(void *, void *);
  uint32_t (*get_frontend)(void *, void *);
  uint32_t (*get_module_path)(void *, void *);
};
struct ExtPackBase {
  struct NSISupports NSISupports;
  uint32_t (*get_name)(void *, void *);
  uint32_t (*get_description)(void *, void *);
  uint32_t (*get_version)(void *, void *);
  uint32_t (*get_revision)(void *, void *);
  uint32_t (*get_edition)(void *, void *);
  uint32_t (*get_vrde_module)(void *, void *);
  uint32_t (*get_plug_ins)(void *, void *, void *);
  uint32_t (*get_usable)(void *, void *);
  uint32_t (*get_why_unusable)(void *, void *);
  uint32_t (*get_show_license)(void *, void *);
  uint32_t (*get_license)(void *, void *);
  uint32_t (*query_license)(void *, wstring_t, wstring_t, wstring_t, void *);
};
struct ExtPack {
  struct ExtPackBase ExtPackBase;
  uint32_t (*query_object)(void *, wstring_t, void *);
};
struct ExtPackFile {
  struct ExtPackBase ExtPackBase;
  uint32_t (*get_file_path)(void *, void *);
  uint32_t (*install)(void *, bool_t, wstring_t, void *);
};
struct ExtPackManager {
  struct NSISupports NSISupports;
  uint32_t (*get_installed_ext_packs)(void *, void *, void *);
  uint32_t (*find)(void *, wstring_t, void *);
  uint32_t (*open_ext_pack_file)(void *, wstring_t, void *);
  uint32_t (*uninstall)(void *, wstring_t, bool_t, wstring_t, void *);
  uint32_t (*cleanup)(void *);
  uint32_t (*query_all_plug_ins_for_frontend)(void *, wstring_t, void *, void *);
  uint32_t (*is_ext_pack_usable)(void *, wstring_t, void *);
};
struct BandwidthGroup {
  struct NSISupports NSISupports;
  uint32_t (*get_name)(void *, void *);
  uint32_t (*get_type)(void *, void *);
  uint32_t (*get_reference)(void *, void *);
  uint32_t (*get_max_bytes_per_sec)(void *, void *);
};
struct BandwidthControl {
  struct NSISupports NSISupports;
  uint32_t (*get_num_groups)(void *, void *);
  uint32_t (*create_bandwidth_group)(void *, wstring_t, uint32_t, int64_t);
  uint32_t (*delete_bandwidth_group)(void *, wstring_t);
  uint32_t (*get_bandwidth_group)(void *, wstring_t, void *);
  uint32_t (*get_all_bandwidth_groups)(void *, void *, void *);
};
struct VirtualBoxClient {
  struct NSISupports NSISupports;
  uint32_t (*get_virtual_box)(void *, void *);
  uint32_t (*get_session)(void *, void *);
  uint32_t (*get_event_source)(void *, void *);
};
struct EventSource {
  struct NSISupports NSISupports;
  uint32_t (*create_listener)(void *, void *);
  uint32_t (*create_aggregator)(void *, uint32_t, void *, void *);
  uint32_t (*register_listener)(void *, void *, uint32_t, void *, bool_t);
  uint32_t (*unregister_listener)(void *, void *);
  uint32_t (*fire_event)(void *, void *, int32_t, void *);
  uint32_t (*get_event)(void *, void *, int32_t, void *);
  uint32_t (*event_processed)(void *, void *, void *);
};
struct EventListener {
  struct NSISupports NSISupports;
  uint32_t (*handle_event)(void *, void *);
};
struct Event {
  struct NSISupports NSISupports;
  uint32_t (*get_type)(void *, void *);
  uint32_t (*get_source)(void *, void *);
  uint32_t (*get_waitable)(void *, void *);
  uint32_t (*set_processed)(void *);
  uint32_t (*wait_processed)(void *, int32_t, void *);
};
struct ReusableEvent {
  struct Event Event;
  uint32_t (*get_generation)(void *, void *);
  uint32_t (*reuse)(void *);
};
struct MachineEvent {
  struct Event Event;
  uint32_t (*get_machine_id)(void *, void *);
};
struct MachineStateChangedEvent {
  struct MachineEvent MachineEvent;
  uint32_t (*get_state)(void *, void *);
};
struct MachineDataChangedEvent {
  struct MachineEvent MachineEvent;
  uint32_t (*get_temporary)(void *, void *);
};
struct MediumRegisteredEvent {
  struct Event Event;
  uint32_t (*get_medium_id)(void *, void *);
  uint32_t (*get_medium_type)(void *, void *);
  uint32_t (*get_registered)(void *, void *);
};
struct MachineRegisteredEvent {
  struct MachineEvent MachineEvent;
  uint32_t (*get_registered)(void *, void *);
};
struct SessionStateChangedEvent {
  struct MachineEvent MachineEvent;
  uint32_t (*get_state)(void *, void *);
};
struct GuestPropertyChangedEvent {
  struct MachineEvent MachineEvent;
  uint32_t (*get_name)(void *, void *);
  uint32_t (*get_value)(void *, void *);
  uint32_t (*get_flags)(void *, void *);
};
struct SnapshotEvent {
  struct MachineEvent MachineEvent;
  uint32_t (*get_snapshot_id)(void *, void *);
};
struct SnapshotTakenEvent {
  struct SnapshotEvent SnapshotEvent;
};
struct SnapshotDeletedEvent {
  struct SnapshotEvent SnapshotEvent;
};
struct SnapshotChangedEvent {
  struct SnapshotEvent SnapshotEvent;
};
struct MousePointerShapeChangedEvent {
  struct Event Event;
  uint32_t (*get_visible)(void *, void *);
  uint32_t (*get_alpha)(void *, void *);
  uint32_t (*get_xhot)(void *, void *);
  uint32_t (*get_yhot)(void *, void *);
  uint32_t (*get_width)(void *, void *);
  uint32_t (*get_height)(void *, void *);
  uint32_t (*get_shape)(void *, void *, void *);
};
struct MouseCapabilityChangedEvent {
  struct Event Event;
  uint32_t (*get_supports_absolute)(void *, void *);
  uint32_t (*get_supports_relative)(void *, void *);
  uint32_t (*get_needs_host_cursor)(void *, void *);
};
struct KeyboardLedsChangedEvent {
  struct Event Event;
  uint32_t (*get_num_lock)(void *, void *);
  uint32_t (*get_caps_lock)(void *, void *);
  uint32_t (*get_scroll_lock)(void *, void *);
};
struct StateChangedEvent {
  struct Event Event;
  uint32_t (*get_state)(void *, void *);
};
struct AdditionsStateChangedEvent {
  struct Event Event;
};
struct NetworkAdapterChangedEvent {
  struct Event Event;
  uint32_t (*get_network_adapter)(void *, void *);
};
struct SerialPortChangedEvent {
  struct Event Event;
  uint32_t (*get_serial_port)(void *, void *);
};
struct ParallelPortChangedEvent {
  struct Event Event;
  uint32_t (*get_parallel_port)(void *, void *);
};
struct StorageControllerChangedEvent {
  struct Event Event;
};
struct MediumChangedEvent {
  struct Event Event;
  uint32_t (*get_medium_attachment)(void *, void *);
};
struct ClipboardModeChangedEvent {
  struct Event Event;
  uint32_t (*get_clipboard_mode)(void *, void *);
};
struct DragAndDropModeChangedEvent {
  struct Event Event;
  uint32_t (*get_drag_and_drop_mode)(void *, void *);
};
struct CPUChangedEvent {
  struct Event Event;
  uint32_t (*get_cpu)(void *, void *);
  uint32_t (*get_add)(void *, void *);
};
struct CPUExecutionCapChangedEvent {
  struct Event Event;
  uint32_t (*get_execution_cap)(void *, void *);
};
struct GuestKeyboardEvent {
  struct Event Event;
  uint32_t (*get_scancodes)(void *, void *, void *);
};
struct GuestMouseEvent {
  struct ReusableEvent ReusableEvent;
  uint32_t (*get_absolute)(void *, void *);
  uint32_t (*get_x)(void *, void *);
  uint32_t (*get_y)(void *, void *);
  uint32_t (*get_z)(void *, void *);
  uint32_t (*get_w)(void *, void *);
  uint32_t (*get_buttons)(void *, void *);
};
struct VRDEServerChangedEvent {
  struct Event Event;
};
struct VRDEServerInfoChangedEvent {
  struct Event Event;
};
struct USBControllerChangedEvent {
  struct Event Event;
};
struct USBDeviceStateChangedEvent {
  struct Event Event;
  uint32_t (*get_device)(void *, void *);
  uint32_t (*get_attached)(void *, void *);
  uint32_t (*get_error)(void *, void *);
};
struct SharedFolderChangedEvent {
  struct Event Event;
  uint32_t (*get_scope)(void *, void *);
};
struct RuntimeErrorEvent {
  struct Event Event;
  uint32_t (*get_fatal)(void *, void *);
  uint32_t (*get_id)(void *, void *);
  uint32_t (*get_message)(void *, void *);
};
struct EventSourceChangedEvent {
  struct Event Event;
  uint32_t (*get_listener)(void *, void *);
  uint32_t (*get_add)(void *, void *);
};
struct ExtraDataChangedEvent {
  struct Event Event;
  uint32_t (*get_machine_id)(void *, void *);
  uint32_t (*get_key)(void *, void *);
  uint32_t (*get_value)(void *, void *);
};
struct VetoEvent {
  struct Event Event;
  uint32_t (*add_veto)(void *, wstring_t);
  uint32_t (*is_vetoed)(void *, void *);
  uint32_t (*get_vetos)(void *, void *, void *);
};
struct ExtraDataCanChangeEvent {
  struct VetoEvent VetoEvent;
  uint32_t (*get_machine_id)(void *, void *);
  uint32_t (*get_key)(void *, void *);
  uint32_t (*get_value)(void *, void *);
};
struct CanShowWindowEvent {
  struct VetoEvent VetoEvent;
};
struct ShowWindowEvent {
  struct Event Event;
  uint32_t (*get_win_id)(void *, void *);
};
struct NATRedirectEvent {
  struct MachineEvent MachineEvent;
  uint32_t (*get_slot)(void *, void *);
  uint32_t (*get_remove)(void *, void *);
  uint32_t (*get_name)(void *, void *);
  uint32_t (*get_proto)(void *, void *);
  uint32_t (*get_host_ip)(void *, void *);
  uint32_t (*get_host_port)(void *, void *);
  uint32_t (*get_guest_ip)(void *, void *);
  uint32_t (*get_guest_port)(void *, void *);
};
struct HostPCIDevicePlugEvent {
  struct MachineEvent MachineEvent;
  uint32_t (*get_plugged)(void *, void *);
  uint32_t (*get_success)(void *, void *);
  uint32_t (*get_attachment)(void *, void *);
  uint32_t (*get_message)(void *, void *);
};
struct VBoxSVCAvailabilityChangedEvent {
  struct Event Event;
  uint32_t (*get_available)(void *, void *);
};
struct BandwidthGroupChangedEvent {
  struct Event Event;
  uint32_t (*get_bandwidth_group)(void *, void *);
};
struct GuestMonitorChangedEvent {
  struct Event Event;
  uint32_t (*get_change_type)(void *, void *);
  uint32_t (*get_screen_id)(void *, void *);
  uint32_t (*get_origin_x)(void *, void *);
  uint32_t (*get_origin_y)(void *, void *);
  uint32_t (*get_width)(void *, void *);
  uint32_t (*get_height)(void *, void *);
};
struct StorageDeviceChangedEvent {
  struct Event Event;
  uint32_t (*get_storage_device)(void *, void *);
  uint32_t (*get_removed)(void *, void *);
};
static VALUE cNSISupports = Qundef;
static VALUE cNSIException = Qundef;
static VALUE cSettingsVersion = Qundef;
static VALUE cAccessMode = Qundef;
static VALUE cMachineState = Qundef;
static VALUE cSessionState = Qundef;
static VALUE cCPUPropertyType = Qundef;
static VALUE cHWVirtExPropertyType = Qundef;
static VALUE cFaultToleranceState = Qundef;
static VALUE cLockType = Qundef;
static VALUE cSessionType = Qundef;
static VALUE cDeviceType = Qundef;
static VALUE cDeviceActivity = Qundef;
static VALUE cClipboardMode = Qundef;
static VALUE cDragAndDropMode = Qundef;
static VALUE cScope = Qundef;
static VALUE cBIOSBootMenuMode = Qundef;
static VALUE cProcessorFeature = Qundef;
static VALUE cFirmwareType = Qundef;
static VALUE cPointingHIDType = Qundef;
static VALUE cKeyboardHIDType = Qundef;
static VALUE cVFSType = Qundef;
static VALUE cVFSFileType = Qundef;
static VALUE cImportOptions = Qundef;
static VALUE cVirtualSystemDescriptionType = Qundef;
static VALUE cVirtualSystemDescriptionValueType = Qundef;
static VALUE cCleanupMode = Qundef;
static VALUE cCloneMode = Qundef;
static VALUE cCloneOptions = Qundef;
static VALUE cAutostopType = Qundef;
static VALUE cHostNetworkInterfaceMediumType = Qundef;
static VALUE cHostNetworkInterfaceStatus = Qundef;
static VALUE cHostNetworkInterfaceType = Qundef;
static VALUE cAdditionsFacilityType = Qundef;
static VALUE cAdditionsFacilityClass = Qundef;
static VALUE cAdditionsFacilityStatus = Qundef;
static VALUE cAdditionsRunLevelType = Qundef;
static VALUE cAdditionsUpdateFlag = Qundef;
static VALUE cFileSeekType = Qundef;
static VALUE cProcessInputFlag = Qundef;
static VALUE cProcessOutputFlag = Qundef;
static VALUE cProcessWaitForFlag = Qundef;
static VALUE cProcessWaitResult = Qundef;
static VALUE cCopyFileFlag = Qundef;
static VALUE cDirectoryCreateFlag = Qundef;
static VALUE cDirectoryRemoveRecFlag = Qundef;
static VALUE cPathRenameFlag = Qundef;
static VALUE cProcessCreateFlag = Qundef;
static VALUE cProcessPriority = Qundef;
static VALUE cSymlinkType = Qundef;
static VALUE cSymlinkReadFlag = Qundef;
static VALUE cProcessStatus = Qundef;
static VALUE cFsObjType = Qundef;
static VALUE cDragAndDropAction = Qundef;
static VALUE cDirectoryOpenFlag = Qundef;
static VALUE cMediumState = Qundef;
static VALUE cMediumType = Qundef;
static VALUE cMediumVariant = Qundef;
static VALUE cDataType = Qundef;
static VALUE cDataFlags = Qundef;
static VALUE cMediumFormatCapabilities = Qundef;
static VALUE cMouseButtonState = Qundef;
static VALUE cFramebufferPixelFormat = Qundef;
static VALUE cNetworkAttachmentType = Qundef;
static VALUE cNetworkAdapterType = Qundef;
static VALUE cNetworkAdapterPromiscModePolicy = Qundef;
static VALUE cPortMode = Qundef;
static VALUE cUSBDeviceState = Qundef;
static VALUE cUSBDeviceFilterAction = Qundef;
static VALUE cAudioDriverType = Qundef;
static VALUE cAudioControllerType = Qundef;
static VALUE cAuthType = Qundef;
static VALUE cStorageBus = Qundef;
static VALUE cStorageControllerType = Qundef;
static VALUE cChipsetType = Qundef;
static VALUE cNATAliasMode = Qundef;
static VALUE cNATProtocol = Qundef;
static VALUE cBandwidthGroupType = Qundef;
static VALUE cVBoxEventType = Qundef;
static VALUE cGuestMonitorChangedEventType = Qundef;
static VALUE cVirtualBoxErrorInfo = Qundef;
static VALUE cDHCPServer = Qundef;
static VALUE cVirtualBox = Qundef;
static VALUE cVFSExplorer = Qundef;
static VALUE cAppliance = Qundef;
static VALUE cVirtualSystemDescription = Qundef;
static VALUE cInternalMachineControl = Qundef;
static VALUE cBIOSSettings = Qundef;
static VALUE cPCIAddress = Qundef;
static VALUE cPCIDeviceAttachment = Qundef;
static VALUE cMachine = Qundef;
static VALUE cVRDEServerInfo = Qundef;
static VALUE cConsole = Qundef;
static VALUE cHostNetworkInterface = Qundef;
static VALUE cHost = Qundef;
static VALUE cSystemProperties = Qundef;
static VALUE cGuestOSType = Qundef;
static VALUE cAdditionsFacility = Qundef;
static VALUE cGuestSession = Qundef;
static VALUE cProcess = Qundef;
static VALUE cGuestProcess = Qundef;
static VALUE cDirectory = Qundef;
static VALUE cGuestDirectory = Qundef;
static VALUE cFile = Qundef;
static VALUE cGuestFile = Qundef;
static VALUE cFsObjInfo = Qundef;
static VALUE cGuestFsObjInfo = Qundef;
static VALUE cGuest = Qundef;
static VALUE cProgress = Qundef;
static VALUE cSnapshot = Qundef;
static VALUE cMediumAttachment = Qundef;
static VALUE cMedium = Qundef;
static VALUE cMediumFormat = Qundef;
static VALUE cKeyboard = Qundef;
static VALUE cMouse = Qundef;
static VALUE cFramebuffer = Qundef;
static VALUE cFramebufferOverlay = Qundef;
static VALUE cDisplay = Qundef;
static VALUE cNetworkAdapter = Qundef;
static VALUE cSerialPort = Qundef;
static VALUE cParallelPort = Qundef;
static VALUE cMachineDebugger = Qundef;
static VALUE cUSBController = Qundef;
static VALUE cUSBDevice = Qundef;
static VALUE cUSBDeviceFilter = Qundef;
static VALUE cHostUSBDevice = Qundef;
static VALUE cHostUSBDeviceFilter = Qundef;
static VALUE cAudioAdapter = Qundef;
static VALUE cVRDEServer = Qundef;
static VALUE cSharedFolder = Qundef;
static VALUE cInternalSessionControl = Qundef;
static VALUE cSession = Qundef;
static VALUE cStorageController = Qundef;
static VALUE cPerformanceMetric = Qundef;
static VALUE cPerformanceCollector = Qundef;
static VALUE cNATEngine = Qundef;
static VALUE cExtPackPlugIn = Qundef;
static VALUE cExtPackBase = Qundef;
static VALUE cExtPack = Qundef;
static VALUE cExtPackFile = Qundef;
static VALUE cExtPackManager = Qundef;
static VALUE cBandwidthGroup = Qundef;
static VALUE cBandwidthControl = Qundef;
static VALUE cVirtualBoxClient = Qundef;
static VALUE cEventSource = Qundef;
static VALUE cEventListener = Qundef;
static VALUE cEvent = Qundef;
static VALUE cReusableEvent = Qundef;
static VALUE cMachineEvent = Qundef;
static VALUE cMachineStateChangedEvent = Qundef;
static VALUE cMachineDataChangedEvent = Qundef;
static VALUE cMediumRegisteredEvent = Qundef;
static VALUE cMachineRegisteredEvent = Qundef;
static VALUE cSessionStateChangedEvent = Qundef;
static VALUE cGuestPropertyChangedEvent = Qundef;
static VALUE cSnapshotEvent = Qundef;
static VALUE cSnapshotTakenEvent = Qundef;
static VALUE cSnapshotDeletedEvent = Qundef;
static VALUE cSnapshotChangedEvent = Qundef;
static VALUE cMousePointerShapeChangedEvent = Qundef;
static VALUE cMouseCapabilityChangedEvent = Qundef;
static VALUE cKeyboardLedsChangedEvent = Qundef;
static VALUE cStateChangedEvent = Qundef;
static VALUE cAdditionsStateChangedEvent = Qundef;
static VALUE cNetworkAdapterChangedEvent = Qundef;
static VALUE cSerialPortChangedEvent = Qundef;
static VALUE cParallelPortChangedEvent = Qundef;
static VALUE cStorageControllerChangedEvent = Qundef;
static VALUE cMediumChangedEvent = Qundef;
static VALUE cClipboardModeChangedEvent = Qundef;
static VALUE cDragAndDropModeChangedEvent = Qundef;
static VALUE cCPUChangedEvent = Qundef;
static VALUE cCPUExecutionCapChangedEvent = Qundef;
static VALUE cGuestKeyboardEvent = Qundef;
static VALUE cGuestMouseEvent = Qundef;
static VALUE cVRDEServerChangedEvent = Qundef;
static VALUE cVRDEServerInfoChangedEvent = Qundef;
static VALUE cUSBControllerChangedEvent = Qundef;
static VALUE cUSBDeviceStateChangedEvent = Qundef;
static VALUE cSharedFolderChangedEvent = Qundef;
static VALUE cRuntimeErrorEvent = Qundef;
static VALUE cEventSourceChangedEvent = Qundef;
static VALUE cExtraDataChangedEvent = Qundef;
static VALUE cVetoEvent = Qundef;
static VALUE cExtraDataCanChangeEvent = Qundef;
static VALUE cCanShowWindowEvent = Qundef;
static VALUE cShowWindowEvent = Qundef;
static VALUE cNATRedirectEvent = Qundef;
static VALUE cHostPCIDevicePlugEvent = Qundef;
static VALUE cVBoxSVCAvailabilityChangedEvent = Qundef;
static VALUE cBandwidthGroupChangedEvent = Qundef;
static VALUE cGuestMonitorChangedEvent = Qundef;
static VALUE cStorageDeviceChangedEvent = Qundef;
static VALUE NSISupports__QueryInterface(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NSISupports *vtbl = obj->vtbl;
  void * v1;
  void * v2;
  i0 = prepare_ptr(i0);
  extract_ptr(i0, &v1);
  NS_CHECK(vtbl->QueryInterface(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_ptr(v2));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NSISupports__AddRef(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NSISupports *vtbl = obj->vtbl;
  NS_CHECK(vtbl->AddRef(obj));
  res = rb_ary_new();
  return res;
}
static VALUE NSISupports__Release(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NSISupports *vtbl = obj->vtbl;
  NS_CHECK(vtbl->Release(obj));
  res = rb_ary_new();
  return res;
}
static VALUE NSIException__to_string(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NSIException *vtbl = obj->vtbl;
  wstring_t v1;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->to_string(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE NSIException__get_message(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NSIException *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_message(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NSIException__get_result(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NSIException *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_result(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NSIException__get_name(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NSIException *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_name(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NSIException__get_filename(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NSIException *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_filename(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NSIException__get_line_number(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NSIException *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_line_number(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NSIException__get_column_number(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NSIException *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_column_number(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NSIException__get_location(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NSIException *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_location(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_ptr(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NSIException__get_inner(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NSIException *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_inner(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cNSIException));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NSIException__get_data(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NSIException *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_data(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cNSISupports));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBoxErrorInfo__get_result_code(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBoxErrorInfo *vtbl = obj->vtbl;
  int32_t v1;
  NS_CHECK(vtbl->get_result_code(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBoxErrorInfo__get_interface_i_d(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBoxErrorInfo *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_interface_i_d(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBoxErrorInfo__get_component(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBoxErrorInfo *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_component(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBoxErrorInfo__get_text(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBoxErrorInfo *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_text(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBoxErrorInfo__get_next(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBoxErrorInfo *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_next(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cVirtualBoxErrorInfo));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE DHCPServer__set_configuration(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct DHCPServer *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  wstring_t v3;
  wstring_t v4;
  i0 = prepare_wstring(i0);
  i1 = prepare_wstring(i1);
  i2 = prepare_wstring(i2);
  i3 = prepare_wstring(i3);
  extract_wstring(i0, &v1);
  extract_wstring(i1, &v2);
  extract_wstring(i2, &v3);
  extract_wstring(i3, &v4);
  NS_CHECK(vtbl->set_configuration(obj, v1, v2, v3, v4));
  res = rb_ary_new();
  return res;
}
static VALUE DHCPServer__start(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct DHCPServer *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  wstring_t v3;
  i0 = prepare_wstring(i0);
  i1 = prepare_wstring(i1);
  i2 = prepare_wstring(i2);
  extract_wstring(i0, &v1);
  extract_wstring(i1, &v2);
  extract_wstring(i2, &v3);
  NS_CHECK(vtbl->start(obj, v1, v2, v3));
  res = rb_ary_new();
  return res;
}
static VALUE DHCPServer__stop(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct DHCPServer *vtbl = obj->vtbl;
  NS_CHECK(vtbl->stop(obj));
  res = rb_ary_new();
  return res;
}
static VALUE DHCPServer__get_enabled(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct DHCPServer *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_enabled(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE DHCPServer__get_ip_address(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct DHCPServer *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_ip_address(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE DHCPServer__get_network_mask(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct DHCPServer *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_network_mask(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE DHCPServer__get_network_name(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct DHCPServer *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_network_name(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE DHCPServer__get_lower_ip(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct DHCPServer *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_lower_ip(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE DHCPServer__get_upper_ip(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct DHCPServer *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_upper_ip(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBox__compose_machine_filename(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  wstring_t v3;
  wstring_t v4;
  wstring_t v5;
  i0 = prepare_wstring(i0);
  i1 = prepare_wstring(i1);
  i2 = prepare_wstring(i2);
  i3 = prepare_wstring(i3);
  extract_wstring(i0, &v1);
  extract_wstring(i1, &v2);
  extract_wstring(i2, &v3);
  extract_wstring(i3, &v4);
  NS_CHECK(vtbl->compose_machine_filename(obj, v1, v2, v3, v4, &v5));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v5));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBox__create_machine(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3, VALUE i4) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  uint32_t v3_size;
  void * v3;
  wstring_t v4;
  wstring_t v5;
  void * v6;
  i0 = prepare_wstring(i0);
  i1 = prepare_wstring(i1);
  i2 = prepare_array_wstring(i2);
  i3 = prepare_wstring(i3);
  i4 = prepare_wstring(i4);
  extract_wstring(i0, &v1);
  extract_wstring(i1, &v2);
  extract_carray(i2, &v3_size, &v3);
  extract_wstring(i3, &v4);
  extract_wstring(i4, &v5);
  NS_CHECK(vtbl->create_machine(obj, v1, v2, v3_size, v3, v4, v5, &v6));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v6, cMachine));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBox__open_machine(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  wstring_t v1;
  void * v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->open_machine(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cMachine));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBox__register_machine(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  void * v1;
  i0 = prepare_interface(i0, cMachine);
  extract_interface(i0, &v1, cMachine);
  NS_CHECK(vtbl->register_machine(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE VirtualBox__find_machine(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  wstring_t v1;
  void * v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->find_machine(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cMachine));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBox__get_machines_by_groups(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  uint32_t v2_size;
  void * v2;
  i0 = prepare_array_wstring(i0);
  extract_carray(i0, &v1_size, &v1);
  NS_CHECK(vtbl->get_machines_by_groups(obj, v1_size, v1, &v2_size, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v2_size, v2, cMachine));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBox__get_machine_states(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  uint32_t v2_size;
  void * v2;
  i0 = prepare_array_interface(i0, cMachine);
  extract_carray(i0, &v1_size, &v1);
  NS_CHECK(vtbl->get_machine_states(obj, v1_size, v1, &v2_size, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_enum(v2_size, v2, cMachineState));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBox__create_appliance(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->create_appliance(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cAppliance));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBox__create_hard_disk(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  void * v3;
  i0 = prepare_wstring(i0);
  i1 = prepare_wstring(i1);
  extract_wstring(i0, &v1);
  extract_wstring(i1, &v2);
  NS_CHECK(vtbl->create_hard_disk(obj, v1, v2, &v3));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v3, cMedium));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBox__open_medium(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  wstring_t v1;
  uint32_t v2;
  uint32_t v3;
  bool_t v4;
  void * v5;
  i0 = prepare_wstring(i0);
  i1 = prepare_enum(i1, cDeviceType);
  i2 = prepare_enum(i2, cAccessMode);
  i3 = prepare_bool(i3);
  extract_wstring(i0, &v1);
  extract_enum(i1, &v2, cDeviceType);
  extract_enum(i2, &v3, cAccessMode);
  extract_bool(i3, &v4);
  NS_CHECK(vtbl->open_medium(obj, v1, v2, v3, v4, &v5));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v5, cMedium));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBox__get_guest_os_type(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  wstring_t v1;
  void * v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->get_guest_os_type(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cGuestOSType));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBox__create_shared_folder(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  bool_t v3;
  bool_t v4;
  i0 = prepare_wstring(i0);
  i1 = prepare_wstring(i1);
  i2 = prepare_bool(i2);
  i3 = prepare_bool(i3);
  extract_wstring(i0, &v1);
  extract_wstring(i1, &v2);
  extract_bool(i2, &v3);
  extract_bool(i3, &v4);
  NS_CHECK(vtbl->create_shared_folder(obj, v1, v2, v3, v4));
  res = rb_ary_new();
  return res;
}
static VALUE VirtualBox__remove_shared_folder(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  wstring_t v1;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->remove_shared_folder(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE VirtualBox__get_extra_data_keys(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_extra_data_keys(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_wstring(v1_size, v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBox__get_extra_data(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->get_extra_data(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v2));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBox__set_extra_data(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  i0 = prepare_wstring(i0);
  i1 = prepare_wstring(i1);
  extract_wstring(i0, &v1);
  extract_wstring(i1, &v2);
  NS_CHECK(vtbl->set_extra_data(obj, v1, v2));
  res = rb_ary_new();
  return res;
}
static VALUE VirtualBox__set_settings_secret(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  wstring_t v1;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->set_settings_secret(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE VirtualBox__create_dhcp_server(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  wstring_t v1;
  void * v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->create_dhcp_server(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cDHCPServer));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBox__find_dhcp_server_by_network_name(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  wstring_t v1;
  void * v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->find_dhcp_server_by_network_name(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cDHCPServer));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBox__remove_dhcp_server(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  void * v1;
  i0 = prepare_interface(i0, cDHCPServer);
  extract_interface(i0, &v1, cDHCPServer);
  NS_CHECK(vtbl->remove_dhcp_server(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE VirtualBox__check_firmware_present(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  uint32_t v1;
  wstring_t v2;
  wstring_t v3;
  wstring_t v4;
  bool_t v5;
  i0 = prepare_enum(i0, cFirmwareType);
  i1 = prepare_wstring(i1);
  extract_enum(i0, &v1, cFirmwareType);
  extract_wstring(i1, &v2);
  NS_CHECK(vtbl->check_firmware_present(obj, v1, v2, &v3, &v4, &v5));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v3));
  rb_ary_push(res, convert_wstring(v4));
  rb_ary_push(res, convert_bool(v5));
  return res;
}
static VALUE VirtualBox__get_version(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_version(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBox__get_version_normalized(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_version_normalized(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBox__get_revision(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_revision(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBox__get_package_type(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_package_type(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBox__get_api_version(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_api_version(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBox__get_home_folder(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_home_folder(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBox__get_settings_file_path(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_settings_file_path(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBox__get_host(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_host(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cHost));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBox__get_system_properties(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_system_properties(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cSystemProperties));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBox__get_machines(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_machines(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v1_size, v1, cMachine));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBox__get_machine_groups(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_machine_groups(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_wstring(v1_size, v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBox__get_hard_disks(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_hard_disks(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v1_size, v1, cMedium));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBox__get_dvd_images(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_dvd_images(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v1_size, v1, cMedium));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBox__get_floppy_images(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_floppy_images(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v1_size, v1, cMedium));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBox__get_progress_operations(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_progress_operations(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v1_size, v1, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBox__get_guest_os_types(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_guest_os_types(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v1_size, v1, cGuestOSType));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBox__get_shared_folders(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_shared_folders(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v1_size, v1, cSharedFolder));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBox__get_performance_collector(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_performance_collector(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cPerformanceCollector));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBox__get_dhcp_servers(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_dhcp_servers(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v1_size, v1, cDHCPServer));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBox__get_event_source(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_event_source(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cEventSource));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBox__get_extension_pack_manager(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_extension_pack_manager(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cExtPackManager));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBox__get_internal_networks(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_internal_networks(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_wstring(v1_size, v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBox__get_generic_network_drivers(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBox *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_generic_network_drivers(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_wstring(v1_size, v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VFSExplorer__update(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VFSExplorer *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->update(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VFSExplorer__cd(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VFSExplorer *vtbl = obj->vtbl;
  wstring_t v1;
  void * v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->cd(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VFSExplorer__cd_up(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VFSExplorer *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->cd_up(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VFSExplorer__entry_list(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VFSExplorer *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  uint32_t v2_size;
  void * v2;
  uint32_t v3_size;
  void * v3;
  uint32_t v4_size;
  void * v4;
  NS_CHECK(vtbl->entry_list(obj, &v1_size, &v1, &v2_size, &v2, &v3_size, &v3, &v4_size, &v4));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_wstring(v1_size, v1));
  rb_ary_push(res, convert_array_uint32(v2_size, v2));
  rb_ary_push(res, convert_array_uint32(v3_size, v3));
  rb_ary_push(res, convert_array_uint32(v4_size, v4));
  return res;
}
static VALUE VFSExplorer__exists(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VFSExplorer *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  uint32_t v2_size;
  void * v2;
  i0 = prepare_array_wstring(i0);
  extract_carray(i0, &v1_size, &v1);
  NS_CHECK(vtbl->exists(obj, v1_size, v1, &v2_size, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_wstring(v2_size, v2));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VFSExplorer__remove(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VFSExplorer *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  void * v2;
  i0 = prepare_array_wstring(i0);
  extract_carray(i0, &v1_size, &v1);
  NS_CHECK(vtbl->remove(obj, v1_size, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VFSExplorer__get_path(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VFSExplorer *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_path(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VFSExplorer__get_type(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VFSExplorer *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_type(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cVFSType));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Appliance__read(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Appliance *vtbl = obj->vtbl;
  wstring_t v1;
  void * v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->read(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Appliance__interpret(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Appliance *vtbl = obj->vtbl;
  NS_CHECK(vtbl->interpret(obj));
  res = rb_ary_new();
  return res;
}
static VALUE Appliance__import_machines(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Appliance *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  void * v2;
  i0 = prepare_array_enum(i0, cImportOptions);
  extract_carray(i0, &v1_size, &v1);
  NS_CHECK(vtbl->import_machines(obj, v1_size, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Appliance__create_vfs_explorer(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Appliance *vtbl = obj->vtbl;
  wstring_t v1;
  void * v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->create_vfs_explorer(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cVFSExplorer));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Appliance__write(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Appliance *vtbl = obj->vtbl;
  wstring_t v1;
  bool_t v2;
  wstring_t v3;
  void * v4;
  i0 = prepare_wstring(i0);
  i1 = prepare_bool(i1);
  i2 = prepare_wstring(i2);
  extract_wstring(i0, &v1);
  extract_bool(i1, &v2);
  extract_wstring(i2, &v3);
  NS_CHECK(vtbl->write(obj, v1, v2, v3, &v4));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v4, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Appliance__get_warnings(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Appliance *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_warnings(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_wstring(v1_size, v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Appliance__get_path(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Appliance *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_path(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Appliance__get_disks(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Appliance *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_disks(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_wstring(v1_size, v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Appliance__get_virtual_system_descriptions(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Appliance *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_virtual_system_descriptions(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v1_size, v1, cVirtualSystemDescription));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Appliance__get_machines(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Appliance *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_machines(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_wstring(v1_size, v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualSystemDescription__get_description(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualSystemDescription *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  uint32_t v2_size;
  void * v2;
  uint32_t v3_size;
  void * v3;
  uint32_t v4_size;
  void * v4;
  uint32_t v5_size;
  void * v5;
  NS_CHECK(vtbl->get_description(obj, &v1_size, &v1, &v2_size, &v2, &v3_size, &v3, &v4_size, &v4, &v5_size, &v5));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_enum(v1_size, v1, cVirtualSystemDescriptionType));
  rb_ary_push(res, convert_array_wstring(v2_size, v2));
  rb_ary_push(res, convert_array_wstring(v3_size, v3));
  rb_ary_push(res, convert_array_wstring(v4_size, v4));
  rb_ary_push(res, convert_array_wstring(v5_size, v5));
  return res;
}
static VALUE VirtualSystemDescription__get_description_by_type(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualSystemDescription *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2_size;
  void * v2;
  uint32_t v3_size;
  void * v3;
  uint32_t v4_size;
  void * v4;
  uint32_t v5_size;
  void * v5;
  uint32_t v6_size;
  void * v6;
  i0 = prepare_enum(i0, cVirtualSystemDescriptionType);
  extract_enum(i0, &v1, cVirtualSystemDescriptionType);
  NS_CHECK(vtbl->get_description_by_type(obj, v1, &v2_size, &v2, &v3_size, &v3, &v4_size, &v4, &v5_size, &v5, &v6_size, &v6));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_enum(v2_size, v2, cVirtualSystemDescriptionType));
  rb_ary_push(res, convert_array_wstring(v3_size, v3));
  rb_ary_push(res, convert_array_wstring(v4_size, v4));
  rb_ary_push(res, convert_array_wstring(v5_size, v5));
  rb_ary_push(res, convert_array_wstring(v6_size, v6));
  return res;
}
static VALUE VirtualSystemDescription__get_values_by_type(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualSystemDescription *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  uint32_t v3_size;
  void * v3;
  i0 = prepare_enum(i0, cVirtualSystemDescriptionType);
  i1 = prepare_enum(i1, cVirtualSystemDescriptionValueType);
  extract_enum(i0, &v1, cVirtualSystemDescriptionType);
  extract_enum(i1, &v2, cVirtualSystemDescriptionValueType);
  NS_CHECK(vtbl->get_values_by_type(obj, v1, v2, &v3_size, &v3));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_wstring(v3_size, v3));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualSystemDescription__set_final_values(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualSystemDescription *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  uint32_t v2_size;
  void * v2;
  uint32_t v3_size;
  void * v3;
  i0 = prepare_array_bool(i0);
  i1 = prepare_array_wstring(i1);
  i2 = prepare_array_wstring(i2);
  extract_carray(i0, &v1_size, &v1);
  extract_carray(i1, &v2_size, &v2);
  extract_carray(i2, &v3_size, &v3);
  NS_CHECK(vtbl->set_final_values(obj, v1_size, v1, v2_size, v2, v3_size, v3));
  res = rb_ary_new();
  return res;
}
static VALUE VirtualSystemDescription__add_description(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualSystemDescription *vtbl = obj->vtbl;
  uint32_t v1;
  wstring_t v2;
  wstring_t v3;
  i0 = prepare_enum(i0, cVirtualSystemDescriptionType);
  i1 = prepare_wstring(i1);
  i2 = prepare_wstring(i2);
  extract_enum(i0, &v1, cVirtualSystemDescriptionType);
  extract_wstring(i1, &v2);
  extract_wstring(i2, &v3);
  NS_CHECK(vtbl->add_description(obj, v1, v2, v3));
  res = rb_ary_new();
  return res;
}
static VALUE VirtualSystemDescription__get_count(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualSystemDescription *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_count(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE InternalMachineControl__set_remove_saved_state_file(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalMachineControl *vtbl = obj->vtbl;
  bool_t v1;
  i0 = prepare_bool(i0);
  extract_bool(i0, &v1);
  NS_CHECK(vtbl->set_remove_saved_state_file(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE InternalMachineControl__update_state(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalMachineControl *vtbl = obj->vtbl;
  uint32_t v1;
  i0 = prepare_enum(i0, cMachineState);
  extract_enum(i0, &v1, cMachineState);
  NS_CHECK(vtbl->update_state(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE InternalMachineControl__get_ipcid(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalMachineControl *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_ipcid(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE InternalMachineControl__begin_power_up(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalMachineControl *vtbl = obj->vtbl;
  void * v1;
  i0 = prepare_interface(i0, cProgress);
  extract_interface(i0, &v1, cProgress);
  NS_CHECK(vtbl->begin_power_up(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE InternalMachineControl__end_power_up(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalMachineControl *vtbl = obj->vtbl;
  int32_t v1;
  i0 = prepare_int32(i0);
  extract_int32(i0, &v1);
  NS_CHECK(vtbl->end_power_up(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE InternalMachineControl__begin_powering_down(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalMachineControl *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->begin_powering_down(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE InternalMachineControl__end_powering_down(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalMachineControl *vtbl = obj->vtbl;
  int32_t v1;
  wstring_t v2;
  i0 = prepare_int32(i0);
  i1 = prepare_wstring(i1);
  extract_int32(i0, &v1);
  extract_wstring(i1, &v2);
  NS_CHECK(vtbl->end_powering_down(obj, v1, v2));
  res = rb_ary_new();
  return res;
}
static VALUE InternalMachineControl__run_usb_device_filters(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalMachineControl *vtbl = obj->vtbl;
  void * v1;
  bool_t v2;
  uint32_t v3;
  i0 = prepare_interface(i0, cUSBDevice);
  extract_interface(i0, &v1, cUSBDevice);
  NS_CHECK(vtbl->run_usb_device_filters(obj, v1, &v2, &v3));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v2));
  rb_ary_push(res, convert_uint32(v3));
  return res;
}
static VALUE InternalMachineControl__capture_usb_device(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalMachineControl *vtbl = obj->vtbl;
  wstring_t v1;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->capture_usb_device(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE InternalMachineControl__detach_usb_device(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalMachineControl *vtbl = obj->vtbl;
  wstring_t v1;
  bool_t v2;
  i0 = prepare_wstring(i0);
  i1 = prepare_bool(i1);
  extract_wstring(i0, &v1);
  extract_bool(i1, &v2);
  NS_CHECK(vtbl->detach_usb_device(obj, v1, v2));
  res = rb_ary_new();
  return res;
}
static VALUE InternalMachineControl__auto_capture_usb_devices(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalMachineControl *vtbl = obj->vtbl;
  NS_CHECK(vtbl->auto_capture_usb_devices(obj));
  res = rb_ary_new();
  return res;
}
static VALUE InternalMachineControl__detach_all_usb_devices(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalMachineControl *vtbl = obj->vtbl;
  bool_t v1;
  i0 = prepare_bool(i0);
  extract_bool(i0, &v1);
  NS_CHECK(vtbl->detach_all_usb_devices(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE InternalMachineControl__on_session_end(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalMachineControl *vtbl = obj->vtbl;
  void * v1;
  void * v2;
  i0 = prepare_interface(i0, cSession);
  extract_interface(i0, &v1, cSession);
  NS_CHECK(vtbl->on_session_end(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE InternalMachineControl__begin_saving_state(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalMachineControl *vtbl = obj->vtbl;
  void * v1;
  wstring_t v2;
  NS_CHECK(vtbl->begin_saving_state(obj, &v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cProgress));
  rb_ary_push(res, convert_wstring(v2));
  return res;
}
static VALUE InternalMachineControl__end_saving_state(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalMachineControl *vtbl = obj->vtbl;
  int32_t v1;
  wstring_t v2;
  i0 = prepare_int32(i0);
  i1 = prepare_wstring(i1);
  extract_int32(i0, &v1);
  extract_wstring(i1, &v2);
  NS_CHECK(vtbl->end_saving_state(obj, v1, v2));
  res = rb_ary_new();
  return res;
}
static VALUE InternalMachineControl__adopt_saved_state(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalMachineControl *vtbl = obj->vtbl;
  wstring_t v1;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->adopt_saved_state(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE InternalMachineControl__begin_taking_snapshot(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3, VALUE i4) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalMachineControl *vtbl = obj->vtbl;
  void * v1;
  wstring_t v2;
  wstring_t v3;
  void * v4;
  bool_t v5;
  wstring_t v6;
  i0 = prepare_interface(i0, cConsole);
  i1 = prepare_wstring(i1);
  i2 = prepare_wstring(i2);
  i3 = prepare_interface(i3, cProgress);
  i4 = prepare_bool(i4);
  extract_interface(i0, &v1, cConsole);
  extract_wstring(i1, &v2);
  extract_wstring(i2, &v3);
  extract_interface(i3, &v4, cProgress);
  extract_bool(i4, &v5);
  NS_CHECK(vtbl->begin_taking_snapshot(obj, v1, v2, v3, v4, v5, &v6));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v6));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE InternalMachineControl__end_taking_snapshot(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalMachineControl *vtbl = obj->vtbl;
  bool_t v1;
  i0 = prepare_bool(i0);
  extract_bool(i0, &v1);
  NS_CHECK(vtbl->end_taking_snapshot(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE InternalMachineControl__delete_snapshot(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalMachineControl *vtbl = obj->vtbl;
  void * v1;
  wstring_t v2;
  wstring_t v3;
  bool_t v4;
  uint32_t v5;
  void * v6;
  i0 = prepare_interface(i0, cConsole);
  i1 = prepare_wstring(i1);
  i2 = prepare_wstring(i2);
  i3 = prepare_bool(i3);
  extract_interface(i0, &v1, cConsole);
  extract_wstring(i1, &v2);
  extract_wstring(i2, &v3);
  extract_bool(i3, &v4);
  NS_CHECK(vtbl->delete_snapshot(obj, v1, v2, v3, v4, &v5, &v6));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v5, cMachineState));
  rb_ary_push(res, convert_interface(v6, cProgress));
  return res;
}
static VALUE InternalMachineControl__finish_online_merge_medium(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3, VALUE i4, VALUE i5) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalMachineControl *vtbl = obj->vtbl;
  void * v1;
  void * v2;
  void * v3;
  bool_t v4;
  void * v5;
  uint32_t v6_size;
  void * v6;
  i0 = prepare_interface(i0, cMediumAttachment);
  i1 = prepare_interface(i1, cMedium);
  i2 = prepare_interface(i2, cMedium);
  i3 = prepare_bool(i3);
  i4 = prepare_interface(i4, cMedium);
  i5 = prepare_array_interface(i5, cMedium);
  extract_interface(i0, &v1, cMediumAttachment);
  extract_interface(i1, &v2, cMedium);
  extract_interface(i2, &v3, cMedium);
  extract_bool(i3, &v4);
  extract_interface(i4, &v5, cMedium);
  extract_carray(i5, &v6_size, &v6);
  NS_CHECK(vtbl->finish_online_merge_medium(obj, v1, v2, v3, v4, v5, v6_size, v6));
  res = rb_ary_new();
  return res;
}
static VALUE InternalMachineControl__restore_snapshot(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalMachineControl *vtbl = obj->vtbl;
  void * v1;
  void * v2;
  uint32_t v3;
  void * v4;
  i0 = prepare_interface(i0, cConsole);
  i1 = prepare_interface(i1, cSnapshot);
  extract_interface(i0, &v1, cConsole);
  extract_interface(i1, &v2, cSnapshot);
  NS_CHECK(vtbl->restore_snapshot(obj, v1, v2, &v3, &v4));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v3, cMachineState));
  rb_ary_push(res, convert_interface(v4, cProgress));
  return res;
}
static VALUE InternalMachineControl__pull_guest_properties(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalMachineControl *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  uint32_t v2_size;
  void * v2;
  uint32_t v3_size;
  void * v3;
  uint32_t v4_size;
  void * v4;
  NS_CHECK(vtbl->pull_guest_properties(obj, &v1_size, &v1, &v2_size, &v2, &v3_size, &v3, &v4_size, &v4));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_wstring(v1_size, v1));
  rb_ary_push(res, convert_array_wstring(v2_size, v2));
  rb_ary_push(res, convert_array_int64(v3_size, v3));
  rb_ary_push(res, convert_array_wstring(v4_size, v4));
  return res;
}
static VALUE InternalMachineControl__push_guest_property(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalMachineControl *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  int64_t v3;
  wstring_t v4;
  i0 = prepare_wstring(i0);
  i1 = prepare_wstring(i1);
  i2 = prepare_int64(i2);
  i3 = prepare_wstring(i3);
  extract_wstring(i0, &v1);
  extract_wstring(i1, &v2);
  extract_int64(i2, &v3);
  extract_wstring(i3, &v4);
  NS_CHECK(vtbl->push_guest_property(obj, v1, v2, v3, v4));
  res = rb_ary_new();
  return res;
}
static VALUE InternalMachineControl__lock_media(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalMachineControl *vtbl = obj->vtbl;
  NS_CHECK(vtbl->lock_media(obj));
  res = rb_ary_new();
  return res;
}
static VALUE InternalMachineControl__unlock_media(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalMachineControl *vtbl = obj->vtbl;
  NS_CHECK(vtbl->unlock_media(obj));
  res = rb_ary_new();
  return res;
}
static VALUE InternalMachineControl__eject_medium(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalMachineControl *vtbl = obj->vtbl;
  void * v1;
  void * v2;
  i0 = prepare_interface(i0, cMediumAttachment);
  extract_interface(i0, &v1, cMediumAttachment);
  NS_CHECK(vtbl->eject_medium(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cMediumAttachment));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE InternalMachineControl__report_vm_statistics(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3, VALUE i4, VALUE i5, VALUE i6, VALUE i7, VALUE i8, VALUE i9, VALUE i10, VALUE i11, VALUE i12, VALUE i13, VALUE i14, VALUE i15) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalMachineControl *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  uint32_t v3;
  uint32_t v4;
  uint32_t v5;
  uint32_t v6;
  uint32_t v7;
  uint32_t v8;
  uint32_t v9;
  uint32_t v10;
  uint32_t v11;
  uint32_t v12;
  uint32_t v13;
  uint32_t v14;
  uint32_t v15;
  uint32_t v16;
  i0 = prepare_uint32(i0);
  i1 = prepare_uint32(i1);
  i2 = prepare_uint32(i2);
  i3 = prepare_uint32(i3);
  i4 = prepare_uint32(i4);
  i5 = prepare_uint32(i5);
  i6 = prepare_uint32(i6);
  i7 = prepare_uint32(i7);
  i8 = prepare_uint32(i8);
  i9 = prepare_uint32(i9);
  i10 = prepare_uint32(i10);
  i11 = prepare_uint32(i11);
  i12 = prepare_uint32(i12);
  i13 = prepare_uint32(i13);
  i14 = prepare_uint32(i14);
  i15 = prepare_uint32(i15);
  extract_uint32(i0, &v1);
  extract_uint32(i1, &v2);
  extract_uint32(i2, &v3);
  extract_uint32(i3, &v4);
  extract_uint32(i4, &v5);
  extract_uint32(i5, &v6);
  extract_uint32(i6, &v7);
  extract_uint32(i7, &v8);
  extract_uint32(i8, &v9);
  extract_uint32(i9, &v10);
  extract_uint32(i10, &v11);
  extract_uint32(i11, &v12);
  extract_uint32(i12, &v13);
  extract_uint32(i13, &v14);
  extract_uint32(i14, &v15);
  extract_uint32(i15, &v16);
  NS_CHECK(vtbl->report_vm_statistics(obj, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16));
  res = rb_ary_new();
  return res;
}
static VALUE BIOSSettings__get_logo_fade_in(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct BIOSSettings *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_logo_fade_in(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE BIOSSettings__get_logo_fade_out(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct BIOSSettings *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_logo_fade_out(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE BIOSSettings__get_logo_display_time(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct BIOSSettings *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_logo_display_time(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE BIOSSettings__get_logo_image_path(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct BIOSSettings *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_logo_image_path(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE BIOSSettings__get_boot_menu_mode(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct BIOSSettings *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_boot_menu_mode(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cBIOSBootMenuMode));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE BIOSSettings__get_acpi_enabled(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct BIOSSettings *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_acpi_enabled(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE BIOSSettings__get_io_apic_enabled(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct BIOSSettings *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_io_apic_enabled(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE BIOSSettings__get_time_offset(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct BIOSSettings *vtbl = obj->vtbl;
  int64_t v1;
  NS_CHECK(vtbl->get_time_offset(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int64(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE BIOSSettings__get_pxe_debug_enabled(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct BIOSSettings *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_pxe_debug_enabled(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE PCIAddress__as_long(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct PCIAddress *vtbl = obj->vtbl;
  int32_t v1;
  NS_CHECK(vtbl->as_long(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE PCIAddress__from_long(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct PCIAddress *vtbl = obj->vtbl;
  int32_t v1;
  i0 = prepare_int32(i0);
  extract_int32(i0, &v1);
  NS_CHECK(vtbl->from_long(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE PCIAddress__get_bus(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct PCIAddress *vtbl = obj->vtbl;
  int16_t v1;
  NS_CHECK(vtbl->get_bus(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int16(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE PCIAddress__get_device(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct PCIAddress *vtbl = obj->vtbl;
  int16_t v1;
  NS_CHECK(vtbl->get_device(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int16(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE PCIAddress__get_dev_function(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct PCIAddress *vtbl = obj->vtbl;
  int16_t v1;
  NS_CHECK(vtbl->get_dev_function(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int16(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE PCIDeviceAttachment__get_name(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct PCIDeviceAttachment *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_name(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE PCIDeviceAttachment__get_is_physical_device(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct PCIDeviceAttachment *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_is_physical_device(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE PCIDeviceAttachment__get_host_address(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct PCIDeviceAttachment *vtbl = obj->vtbl;
  int32_t v1;
  NS_CHECK(vtbl->get_host_address(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE PCIDeviceAttachment__get_guest_address(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct PCIDeviceAttachment *vtbl = obj->vtbl;
  int32_t v1;
  NS_CHECK(vtbl->get_guest_address(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__lock_machine(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  void * v1;
  uint32_t v2;
  i0 = prepare_interface(i0, cSession);
  i1 = prepare_enum(i1, cLockType);
  extract_interface(i0, &v1, cSession);
  extract_enum(i1, &v2, cLockType);
  NS_CHECK(vtbl->lock_machine(obj, v1, v2));
  res = rb_ary_new();
  return res;
}
static VALUE Machine__launch_vm_process(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  void * v1;
  wstring_t v2;
  wstring_t v3;
  void * v4;
  i0 = prepare_interface(i0, cSession);
  i1 = prepare_wstring(i1);
  i2 = prepare_wstring(i2);
  extract_interface(i0, &v1, cSession);
  extract_wstring(i1, &v2);
  extract_wstring(i2, &v3);
  NS_CHECK(vtbl->launch_vm_process(obj, v1, v2, v3, &v4));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v4, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__set_boot_order(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  i0 = prepare_uint32(i0);
  i1 = prepare_enum(i1, cDeviceType);
  extract_uint32(i0, &v1);
  extract_enum(i1, &v2, cDeviceType);
  NS_CHECK(vtbl->set_boot_order(obj, v1, v2));
  res = rb_ary_new();
  return res;
}
static VALUE Machine__get_boot_order(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  i0 = prepare_uint32(i0);
  extract_uint32(i0, &v1);
  NS_CHECK(vtbl->get_boot_order(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v2, cDeviceType));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__attach_device(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3, VALUE i4) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  int32_t v2;
  int32_t v3;
  uint32_t v4;
  void * v5;
  i0 = prepare_wstring(i0);
  i1 = prepare_int32(i1);
  i2 = prepare_int32(i2);
  i3 = prepare_enum(i3, cDeviceType);
  i4 = prepare_interface(i4, cMedium);
  extract_wstring(i0, &v1);
  extract_int32(i1, &v2);
  extract_int32(i2, &v3);
  extract_enum(i3, &v4, cDeviceType);
  extract_interface(i4, &v5, cMedium);
  NS_CHECK(vtbl->attach_device(obj, v1, v2, v3, v4, v5));
  res = rb_ary_new();
  return res;
}
static VALUE Machine__attach_device_without_medium(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  int32_t v2;
  int32_t v3;
  uint32_t v4;
  i0 = prepare_wstring(i0);
  i1 = prepare_int32(i1);
  i2 = prepare_int32(i2);
  i3 = prepare_enum(i3, cDeviceType);
  extract_wstring(i0, &v1);
  extract_int32(i1, &v2);
  extract_int32(i2, &v3);
  extract_enum(i3, &v4, cDeviceType);
  NS_CHECK(vtbl->attach_device_without_medium(obj, v1, v2, v3, v4));
  res = rb_ary_new();
  return res;
}
static VALUE Machine__detach_device(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  int32_t v2;
  int32_t v3;
  i0 = prepare_wstring(i0);
  i1 = prepare_int32(i1);
  i2 = prepare_int32(i2);
  extract_wstring(i0, &v1);
  extract_int32(i1, &v2);
  extract_int32(i2, &v3);
  NS_CHECK(vtbl->detach_device(obj, v1, v2, v3));
  res = rb_ary_new();
  return res;
}
static VALUE Machine__passthrough_device(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  int32_t v2;
  int32_t v3;
  bool_t v4;
  i0 = prepare_wstring(i0);
  i1 = prepare_int32(i1);
  i2 = prepare_int32(i2);
  i3 = prepare_bool(i3);
  extract_wstring(i0, &v1);
  extract_int32(i1, &v2);
  extract_int32(i2, &v3);
  extract_bool(i3, &v4);
  NS_CHECK(vtbl->passthrough_device(obj, v1, v2, v3, v4));
  res = rb_ary_new();
  return res;
}
static VALUE Machine__temporary_eject_device(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  int32_t v2;
  int32_t v3;
  bool_t v4;
  i0 = prepare_wstring(i0);
  i1 = prepare_int32(i1);
  i2 = prepare_int32(i2);
  i3 = prepare_bool(i3);
  extract_wstring(i0, &v1);
  extract_int32(i1, &v2);
  extract_int32(i2, &v3);
  extract_bool(i3, &v4);
  NS_CHECK(vtbl->temporary_eject_device(obj, v1, v2, v3, v4));
  res = rb_ary_new();
  return res;
}
static VALUE Machine__non_rotational_device(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  int32_t v2;
  int32_t v3;
  bool_t v4;
  i0 = prepare_wstring(i0);
  i1 = prepare_int32(i1);
  i2 = prepare_int32(i2);
  i3 = prepare_bool(i3);
  extract_wstring(i0, &v1);
  extract_int32(i1, &v2);
  extract_int32(i2, &v3);
  extract_bool(i3, &v4);
  NS_CHECK(vtbl->non_rotational_device(obj, v1, v2, v3, v4));
  res = rb_ary_new();
  return res;
}
static VALUE Machine__set_auto_discard_for_device(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  int32_t v2;
  int32_t v3;
  bool_t v4;
  i0 = prepare_wstring(i0);
  i1 = prepare_int32(i1);
  i2 = prepare_int32(i2);
  i3 = prepare_bool(i3);
  extract_wstring(i0, &v1);
  extract_int32(i1, &v2);
  extract_int32(i2, &v3);
  extract_bool(i3, &v4);
  NS_CHECK(vtbl->set_auto_discard_for_device(obj, v1, v2, v3, v4));
  res = rb_ary_new();
  return res;
}
static VALUE Machine__set_bandwidth_group_for_device(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  int32_t v2;
  int32_t v3;
  void * v4;
  i0 = prepare_wstring(i0);
  i1 = prepare_int32(i1);
  i2 = prepare_int32(i2);
  i3 = prepare_interface(i3, cBandwidthGroup);
  extract_wstring(i0, &v1);
  extract_int32(i1, &v2);
  extract_int32(i2, &v3);
  extract_interface(i3, &v4, cBandwidthGroup);
  NS_CHECK(vtbl->set_bandwidth_group_for_device(obj, v1, v2, v3, v4));
  res = rb_ary_new();
  return res;
}
static VALUE Machine__set_no_bandwidth_group_for_device(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  int32_t v2;
  int32_t v3;
  i0 = prepare_wstring(i0);
  i1 = prepare_int32(i1);
  i2 = prepare_int32(i2);
  extract_wstring(i0, &v1);
  extract_int32(i1, &v2);
  extract_int32(i2, &v3);
  NS_CHECK(vtbl->set_no_bandwidth_group_for_device(obj, v1, v2, v3));
  res = rb_ary_new();
  return res;
}
static VALUE Machine__unmount_medium(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  int32_t v2;
  int32_t v3;
  bool_t v4;
  i0 = prepare_wstring(i0);
  i1 = prepare_int32(i1);
  i2 = prepare_int32(i2);
  i3 = prepare_bool(i3);
  extract_wstring(i0, &v1);
  extract_int32(i1, &v2);
  extract_int32(i2, &v3);
  extract_bool(i3, &v4);
  NS_CHECK(vtbl->unmount_medium(obj, v1, v2, v3, v4));
  res = rb_ary_new();
  return res;
}
static VALUE Machine__mount_medium(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3, VALUE i4) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  int32_t v2;
  int32_t v3;
  void * v4;
  bool_t v5;
  i0 = prepare_wstring(i0);
  i1 = prepare_int32(i1);
  i2 = prepare_int32(i2);
  i3 = prepare_interface(i3, cMedium);
  i4 = prepare_bool(i4);
  extract_wstring(i0, &v1);
  extract_int32(i1, &v2);
  extract_int32(i2, &v3);
  extract_interface(i3, &v4, cMedium);
  extract_bool(i4, &v5);
  NS_CHECK(vtbl->mount_medium(obj, v1, v2, v3, v4, v5));
  res = rb_ary_new();
  return res;
}
static VALUE Machine__get_medium(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  int32_t v2;
  int32_t v3;
  void * v4;
  i0 = prepare_wstring(i0);
  i1 = prepare_int32(i1);
  i2 = prepare_int32(i2);
  extract_wstring(i0, &v1);
  extract_int32(i1, &v2);
  extract_int32(i2, &v3);
  NS_CHECK(vtbl->get_medium(obj, v1, v2, v3, &v4));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v4, cMedium));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_medium_attachments_of_controller(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  uint32_t v2_size;
  void * v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->get_medium_attachments_of_controller(obj, v1, &v2_size, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v2_size, v2, cMediumAttachment));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_medium_attachment(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  int32_t v2;
  int32_t v3;
  void * v4;
  i0 = prepare_wstring(i0);
  i1 = prepare_int32(i1);
  i2 = prepare_int32(i2);
  extract_wstring(i0, &v1);
  extract_int32(i1, &v2);
  extract_int32(i2, &v3);
  NS_CHECK(vtbl->get_medium_attachment(obj, v1, v2, v3, &v4));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v4, cMediumAttachment));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__attach_host_pci_device(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  int32_t v1;
  int32_t v2;
  bool_t v3;
  i0 = prepare_int32(i0);
  i1 = prepare_int32(i1);
  i2 = prepare_bool(i2);
  extract_int32(i0, &v1);
  extract_int32(i1, &v2);
  extract_bool(i2, &v3);
  NS_CHECK(vtbl->attach_host_pci_device(obj, v1, v2, v3));
  res = rb_ary_new();
  return res;
}
static VALUE Machine__detach_host_pci_device(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  int32_t v1;
  i0 = prepare_int32(i0);
  extract_int32(i0, &v1);
  NS_CHECK(vtbl->detach_host_pci_device(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE Machine__get_network_adapter(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  void * v2;
  i0 = prepare_uint32(i0);
  extract_uint32(i0, &v1);
  NS_CHECK(vtbl->get_network_adapter(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cNetworkAdapter));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__add_storage_controller(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  uint32_t v2;
  void * v3;
  i0 = prepare_wstring(i0);
  i1 = prepare_enum(i1, cStorageBus);
  extract_wstring(i0, &v1);
  extract_enum(i1, &v2, cStorageBus);
  NS_CHECK(vtbl->add_storage_controller(obj, v1, v2, &v3));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v3, cStorageController));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_storage_controller_by_name(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  void * v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->get_storage_controller_by_name(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cStorageController));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_storage_controller_by_instance(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  void * v2;
  i0 = prepare_uint32(i0);
  extract_uint32(i0, &v1);
  NS_CHECK(vtbl->get_storage_controller_by_instance(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cStorageController));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__remove_storage_controller(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->remove_storage_controller(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE Machine__set_storage_controller_bootable(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  bool_t v2;
  i0 = prepare_wstring(i0);
  i1 = prepare_bool(i1);
  extract_wstring(i0, &v1);
  extract_bool(i1, &v2);
  NS_CHECK(vtbl->set_storage_controller_bootable(obj, v1, v2));
  res = rb_ary_new();
  return res;
}
static VALUE Machine__get_serial_port(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  void * v2;
  i0 = prepare_uint32(i0);
  extract_uint32(i0, &v1);
  NS_CHECK(vtbl->get_serial_port(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cSerialPort));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_parallel_port(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  void * v2;
  i0 = prepare_uint32(i0);
  extract_uint32(i0, &v1);
  NS_CHECK(vtbl->get_parallel_port(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cParallelPort));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_extra_data_keys(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_extra_data_keys(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_wstring(v1_size, v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_extra_data(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->get_extra_data(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v2));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__set_extra_data(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  i0 = prepare_wstring(i0);
  i1 = prepare_wstring(i1);
  extract_wstring(i0, &v1);
  extract_wstring(i1, &v2);
  NS_CHECK(vtbl->set_extra_data(obj, v1, v2));
  res = rb_ary_new();
  return res;
}
static VALUE Machine__get_cpu_property(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  bool_t v2;
  i0 = prepare_enum(i0, cCPUPropertyType);
  extract_enum(i0, &v1, cCPUPropertyType);
  NS_CHECK(vtbl->get_cpu_property(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v2));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__set_cpu_property(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  bool_t v2;
  i0 = prepare_enum(i0, cCPUPropertyType);
  i1 = prepare_bool(i1);
  extract_enum(i0, &v1, cCPUPropertyType);
  extract_bool(i1, &v2);
  NS_CHECK(vtbl->set_cpu_property(obj, v1, v2));
  res = rb_ary_new();
  return res;
}
static VALUE Machine__get_cpuid_leaf(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  uint32_t v3;
  uint32_t v4;
  uint32_t v5;
  i0 = prepare_uint32(i0);
  extract_uint32(i0, &v1);
  NS_CHECK(vtbl->get_cpuid_leaf(obj, v1, &v2, &v3, &v4, &v5));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v2));
  rb_ary_push(res, convert_uint32(v3));
  rb_ary_push(res, convert_uint32(v4));
  rb_ary_push(res, convert_uint32(v5));
  return res;
}
static VALUE Machine__set_cpuid_leaf(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3, VALUE i4) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  uint32_t v3;
  uint32_t v4;
  uint32_t v5;
  i0 = prepare_uint32(i0);
  i1 = prepare_uint32(i1);
  i2 = prepare_uint32(i2);
  i3 = prepare_uint32(i3);
  i4 = prepare_uint32(i4);
  extract_uint32(i0, &v1);
  extract_uint32(i1, &v2);
  extract_uint32(i2, &v3);
  extract_uint32(i3, &v4);
  extract_uint32(i4, &v5);
  NS_CHECK(vtbl->set_cpuid_leaf(obj, v1, v2, v3, v4, v5));
  res = rb_ary_new();
  return res;
}
static VALUE Machine__remove_cpuid_leaf(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  i0 = prepare_uint32(i0);
  extract_uint32(i0, &v1);
  NS_CHECK(vtbl->remove_cpuid_leaf(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE Machine__remove_all_cpuid_leaves(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  NS_CHECK(vtbl->remove_all_cpuid_leaves(obj));
  res = rb_ary_new();
  return res;
}
static VALUE Machine__get_hw_virt_ex_property(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  bool_t v2;
  i0 = prepare_enum(i0, cHWVirtExPropertyType);
  extract_enum(i0, &v1, cHWVirtExPropertyType);
  NS_CHECK(vtbl->get_hw_virt_ex_property(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v2));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__set_hw_virt_ex_property(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  bool_t v2;
  i0 = prepare_enum(i0, cHWVirtExPropertyType);
  i1 = prepare_bool(i1);
  extract_enum(i0, &v1, cHWVirtExPropertyType);
  extract_bool(i1, &v2);
  NS_CHECK(vtbl->set_hw_virt_ex_property(obj, v1, v2));
  res = rb_ary_new();
  return res;
}
static VALUE Machine__save_settings(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  NS_CHECK(vtbl->save_settings(obj));
  res = rb_ary_new();
  return res;
}
static VALUE Machine__discard_settings(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  NS_CHECK(vtbl->discard_settings(obj));
  res = rb_ary_new();
  return res;
}
static VALUE Machine__unregister(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2_size;
  void * v2;
  i0 = prepare_enum(i0, cCleanupMode);
  extract_enum(i0, &v1, cCleanupMode);
  NS_CHECK(vtbl->unregister(obj, v1, &v2_size, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v2_size, v2, cMedium));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__delete(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  void * v2;
  i0 = prepare_array_interface(i0, cMedium);
  extract_carray(i0, &v1_size, &v1);
  NS_CHECK(vtbl->delete(obj, v1_size, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__export(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  void * v1;
  wstring_t v2;
  void * v3;
  i0 = prepare_interface(i0, cAppliance);
  i1 = prepare_wstring(i1);
  extract_interface(i0, &v1, cAppliance);
  extract_wstring(i1, &v2);
  NS_CHECK(vtbl->export(obj, v1, v2, &v3));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v3, cVirtualSystemDescription));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__find_snapshot(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  void * v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->find_snapshot(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cSnapshot));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__create_shared_folder(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  bool_t v3;
  bool_t v4;
  i0 = prepare_wstring(i0);
  i1 = prepare_wstring(i1);
  i2 = prepare_bool(i2);
  i3 = prepare_bool(i3);
  extract_wstring(i0, &v1);
  extract_wstring(i1, &v2);
  extract_bool(i2, &v3);
  extract_bool(i3, &v4);
  NS_CHECK(vtbl->create_shared_folder(obj, v1, v2, v3, v4));
  res = rb_ary_new();
  return res;
}
static VALUE Machine__remove_shared_folder(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->remove_shared_folder(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE Machine__can_show_console_window(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->can_show_console_window(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__show_console_window(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  int64_t v1;
  NS_CHECK(vtbl->show_console_window(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int64(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_guest_property(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  int64_t v3;
  wstring_t v4;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->get_guest_property(obj, v1, &v2, &v3, &v4));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v2));
  rb_ary_push(res, convert_int64(v3));
  rb_ary_push(res, convert_wstring(v4));
  return res;
}
static VALUE Machine__get_guest_property_value(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->get_guest_property_value(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v2));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_guest_property_timestamp(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  int64_t v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->get_guest_property_timestamp(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_int64(v2));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__set_guest_property(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  wstring_t v3;
  i0 = prepare_wstring(i0);
  i1 = prepare_wstring(i1);
  i2 = prepare_wstring(i2);
  extract_wstring(i0, &v1);
  extract_wstring(i1, &v2);
  extract_wstring(i2, &v3);
  NS_CHECK(vtbl->set_guest_property(obj, v1, v2, v3));
  res = rb_ary_new();
  return res;
}
static VALUE Machine__set_guest_property_value(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  i0 = prepare_wstring(i0);
  i1 = prepare_wstring(i1);
  extract_wstring(i0, &v1);
  extract_wstring(i1, &v2);
  NS_CHECK(vtbl->set_guest_property_value(obj, v1, v2));
  res = rb_ary_new();
  return res;
}
static VALUE Machine__delete_guest_property(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->delete_guest_property(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE Machine__enumerate_guest_properties(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  uint32_t v2_size;
  void * v2;
  uint32_t v3_size;
  void * v3;
  uint32_t v4_size;
  void * v4;
  uint32_t v5_size;
  void * v5;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->enumerate_guest_properties(obj, v1, &v2_size, &v2, &v3_size, &v3, &v4_size, &v4, &v5_size, &v5));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_wstring(v2_size, v2));
  rb_ary_push(res, convert_array_wstring(v3_size, v3));
  rb_ary_push(res, convert_array_int64(v4_size, v4));
  rb_ary_push(res, convert_array_wstring(v5_size, v5));
  return res;
}
static VALUE Machine__query_saved_guest_screen_info(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  uint32_t v3;
  uint32_t v4;
  uint32_t v5;
  bool_t v6;
  i0 = prepare_uint32(i0);
  extract_uint32(i0, &v1);
  NS_CHECK(vtbl->query_saved_guest_screen_info(obj, v1, &v2, &v3, &v4, &v5, &v6));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v2));
  rb_ary_push(res, convert_uint32(v3));
  rb_ary_push(res, convert_uint32(v4));
  rb_ary_push(res, convert_uint32(v5));
  rb_ary_push(res, convert_bool(v6));
  return res;
}
static VALUE Machine__query_saved_thumbnail_size(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  uint32_t v3;
  uint32_t v4;
  i0 = prepare_uint32(i0);
  extract_uint32(i0, &v1);
  NS_CHECK(vtbl->query_saved_thumbnail_size(obj, v1, &v2, &v3, &v4));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v2));
  rb_ary_push(res, convert_uint32(v3));
  rb_ary_push(res, convert_uint32(v4));
  return res;
}
static VALUE Machine__read_saved_thumbnail_to_array(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  bool_t v2;
  uint32_t v3;
  uint32_t v4;
  uint32_t v5_size;
  void * v5;
  i0 = prepare_uint32(i0);
  i1 = prepare_bool(i1);
  extract_uint32(i0, &v1);
  extract_bool(i1, &v2);
  NS_CHECK(vtbl->read_saved_thumbnail_to_array(obj, v1, v2, &v3, &v4, &v5_size, &v5));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v3));
  rb_ary_push(res, convert_uint32(v4));
  rb_ary_push(res, convert_blob(v5_size, v5));
  return res;
}
static VALUE Machine__read_saved_thumbnail_png_to_array(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  uint32_t v3;
  uint32_t v4_size;
  void * v4;
  i0 = prepare_uint32(i0);
  extract_uint32(i0, &v1);
  NS_CHECK(vtbl->read_saved_thumbnail_png_to_array(obj, v1, &v2, &v3, &v4_size, &v4));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v2));
  rb_ary_push(res, convert_uint32(v3));
  rb_ary_push(res, convert_blob(v4_size, v4));
  return res;
}
static VALUE Machine__query_saved_screenshot_png_size(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  uint32_t v3;
  uint32_t v4;
  i0 = prepare_uint32(i0);
  extract_uint32(i0, &v1);
  NS_CHECK(vtbl->query_saved_screenshot_png_size(obj, v1, &v2, &v3, &v4));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v2));
  rb_ary_push(res, convert_uint32(v3));
  rb_ary_push(res, convert_uint32(v4));
  return res;
}
static VALUE Machine__read_saved_screenshot_png_to_array(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  uint32_t v3;
  uint32_t v4_size;
  void * v4;
  i0 = prepare_uint32(i0);
  extract_uint32(i0, &v1);
  NS_CHECK(vtbl->read_saved_screenshot_png_to_array(obj, v1, &v2, &v3, &v4_size, &v4));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v2));
  rb_ary_push(res, convert_uint32(v3));
  rb_ary_push(res, convert_blob(v4_size, v4));
  return res;
}
static VALUE Machine__hot_plug_cpu(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  i0 = prepare_uint32(i0);
  extract_uint32(i0, &v1);
  NS_CHECK(vtbl->hot_plug_cpu(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE Machine__hot_unplug_cpu(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  i0 = prepare_uint32(i0);
  extract_uint32(i0, &v1);
  NS_CHECK(vtbl->hot_unplug_cpu(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE Machine__get_cpu_status(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  bool_t v2;
  i0 = prepare_uint32(i0);
  extract_uint32(i0, &v1);
  NS_CHECK(vtbl->get_cpu_status(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v2));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__query_log_filename(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  wstring_t v2;
  i0 = prepare_uint32(i0);
  extract_uint32(i0, &v1);
  NS_CHECK(vtbl->query_log_filename(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v2));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__read_log(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  int64_t v2;
  int64_t v3;
  uint32_t v4_size;
  void * v4;
  i0 = prepare_uint32(i0);
  i1 = prepare_int64(i1);
  i2 = prepare_int64(i2);
  extract_uint32(i0, &v1);
  extract_int64(i1, &v2);
  extract_int64(i2, &v3);
  NS_CHECK(vtbl->read_log(obj, v1, v2, v3, &v4_size, &v4));
  res = rb_ary_new();
  rb_ary_push(res, convert_blob(v4_size, v4));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__clone_to(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  void * v1;
  uint32_t v2;
  uint32_t v3_size;
  void * v3;
  void * v4;
  i0 = prepare_interface(i0, cMachine);
  i1 = prepare_enum(i1, cCloneMode);
  i2 = prepare_array_enum(i2, cCloneOptions);
  extract_interface(i0, &v1, cMachine);
  extract_enum(i1, &v2, cCloneMode);
  extract_carray(i2, &v3_size, &v3);
  NS_CHECK(vtbl->clone_to(obj, v1, v2, v3_size, v3, &v4));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v4, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_parent(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_parent(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cVirtualBox));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_accessible(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_accessible(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_access_error(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_access_error(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cVirtualBoxErrorInfo));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_name(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_name(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_description(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_description(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_id(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_id(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_groups(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_groups(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_wstring(v1_size, v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_os_type_id(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_os_type_id(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_hardware_version(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_hardware_version(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_hardware_uuid(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_hardware_uuid(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_cpu_count(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_cpu_count(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_cpu_hot_plug_enabled(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_cpu_hot_plug_enabled(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_cpu_execution_cap(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_cpu_execution_cap(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_memory_size(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_memory_size(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_memory_balloon_size(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_memory_balloon_size(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_page_fusion_enabled(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_page_fusion_enabled(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_vram_size(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_vram_size(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_accelerate_3d_enabled(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_accelerate_3d_enabled(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_accelerate_2d_video_enabled(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_accelerate_2d_video_enabled(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_monitor_count(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_monitor_count(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_video_capture_enabled(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_video_capture_enabled(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_video_capture_file(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_video_capture_file(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_video_capture_width(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_video_capture_width(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_video_capture_height(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_video_capture_height(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_bios_settings(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_bios_settings(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cBIOSSettings));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_firmware_type(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_firmware_type(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cFirmwareType));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_pointing_hid_type(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_pointing_hid_type(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cPointingHIDType));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_keyboard_hid_type(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_keyboard_hid_type(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cKeyboardHIDType));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_hpet_enabled(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_hpet_enabled(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_chipset_type(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_chipset_type(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cChipsetType));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_snapshot_folder(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_snapshot_folder(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_vrde_server(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_vrde_server(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cVRDEServer));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_emulated_usb_webcamera_enabled(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_emulated_usb_webcamera_enabled(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_emulated_usb_card_reader_enabled(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_emulated_usb_card_reader_enabled(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_medium_attachments(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_medium_attachments(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v1_size, v1, cMediumAttachment));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_usb_controller(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_usb_controller(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cUSBController));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_audio_adapter(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_audio_adapter(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cAudioAdapter));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_storage_controllers(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_storage_controllers(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v1_size, v1, cStorageController));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_settings_file_path(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_settings_file_path(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_settings_modified(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_settings_modified(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_session_state(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_session_state(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cSessionState));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_session_type(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_session_type(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_session_pid(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_session_pid(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_state(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_state(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cMachineState));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_last_state_change(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  int64_t v1;
  NS_CHECK(vtbl->get_last_state_change(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int64(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_state_file_path(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_state_file_path(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_log_folder(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_log_folder(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_current_snapshot(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_current_snapshot(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cSnapshot));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_snapshot_count(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_snapshot_count(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_current_state_modified(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_current_state_modified(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_shared_folders(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_shared_folders(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v1_size, v1, cSharedFolder));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_clipboard_mode(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_clipboard_mode(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cClipboardMode));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_drag_and_drop_mode(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_drag_and_drop_mode(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cDragAndDropMode));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_guest_property_notification_patterns(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_guest_property_notification_patterns(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_teleporter_enabled(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_teleporter_enabled(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_teleporter_port(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_teleporter_port(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_teleporter_address(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_teleporter_address(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_teleporter_password(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_teleporter_password(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_fault_tolerance_state(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_fault_tolerance_state(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cFaultToleranceState));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_fault_tolerance_port(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_fault_tolerance_port(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_fault_tolerance_address(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_fault_tolerance_address(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_fault_tolerance_password(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_fault_tolerance_password(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_fault_tolerance_sync_interval(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_fault_tolerance_sync_interval(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_rtc_use_utc(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_rtc_use_utc(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_io_cache_enabled(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_io_cache_enabled(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_io_cache_size(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_io_cache_size(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_pci_device_assignments(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_pci_device_assignments(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v1_size, v1, cPCIDeviceAttachment));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_bandwidth_control(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_bandwidth_control(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cBandwidthControl));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_tracing_enabled(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_tracing_enabled(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_tracing_config(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_tracing_config(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_allow_tracing_to_access_vm(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_allow_tracing_to_access_vm(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_autostart_enabled(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_autostart_enabled(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_autostart_delay(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_autostart_delay(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Machine__get_autostop_type(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Machine *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_autostop_type(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cAutostopType));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VRDEServerInfo__get_active(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VRDEServerInfo *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_active(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VRDEServerInfo__get_port(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VRDEServerInfo *vtbl = obj->vtbl;
  int32_t v1;
  NS_CHECK(vtbl->get_port(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VRDEServerInfo__get_number_of_clients(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VRDEServerInfo *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_number_of_clients(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VRDEServerInfo__get_begin_time(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VRDEServerInfo *vtbl = obj->vtbl;
  int64_t v1;
  NS_CHECK(vtbl->get_begin_time(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int64(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VRDEServerInfo__get_end_time(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VRDEServerInfo *vtbl = obj->vtbl;
  int64_t v1;
  NS_CHECK(vtbl->get_end_time(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int64(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VRDEServerInfo__get_bytes_sent(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VRDEServerInfo *vtbl = obj->vtbl;
  int64_t v1;
  NS_CHECK(vtbl->get_bytes_sent(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int64(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VRDEServerInfo__get_bytes_sent_total(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VRDEServerInfo *vtbl = obj->vtbl;
  int64_t v1;
  NS_CHECK(vtbl->get_bytes_sent_total(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int64(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VRDEServerInfo__get_bytes_received(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VRDEServerInfo *vtbl = obj->vtbl;
  int64_t v1;
  NS_CHECK(vtbl->get_bytes_received(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int64(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VRDEServerInfo__get_bytes_received_total(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VRDEServerInfo *vtbl = obj->vtbl;
  int64_t v1;
  NS_CHECK(vtbl->get_bytes_received_total(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int64(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VRDEServerInfo__get_user(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VRDEServerInfo *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_user(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VRDEServerInfo__get_domain(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VRDEServerInfo *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_domain(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VRDEServerInfo__get_client_name(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VRDEServerInfo *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_client_name(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VRDEServerInfo__get_client_ip(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VRDEServerInfo *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_client_ip(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VRDEServerInfo__get_client_version(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VRDEServerInfo *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_client_version(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VRDEServerInfo__get_encryption_style(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VRDEServerInfo *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_encryption_style(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Console__power_up(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->power_up(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Console__power_up_paused(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->power_up_paused(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Console__power_down(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->power_down(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Console__reset(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  NS_CHECK(vtbl->reset(obj));
  res = rb_ary_new();
  return res;
}
static VALUE Console__pause(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  NS_CHECK(vtbl->pause(obj));
  res = rb_ary_new();
  return res;
}
static VALUE Console__resume(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  NS_CHECK(vtbl->resume(obj));
  res = rb_ary_new();
  return res;
}
static VALUE Console__power_button(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  NS_CHECK(vtbl->power_button(obj));
  res = rb_ary_new();
  return res;
}
static VALUE Console__sleep_button(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  NS_CHECK(vtbl->sleep_button(obj));
  res = rb_ary_new();
  return res;
}
static VALUE Console__get_power_button_handled(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_power_button_handled(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Console__get_guest_entered_acpi_mode(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_guest_entered_acpi_mode(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Console__save_state(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->save_state(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Console__adopt_saved_state(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  wstring_t v1;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->adopt_saved_state(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE Console__discard_saved_state(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  bool_t v1;
  i0 = prepare_bool(i0);
  extract_bool(i0, &v1);
  NS_CHECK(vtbl->discard_saved_state(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE Console__get_device_activity(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  i0 = prepare_enum(i0, cDeviceType);
  extract_enum(i0, &v1, cDeviceType);
  NS_CHECK(vtbl->get_device_activity(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v2, cDeviceActivity));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Console__attach_usb_device(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  wstring_t v1;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->attach_usb_device(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE Console__detach_usb_device(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  wstring_t v1;
  void * v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->detach_usb_device(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cUSBDevice));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Console__find_usb_device_by_address(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  wstring_t v1;
  void * v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->find_usb_device_by_address(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cUSBDevice));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Console__find_usb_device_by_id(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  wstring_t v1;
  void * v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->find_usb_device_by_id(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cUSBDevice));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Console__create_shared_folder(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  bool_t v3;
  bool_t v4;
  i0 = prepare_wstring(i0);
  i1 = prepare_wstring(i1);
  i2 = prepare_bool(i2);
  i3 = prepare_bool(i3);
  extract_wstring(i0, &v1);
  extract_wstring(i1, &v2);
  extract_bool(i2, &v3);
  extract_bool(i3, &v4);
  NS_CHECK(vtbl->create_shared_folder(obj, v1, v2, v3, v4));
  res = rb_ary_new();
  return res;
}
static VALUE Console__remove_shared_folder(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  wstring_t v1;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->remove_shared_folder(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE Console__take_snapshot(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  void * v3;
  i0 = prepare_wstring(i0);
  i1 = prepare_wstring(i1);
  extract_wstring(i0, &v1);
  extract_wstring(i1, &v2);
  NS_CHECK(vtbl->take_snapshot(obj, v1, v2, &v3));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v3, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Console__delete_snapshot(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  wstring_t v1;
  void * v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->delete_snapshot(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Console__delete_snapshot_and_all_children(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  wstring_t v1;
  void * v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->delete_snapshot_and_all_children(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Console__delete_snapshot_range(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  void * v3;
  i0 = prepare_wstring(i0);
  i1 = prepare_wstring(i1);
  extract_wstring(i0, &v1);
  extract_wstring(i1, &v2);
  NS_CHECK(vtbl->delete_snapshot_range(obj, v1, v2, &v3));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v3, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Console__restore_snapshot(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  void * v1;
  void * v2;
  i0 = prepare_interface(i0, cSnapshot);
  extract_interface(i0, &v1, cSnapshot);
  NS_CHECK(vtbl->restore_snapshot(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Console__teleport(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  wstring_t v1;
  uint32_t v2;
  wstring_t v3;
  uint32_t v4;
  void * v5;
  i0 = prepare_wstring(i0);
  i1 = prepare_uint32(i1);
  i2 = prepare_wstring(i2);
  i3 = prepare_uint32(i3);
  extract_wstring(i0, &v1);
  extract_uint32(i1, &v2);
  extract_wstring(i2, &v3);
  extract_uint32(i3, &v4);
  NS_CHECK(vtbl->teleport(obj, v1, v2, v3, v4, &v5));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v5, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Console__get_machine(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_machine(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cMachine));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Console__get_state(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_state(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cMachineState));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Console__get_guest(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_guest(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cGuest));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Console__get_keyboard(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_keyboard(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cKeyboard));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Console__get_mouse(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_mouse(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cMouse));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Console__get_display(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_display(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cDisplay));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Console__get_debugger(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_debugger(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cMachineDebugger));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Console__get_usb_devices(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_usb_devices(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v1_size, v1, cUSBDevice));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Console__get_remote_usb_devices(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_remote_usb_devices(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v1_size, v1, cHostUSBDevice));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Console__get_shared_folders(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_shared_folders(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v1_size, v1, cSharedFolder));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Console__get_vrde_server_info(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_vrde_server_info(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cVRDEServerInfo));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Console__get_event_source(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_event_source(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cEventSource));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Console__get_attached_pci_devices(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_attached_pci_devices(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v1_size, v1, cPCIDeviceAttachment));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Console__get_use_host_clipboard(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Console *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_use_host_clipboard(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE HostNetworkInterface__enable_static_ip_config(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct HostNetworkInterface *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  i0 = prepare_wstring(i0);
  i1 = prepare_wstring(i1);
  extract_wstring(i0, &v1);
  extract_wstring(i1, &v2);
  NS_CHECK(vtbl->enable_static_ip_config(obj, v1, v2));
  res = rb_ary_new();
  return res;
}
static VALUE HostNetworkInterface__enable_static_ip_config_v6(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct HostNetworkInterface *vtbl = obj->vtbl;
  wstring_t v1;
  uint32_t v2;
  i0 = prepare_wstring(i0);
  i1 = prepare_uint32(i1);
  extract_wstring(i0, &v1);
  extract_uint32(i1, &v2);
  NS_CHECK(vtbl->enable_static_ip_config_v6(obj, v1, v2));
  res = rb_ary_new();
  return res;
}
static VALUE HostNetworkInterface__enable_dynamic_ip_config(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct HostNetworkInterface *vtbl = obj->vtbl;
  NS_CHECK(vtbl->enable_dynamic_ip_config(obj));
  res = rb_ary_new();
  return res;
}
static VALUE HostNetworkInterface__dhcp_rediscover(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct HostNetworkInterface *vtbl = obj->vtbl;
  NS_CHECK(vtbl->dhcp_rediscover(obj));
  res = rb_ary_new();
  return res;
}
static VALUE HostNetworkInterface__get_name(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct HostNetworkInterface *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_name(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE HostNetworkInterface__get_id(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct HostNetworkInterface *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_id(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE HostNetworkInterface__get_network_name(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct HostNetworkInterface *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_network_name(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE HostNetworkInterface__get_dhcp_enabled(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct HostNetworkInterface *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_dhcp_enabled(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE HostNetworkInterface__get_ip_address(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct HostNetworkInterface *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_ip_address(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE HostNetworkInterface__get_network_mask(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct HostNetworkInterface *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_network_mask(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE HostNetworkInterface__get_ipv6_supported(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct HostNetworkInterface *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_ipv6_supported(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE HostNetworkInterface__get_ipv6_address(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct HostNetworkInterface *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_ipv6_address(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE HostNetworkInterface__get_ipv6_network_mask_prefix_length(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct HostNetworkInterface *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_ipv6_network_mask_prefix_length(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE HostNetworkInterface__get_hardware_address(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct HostNetworkInterface *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_hardware_address(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE HostNetworkInterface__get_medium_type(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct HostNetworkInterface *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_medium_type(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cHostNetworkInterfaceMediumType));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE HostNetworkInterface__get_status(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct HostNetworkInterface *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_status(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cHostNetworkInterfaceStatus));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE HostNetworkInterface__get_interface_type(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct HostNetworkInterface *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_interface_type(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cHostNetworkInterfaceType));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Host__get_processor_speed(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Host *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  i0 = prepare_uint32(i0);
  extract_uint32(i0, &v1);
  NS_CHECK(vtbl->get_processor_speed(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v2));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Host__get_processor_feature(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Host *vtbl = obj->vtbl;
  uint32_t v1;
  bool_t v2;
  i0 = prepare_enum(i0, cProcessorFeature);
  extract_enum(i0, &v1, cProcessorFeature);
  NS_CHECK(vtbl->get_processor_feature(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v2));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Host__get_processor_description(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Host *vtbl = obj->vtbl;
  uint32_t v1;
  wstring_t v2;
  i0 = prepare_uint32(i0);
  extract_uint32(i0, &v1);
  NS_CHECK(vtbl->get_processor_description(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v2));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Host__get_processor_cpuid_leaf(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Host *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  uint32_t v3;
  uint32_t v4;
  uint32_t v5;
  uint32_t v6;
  uint32_t v7;
  i0 = prepare_uint32(i0);
  i1 = prepare_uint32(i1);
  i2 = prepare_uint32(i2);
  extract_uint32(i0, &v1);
  extract_uint32(i1, &v2);
  extract_uint32(i2, &v3);
  NS_CHECK(vtbl->get_processor_cpuid_leaf(obj, v1, v2, v3, &v4, &v5, &v6, &v7));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v4));
  rb_ary_push(res, convert_uint32(v5));
  rb_ary_push(res, convert_uint32(v6));
  rb_ary_push(res, convert_uint32(v7));
  return res;
}
static VALUE Host__create_host_only_network_interface(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Host *vtbl = obj->vtbl;
  void * v1;
  void * v2;
  NS_CHECK(vtbl->create_host_only_network_interface(obj, &v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cHostNetworkInterface));
  rb_ary_push(res, convert_interface(v2, cProgress));
  return res;
}
static VALUE Host__remove_host_only_network_interface(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Host *vtbl = obj->vtbl;
  wstring_t v1;
  void * v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->remove_host_only_network_interface(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Host__create_usb_device_filter(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Host *vtbl = obj->vtbl;
  wstring_t v1;
  void * v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->create_usb_device_filter(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cHostUSBDeviceFilter));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Host__insert_usb_device_filter(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Host *vtbl = obj->vtbl;
  uint32_t v1;
  void * v2;
  i0 = prepare_uint32(i0);
  i1 = prepare_interface(i1, cHostUSBDeviceFilter);
  extract_uint32(i0, &v1);
  extract_interface(i1, &v2, cHostUSBDeviceFilter);
  NS_CHECK(vtbl->insert_usb_device_filter(obj, v1, v2));
  res = rb_ary_new();
  return res;
}
static VALUE Host__remove_usb_device_filter(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Host *vtbl = obj->vtbl;
  uint32_t v1;
  i0 = prepare_uint32(i0);
  extract_uint32(i0, &v1);
  NS_CHECK(vtbl->remove_usb_device_filter(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE Host__find_host_dvd_drive(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Host *vtbl = obj->vtbl;
  wstring_t v1;
  void * v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->find_host_dvd_drive(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cMedium));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Host__find_host_floppy_drive(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Host *vtbl = obj->vtbl;
  wstring_t v1;
  void * v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->find_host_floppy_drive(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cMedium));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Host__find_host_network_interface_by_name(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Host *vtbl = obj->vtbl;
  wstring_t v1;
  void * v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->find_host_network_interface_by_name(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cHostNetworkInterface));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Host__find_host_network_interface_by_id(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Host *vtbl = obj->vtbl;
  wstring_t v1;
  void * v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->find_host_network_interface_by_id(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cHostNetworkInterface));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Host__find_host_network_interfaces_of_type(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Host *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2_size;
  void * v2;
  i0 = prepare_enum(i0, cHostNetworkInterfaceType);
  extract_enum(i0, &v1, cHostNetworkInterfaceType);
  NS_CHECK(vtbl->find_host_network_interfaces_of_type(obj, v1, &v2_size, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v2_size, v2, cHostNetworkInterface));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Host__find_usb_device_by_id(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Host *vtbl = obj->vtbl;
  wstring_t v1;
  void * v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->find_usb_device_by_id(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cHostUSBDevice));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Host__find_usb_device_by_address(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Host *vtbl = obj->vtbl;
  wstring_t v1;
  void * v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->find_usb_device_by_address(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cHostUSBDevice));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Host__generate_mac_address(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Host *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->generate_mac_address(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Host__get_dvd_drives(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Host *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_dvd_drives(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v1_size, v1, cMedium));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Host__get_floppy_drives(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Host *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_floppy_drives(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v1_size, v1, cMedium));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Host__get_usb_devices(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Host *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_usb_devices(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v1_size, v1, cHostUSBDevice));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Host__get_usb_device_filters(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Host *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_usb_device_filters(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v1_size, v1, cHostUSBDeviceFilter));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Host__get_network_interfaces(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Host *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_network_interfaces(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v1_size, v1, cHostNetworkInterface));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Host__get_processor_count(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Host *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_processor_count(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Host__get_processor_online_count(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Host *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_processor_online_count(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Host__get_processor_core_count(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Host *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_processor_core_count(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Host__get_memory_size(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Host *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_memory_size(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Host__get_memory_available(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Host *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_memory_available(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Host__get_operating_system(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Host *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_operating_system(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Host__get_os_version(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Host *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_os_version(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Host__get_utc_time(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Host *vtbl = obj->vtbl;
  int64_t v1;
  NS_CHECK(vtbl->get_utc_time(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int64(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Host__get_acceleration3d_available(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Host *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_acceleration3d_available(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SystemProperties__get_max_network_adapters(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SystemProperties *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  i0 = prepare_enum(i0, cChipsetType);
  extract_enum(i0, &v1, cChipsetType);
  NS_CHECK(vtbl->get_max_network_adapters(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v2));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SystemProperties__get_max_network_adapters_of_type(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SystemProperties *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  uint32_t v3;
  i0 = prepare_enum(i0, cChipsetType);
  i1 = prepare_enum(i1, cNetworkAttachmentType);
  extract_enum(i0, &v1, cChipsetType);
  extract_enum(i1, &v2, cNetworkAttachmentType);
  NS_CHECK(vtbl->get_max_network_adapters_of_type(obj, v1, v2, &v3));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v3));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SystemProperties__get_max_devices_per_port_for_storage_bus(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SystemProperties *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  i0 = prepare_enum(i0, cStorageBus);
  extract_enum(i0, &v1, cStorageBus);
  NS_CHECK(vtbl->get_max_devices_per_port_for_storage_bus(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v2));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SystemProperties__get_min_port_count_for_storage_bus(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SystemProperties *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  i0 = prepare_enum(i0, cStorageBus);
  extract_enum(i0, &v1, cStorageBus);
  NS_CHECK(vtbl->get_min_port_count_for_storage_bus(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v2));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SystemProperties__get_max_port_count_for_storage_bus(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SystemProperties *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  i0 = prepare_enum(i0, cStorageBus);
  extract_enum(i0, &v1, cStorageBus);
  NS_CHECK(vtbl->get_max_port_count_for_storage_bus(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v2));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SystemProperties__get_max_instances_of_storage_bus(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SystemProperties *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  uint32_t v3;
  i0 = prepare_enum(i0, cChipsetType);
  i1 = prepare_enum(i1, cStorageBus);
  extract_enum(i0, &v1, cChipsetType);
  extract_enum(i1, &v2, cStorageBus);
  NS_CHECK(vtbl->get_max_instances_of_storage_bus(obj, v1, v2, &v3));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v3));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SystemProperties__get_device_types_for_storage_bus(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SystemProperties *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2_size;
  void * v2;
  i0 = prepare_enum(i0, cStorageBus);
  extract_enum(i0, &v1, cStorageBus);
  NS_CHECK(vtbl->get_device_types_for_storage_bus(obj, v1, &v2_size, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_enum(v2_size, v2, cDeviceType));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SystemProperties__get_default_io_cache_setting_for_storage_controller(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SystemProperties *vtbl = obj->vtbl;
  uint32_t v1;
  bool_t v2;
  i0 = prepare_enum(i0, cStorageControllerType);
  extract_enum(i0, &v1, cStorageControllerType);
  NS_CHECK(vtbl->get_default_io_cache_setting_for_storage_controller(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v2));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SystemProperties__get_min_guest_ram(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SystemProperties *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_min_guest_ram(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SystemProperties__get_max_guest_ram(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SystemProperties *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_max_guest_ram(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SystemProperties__get_min_guest_vram(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SystemProperties *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_min_guest_vram(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SystemProperties__get_max_guest_vram(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SystemProperties *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_max_guest_vram(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SystemProperties__get_min_guest_cpu_count(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SystemProperties *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_min_guest_cpu_count(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SystemProperties__get_max_guest_cpu_count(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SystemProperties *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_max_guest_cpu_count(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SystemProperties__get_max_guest_monitors(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SystemProperties *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_max_guest_monitors(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SystemProperties__get_info_vd_size(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SystemProperties *vtbl = obj->vtbl;
  int64_t v1;
  NS_CHECK(vtbl->get_info_vd_size(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int64(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SystemProperties__get_serial_port_count(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SystemProperties *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_serial_port_count(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SystemProperties__get_parallel_port_count(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SystemProperties *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_parallel_port_count(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SystemProperties__get_max_boot_position(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SystemProperties *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_max_boot_position(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SystemProperties__get_default_machine_folder(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SystemProperties *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_default_machine_folder(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SystemProperties__get_medium_formats(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SystemProperties *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_medium_formats(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v1_size, v1, cMediumFormat));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SystemProperties__get_default_hard_disk_format(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SystemProperties *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_default_hard_disk_format(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SystemProperties__get_free_disk_space_warning(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SystemProperties *vtbl = obj->vtbl;
  int64_t v1;
  NS_CHECK(vtbl->get_free_disk_space_warning(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int64(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SystemProperties__get_free_disk_space_percent_warning(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SystemProperties *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_free_disk_space_percent_warning(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SystemProperties__get_free_disk_space_error(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SystemProperties *vtbl = obj->vtbl;
  int64_t v1;
  NS_CHECK(vtbl->get_free_disk_space_error(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int64(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SystemProperties__get_free_disk_space_percent_error(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SystemProperties *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_free_disk_space_percent_error(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SystemProperties__get_vrde_auth_library(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SystemProperties *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_vrde_auth_library(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SystemProperties__get_web_service_auth_library(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SystemProperties *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_web_service_auth_library(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SystemProperties__get_default_vrde_ext_pack(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SystemProperties *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_default_vrde_ext_pack(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SystemProperties__get_log_history_count(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SystemProperties *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_log_history_count(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SystemProperties__get_default_audio_driver(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SystemProperties *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_default_audio_driver(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cAudioDriverType));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SystemProperties__get_autostart_database_path(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SystemProperties *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_autostart_database_path(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SystemProperties__get_default_additions_iso(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SystemProperties *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_default_additions_iso(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestOSType__get_family_id(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestOSType *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_family_id(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestOSType__get_family_description(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestOSType *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_family_description(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestOSType__get_id(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestOSType *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_id(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestOSType__get_description(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestOSType *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_description(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestOSType__get_is64_bit(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestOSType *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_is64_bit(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestOSType__get_recommended_io_apic(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestOSType *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_recommended_io_apic(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestOSType__get_recommended_virt_ex(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestOSType *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_recommended_virt_ex(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestOSType__get_recommended_ram(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestOSType *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_recommended_ram(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestOSType__get_recommended_vram(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestOSType *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_recommended_vram(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestOSType__get_recommended2d_video_acceleration(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestOSType *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_recommended2d_video_acceleration(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestOSType__get_recommended3d_acceleration(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestOSType *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_recommended3d_acceleration(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestOSType__get_recommended_hdd(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestOSType *vtbl = obj->vtbl;
  int64_t v1;
  NS_CHECK(vtbl->get_recommended_hdd(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int64(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestOSType__get_adapter_type(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestOSType *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_adapter_type(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cNetworkAdapterType));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestOSType__get_recommended_pae(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestOSType *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_recommended_pae(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestOSType__get_recommended_dvd_storage_controller(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestOSType *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_recommended_dvd_storage_controller(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cStorageControllerType));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestOSType__get_recommended_dvd_storage_bus(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestOSType *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_recommended_dvd_storage_bus(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cStorageBus));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestOSType__get_recommended_hd_storage_controller(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestOSType *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_recommended_hd_storage_controller(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cStorageControllerType));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestOSType__get_recommended_hd_storage_bus(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestOSType *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_recommended_hd_storage_bus(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cStorageBus));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestOSType__get_recommended_firmware(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestOSType *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_recommended_firmware(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cFirmwareType));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestOSType__get_recommended_usb_hid(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestOSType *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_recommended_usb_hid(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestOSType__get_recommended_hpet(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestOSType *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_recommended_hpet(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestOSType__get_recommended_usb_tablet(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestOSType *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_recommended_usb_tablet(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestOSType__get_recommended_rtc_use_utc(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestOSType *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_recommended_rtc_use_utc(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestOSType__get_recommended_chipset(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestOSType *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_recommended_chipset(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cChipsetType));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestOSType__get_recommended_audio_controller(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestOSType *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_recommended_audio_controller(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cAudioControllerType));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestOSType__get_recommended_floppy(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestOSType *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_recommended_floppy(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestOSType__get_recommended_usb(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestOSType *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_recommended_usb(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE AdditionsFacility__get_class_type(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct AdditionsFacility *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_class_type(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cAdditionsFacilityClass));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE AdditionsFacility__get_last_updated(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct AdditionsFacility *vtbl = obj->vtbl;
  int64_t v1;
  NS_CHECK(vtbl->get_last_updated(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int64(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE AdditionsFacility__get_name(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct AdditionsFacility *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_name(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE AdditionsFacility__get_status(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct AdditionsFacility *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_status(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cAdditionsFacilityStatus));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE AdditionsFacility__get_type(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct AdditionsFacility *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_type(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cAdditionsFacilityType));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestSession__close(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  NS_CHECK(vtbl->close(obj));
  res = rb_ary_new();
  return res;
}
static VALUE GuestSession__copy_from(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  uint32_t v3_size;
  void * v3;
  void * v4;
  i0 = prepare_wstring(i0);
  i1 = prepare_wstring(i1);
  i2 = prepare_array_enum(i2, cCopyFileFlag);
  extract_wstring(i0, &v1);
  extract_wstring(i1, &v2);
  extract_carray(i2, &v3_size, &v3);
  NS_CHECK(vtbl->copy_from(obj, v1, v2, v3_size, v3, &v4));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v4, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestSession__copy_to(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  uint32_t v3_size;
  void * v3;
  void * v4;
  i0 = prepare_wstring(i0);
  i1 = prepare_wstring(i1);
  i2 = prepare_array_enum(i2, cCopyFileFlag);
  extract_wstring(i0, &v1);
  extract_wstring(i1, &v2);
  extract_carray(i2, &v3_size, &v3);
  NS_CHECK(vtbl->copy_to(obj, v1, v2, v3_size, v3, &v4));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v4, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestSession__directory_create(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  wstring_t v1;
  uint32_t v2;
  uint32_t v3_size;
  void * v3;
  i0 = prepare_wstring(i0);
  i1 = prepare_uint32(i1);
  i2 = prepare_array_enum(i2, cDirectoryCreateFlag);
  extract_wstring(i0, &v1);
  extract_uint32(i1, &v2);
  extract_carray(i2, &v3_size, &v3);
  NS_CHECK(vtbl->directory_create(obj, v1, v2, v3_size, v3));
  res = rb_ary_new();
  return res;
}
static VALUE GuestSession__directory_create_temp(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  wstring_t v1;
  uint32_t v2;
  wstring_t v3;
  bool_t v4;
  wstring_t v5;
  i0 = prepare_wstring(i0);
  i1 = prepare_uint32(i1);
  i2 = prepare_wstring(i2);
  i3 = prepare_bool(i3);
  extract_wstring(i0, &v1);
  extract_uint32(i1, &v2);
  extract_wstring(i2, &v3);
  extract_bool(i3, &v4);
  NS_CHECK(vtbl->directory_create_temp(obj, v1, v2, v3, v4, &v5));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v5));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestSession__directory_exists(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  wstring_t v1;
  bool_t v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->directory_exists(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v2));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestSession__directory_open(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  uint32_t v3_size;
  void * v3;
  void * v4;
  i0 = prepare_wstring(i0);
  i1 = prepare_wstring(i1);
  i2 = prepare_array_enum(i2, cDirectoryOpenFlag);
  extract_wstring(i0, &v1);
  extract_wstring(i1, &v2);
  extract_carray(i2, &v3_size, &v3);
  NS_CHECK(vtbl->directory_open(obj, v1, v2, v3_size, v3, &v4));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v4, cGuestDirectory));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestSession__directory_query_info(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  wstring_t v1;
  void * v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->directory_query_info(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cGuestFsObjInfo));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestSession__directory_remove(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  wstring_t v1;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->directory_remove(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE GuestSession__directory_remove_recursive(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  wstring_t v1;
  uint32_t v2_size;
  void * v2;
  void * v3;
  i0 = prepare_wstring(i0);
  i1 = prepare_array_enum(i1, cDirectoryRemoveRecFlag);
  extract_wstring(i0, &v1);
  extract_carray(i1, &v2_size, &v2);
  NS_CHECK(vtbl->directory_remove_recursive(obj, v1, v2_size, v2, &v3));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v3, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestSession__directory_rename(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  uint32_t v3_size;
  void * v3;
  i0 = prepare_wstring(i0);
  i1 = prepare_wstring(i1);
  i2 = prepare_array_enum(i2, cPathRenameFlag);
  extract_wstring(i0, &v1);
  extract_wstring(i1, &v2);
  extract_carray(i2, &v3_size, &v3);
  NS_CHECK(vtbl->directory_rename(obj, v1, v2, v3_size, v3));
  res = rb_ary_new();
  return res;
}
static VALUE GuestSession__directory_set_acl(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  i0 = prepare_wstring(i0);
  i1 = prepare_wstring(i1);
  extract_wstring(i0, &v1);
  extract_wstring(i1, &v2);
  NS_CHECK(vtbl->directory_set_acl(obj, v1, v2));
  res = rb_ary_new();
  return res;
}
static VALUE GuestSession__environment_clear(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  NS_CHECK(vtbl->environment_clear(obj));
  res = rb_ary_new();
  return res;
}
static VALUE GuestSession__environment_get(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->environment_get(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v2));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestSession__environment_set(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  i0 = prepare_wstring(i0);
  i1 = prepare_wstring(i1);
  extract_wstring(i0, &v1);
  extract_wstring(i1, &v2);
  NS_CHECK(vtbl->environment_set(obj, v1, v2));
  res = rb_ary_new();
  return res;
}
static VALUE GuestSession__environment_unset(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  wstring_t v1;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->environment_unset(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE GuestSession__file_create_temp(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  wstring_t v1;
  uint32_t v2;
  wstring_t v3;
  bool_t v4;
  void * v5;
  i0 = prepare_wstring(i0);
  i1 = prepare_uint32(i1);
  i2 = prepare_wstring(i2);
  i3 = prepare_bool(i3);
  extract_wstring(i0, &v1);
  extract_uint32(i1, &v2);
  extract_wstring(i2, &v3);
  extract_bool(i3, &v4);
  NS_CHECK(vtbl->file_create_temp(obj, v1, v2, v3, v4, &v5));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v5, cGuestFile));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestSession__file_exists(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  wstring_t v1;
  bool_t v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->file_exists(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v2));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestSession__file_remove(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  wstring_t v1;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->file_remove(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE GuestSession__file_open(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3, VALUE i4) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  wstring_t v3;
  uint32_t v4;
  int64_t v5;
  void * v6;
  i0 = prepare_wstring(i0);
  i1 = prepare_wstring(i1);
  i2 = prepare_wstring(i2);
  i3 = prepare_uint32(i3);
  i4 = prepare_int64(i4);
  extract_wstring(i0, &v1);
  extract_wstring(i1, &v2);
  extract_wstring(i2, &v3);
  extract_uint32(i3, &v4);
  extract_int64(i4, &v5);
  NS_CHECK(vtbl->file_open(obj, v1, v2, v3, v4, v5, &v6));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v6, cGuestFile));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestSession__file_query_info(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  wstring_t v1;
  void * v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->file_query_info(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cGuestFsObjInfo));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestSession__file_query_size(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  wstring_t v1;
  int64_t v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->file_query_size(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_int64(v2));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestSession__file_rename(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  uint32_t v3_size;
  void * v3;
  i0 = prepare_wstring(i0);
  i1 = prepare_wstring(i1);
  i2 = prepare_array_enum(i2, cPathRenameFlag);
  extract_wstring(i0, &v1);
  extract_wstring(i1, &v2);
  extract_carray(i2, &v3_size, &v3);
  NS_CHECK(vtbl->file_rename(obj, v1, v2, v3_size, v3));
  res = rb_ary_new();
  return res;
}
static VALUE GuestSession__file_set_acl(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  i0 = prepare_wstring(i0);
  i1 = prepare_wstring(i1);
  extract_wstring(i0, &v1);
  extract_wstring(i1, &v2);
  NS_CHECK(vtbl->file_set_acl(obj, v1, v2));
  res = rb_ary_new();
  return res;
}
static VALUE GuestSession__process_create(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3, VALUE i4) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  wstring_t v1;
  uint32_t v2_size;
  void * v2;
  uint32_t v3_size;
  void * v3;
  uint32_t v4_size;
  void * v4;
  uint32_t v5;
  void * v6;
  i0 = prepare_wstring(i0);
  i1 = prepare_array_wstring(i1);
  i2 = prepare_array_wstring(i2);
  i3 = prepare_array_enum(i3, cProcessCreateFlag);
  i4 = prepare_uint32(i4);
  extract_wstring(i0, &v1);
  extract_carray(i1, &v2_size, &v2);
  extract_carray(i2, &v3_size, &v3);
  extract_carray(i3, &v4_size, &v4);
  extract_uint32(i4, &v5);
  NS_CHECK(vtbl->process_create(obj, v1, v2_size, v2, v3_size, v3, v4_size, v4, v5, &v6));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v6, cGuestProcess));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestSession__process_create_ex(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3, VALUE i4, VALUE i5, VALUE i6) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  wstring_t v1;
  uint32_t v2_size;
  void * v2;
  uint32_t v3_size;
  void * v3;
  uint32_t v4_size;
  void * v4;
  uint32_t v5;
  uint32_t v6;
  uint32_t v7_size;
  void * v7;
  void * v8;
  i0 = prepare_wstring(i0);
  i1 = prepare_array_wstring(i1);
  i2 = prepare_array_wstring(i2);
  i3 = prepare_array_enum(i3, cProcessCreateFlag);
  i4 = prepare_uint32(i4);
  i5 = prepare_enum(i5, cProcessPriority);
  i6 = prepare_array_int32(i6);
  extract_wstring(i0, &v1);
  extract_carray(i1, &v2_size, &v2);
  extract_carray(i2, &v3_size, &v3);
  extract_carray(i3, &v4_size, &v4);
  extract_uint32(i4, &v5);
  extract_enum(i5, &v6, cProcessPriority);
  extract_carray(i6, &v7_size, &v7);
  NS_CHECK(vtbl->process_create_ex(obj, v1, v2_size, v2, v3_size, v3, v4_size, v4, v5, v6, v7_size, v7, &v8));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v8, cGuestProcess));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestSession__process_get(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  uint32_t v1;
  void * v2;
  i0 = prepare_uint32(i0);
  extract_uint32(i0, &v1);
  NS_CHECK(vtbl->process_get(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cGuestProcess));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestSession__symlink_create(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  uint32_t v3;
  i0 = prepare_wstring(i0);
  i1 = prepare_wstring(i1);
  i2 = prepare_enum(i2, cSymlinkType);
  extract_wstring(i0, &v1);
  extract_wstring(i1, &v2);
  extract_enum(i2, &v3, cSymlinkType);
  NS_CHECK(vtbl->symlink_create(obj, v1, v2, v3));
  res = rb_ary_new();
  return res;
}
static VALUE GuestSession__symlink_exists(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  wstring_t v1;
  bool_t v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->symlink_exists(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v2));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestSession__symlink_read(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  wstring_t v1;
  uint32_t v2_size;
  void * v2;
  wstring_t v3;
  i0 = prepare_wstring(i0);
  i1 = prepare_array_enum(i1, cSymlinkReadFlag);
  extract_wstring(i0, &v1);
  extract_carray(i1, &v2_size, &v2);
  NS_CHECK(vtbl->symlink_read(obj, v1, v2_size, v2, &v3));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v3));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestSession__symlink_remove_directory(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  wstring_t v1;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->symlink_remove_directory(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE GuestSession__symlink_remove_file(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  wstring_t v1;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->symlink_remove_file(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE GuestSession__get_user(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_user(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestSession__get_domain(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_domain(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestSession__get_name(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_name(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestSession__get_id(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_id(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestSession__get_timeout(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_timeout(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestSession__get_environment(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_environment(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_wstring(v1_size, v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestSession__get_processes(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_processes(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v1_size, v1, cGuestProcess));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestSession__get_directories(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_directories(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v1_size, v1, cGuestDirectory));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestSession__get_files(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestSession *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_files(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v1_size, v1, cGuestFile));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Process__wait_for(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Process *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  uint32_t v3;
  i0 = prepare_uint32(i0);
  i1 = prepare_uint32(i1);
  extract_uint32(i0, &v1);
  extract_uint32(i1, &v2);
  NS_CHECK(vtbl->wait_for(obj, v1, v2, &v3));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v3, cProcessWaitResult));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Process__wait_for_array(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Process *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  uint32_t v2;
  uint32_t v3;
  i0 = prepare_array_enum(i0, cProcessWaitForFlag);
  i1 = prepare_uint32(i1);
  extract_carray(i0, &v1_size, &v1);
  extract_uint32(i1, &v2);
  NS_CHECK(vtbl->wait_for_array(obj, v1_size, v1, v2, &v3));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v3, cProcessWaitResult));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Process__read(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Process *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  uint32_t v3;
  uint32_t v4_size;
  void * v4;
  i0 = prepare_uint32(i0);
  i1 = prepare_uint32(i1);
  i2 = prepare_uint32(i2);
  extract_uint32(i0, &v1);
  extract_uint32(i1, &v2);
  extract_uint32(i2, &v3);
  NS_CHECK(vtbl->read(obj, v1, v2, v3, &v4_size, &v4));
  res = rb_ary_new();
  rb_ary_push(res, convert_blob(v4_size, v4));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Process__write(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Process *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  uint32_t v3_size;
  void * v3;
  uint32_t v4;
  uint32_t v5;
  i0 = prepare_uint32(i0);
  i1 = prepare_uint32(i1);
  i2 = prepare_blob(i2);
  i3 = prepare_uint32(i3);
  extract_uint32(i0, &v1);
  extract_uint32(i1, &v2);
  extract_blob(i2, &v3_size, &v3);
  extract_uint32(i3, &v4);
  NS_CHECK(vtbl->write(obj, v1, v2, v3_size, v3, v4, &v5));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v5));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Process__write_array(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Process *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2_size;
  void * v2;
  uint32_t v3_size;
  void * v3;
  uint32_t v4;
  uint32_t v5;
  i0 = prepare_uint32(i0);
  i1 = prepare_array_enum(i1, cProcessInputFlag);
  i2 = prepare_blob(i2);
  i3 = prepare_uint32(i3);
  extract_uint32(i0, &v1);
  extract_carray(i1, &v2_size, &v2);
  extract_blob(i2, &v3_size, &v3);
  extract_uint32(i3, &v4);
  NS_CHECK(vtbl->write_array(obj, v1, v2_size, v2, v3_size, v3, v4, &v5));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v5));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Process__terminate(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Process *vtbl = obj->vtbl;
  NS_CHECK(vtbl->terminate(obj));
  res = rb_ary_new();
  return res;
}
static VALUE Process__get_pid(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Process *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_pid(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Process__get_status(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Process *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_status(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cProcessStatus));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Process__get_exit_code(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Process *vtbl = obj->vtbl;
  int32_t v1;
  NS_CHECK(vtbl->get_exit_code(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Process__get_environment(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Process *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_environment(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_wstring(v1_size, v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Process__get_arguments(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Process *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_arguments(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_wstring(v1_size, v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Process__get_executable_path(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Process *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_executable_path(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Process__get_name(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Process *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_name(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Directory__close(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Directory *vtbl = obj->vtbl;
  NS_CHECK(vtbl->close(obj));
  res = rb_ary_new();
  return res;
}
static VALUE Directory__read(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Directory *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->read(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cFsObjInfo));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Directory__get_directory_name(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Directory *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_directory_name(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Directory__get_filter(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Directory *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_filter(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE File__close(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct File *vtbl = obj->vtbl;
  NS_CHECK(vtbl->close(obj));
  res = rb_ary_new();
  return res;
}
static VALUE File__query_info(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct File *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->query_info(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cFsObjInfo));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE File__read(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct File *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  uint32_t v3_size;
  void * v3;
  i0 = prepare_uint32(i0);
  i1 = prepare_uint32(i1);
  extract_uint32(i0, &v1);
  extract_uint32(i1, &v2);
  NS_CHECK(vtbl->read(obj, v1, v2, &v3_size, &v3));
  res = rb_ary_new();
  rb_ary_push(res, convert_blob(v3_size, v3));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE File__read_at(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct File *vtbl = obj->vtbl;
  int64_t v1;
  uint32_t v2;
  uint32_t v3;
  uint32_t v4_size;
  void * v4;
  i0 = prepare_int64(i0);
  i1 = prepare_uint32(i1);
  i2 = prepare_uint32(i2);
  extract_int64(i0, &v1);
  extract_uint32(i1, &v2);
  extract_uint32(i2, &v3);
  NS_CHECK(vtbl->read_at(obj, v1, v2, v3, &v4_size, &v4));
  res = rb_ary_new();
  rb_ary_push(res, convert_blob(v4_size, v4));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE File__seek(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct File *vtbl = obj->vtbl;
  int64_t v1;
  uint32_t v2;
  i0 = prepare_int64(i0);
  i1 = prepare_enum(i1, cFileSeekType);
  extract_int64(i0, &v1);
  extract_enum(i1, &v2, cFileSeekType);
  NS_CHECK(vtbl->seek(obj, v1, v2));
  res = rb_ary_new();
  return res;
}
static VALUE File__set_acl(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct File *vtbl = obj->vtbl;
  wstring_t v1;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->set_acl(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE File__write(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct File *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  uint32_t v2;
  uint32_t v3;
  i0 = prepare_blob(i0);
  i1 = prepare_uint32(i1);
  extract_blob(i0, &v1_size, &v1);
  extract_uint32(i1, &v2);
  NS_CHECK(vtbl->write(obj, v1_size, v1, v2, &v3));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v3));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE File__write_at(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct File *vtbl = obj->vtbl;
  int64_t v1;
  uint32_t v2_size;
  void * v2;
  uint32_t v3;
  uint32_t v4;
  i0 = prepare_int64(i0);
  i1 = prepare_blob(i1);
  i2 = prepare_uint32(i2);
  extract_int64(i0, &v1);
  extract_blob(i1, &v2_size, &v2);
  extract_uint32(i2, &v3);
  NS_CHECK(vtbl->write_at(obj, v1, v2_size, v2, v3, &v4));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v4));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE File__get_creation_mode(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct File *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_creation_mode(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE File__get_disposition(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct File *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_disposition(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE File__get_file_name(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct File *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_file_name(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE File__get_initial_size(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct File *vtbl = obj->vtbl;
  int64_t v1;
  NS_CHECK(vtbl->get_initial_size(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int64(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE File__get_open_mode(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct File *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_open_mode(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE File__get_offset(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct File *vtbl = obj->vtbl;
  int64_t v1;
  NS_CHECK(vtbl->get_offset(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int64(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE FsObjInfo__get_access_time(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct FsObjInfo *vtbl = obj->vtbl;
  int64_t v1;
  NS_CHECK(vtbl->get_access_time(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int64(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE FsObjInfo__get_allocated_size(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct FsObjInfo *vtbl = obj->vtbl;
  int64_t v1;
  NS_CHECK(vtbl->get_allocated_size(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int64(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE FsObjInfo__get_birth_time(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct FsObjInfo *vtbl = obj->vtbl;
  int64_t v1;
  NS_CHECK(vtbl->get_birth_time(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int64(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE FsObjInfo__get_change_time(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct FsObjInfo *vtbl = obj->vtbl;
  int64_t v1;
  NS_CHECK(vtbl->get_change_time(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int64(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE FsObjInfo__get_device_number(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct FsObjInfo *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_device_number(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE FsObjInfo__get_file_attributes(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct FsObjInfo *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_file_attributes(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE FsObjInfo__get_generation_id(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct FsObjInfo *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_generation_id(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE FsObjInfo__get_gid(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct FsObjInfo *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_gid(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE FsObjInfo__get_group_name(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct FsObjInfo *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_group_name(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE FsObjInfo__get_hard_links(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct FsObjInfo *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_hard_links(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE FsObjInfo__get_modification_time(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct FsObjInfo *vtbl = obj->vtbl;
  int64_t v1;
  NS_CHECK(vtbl->get_modification_time(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int64(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE FsObjInfo__get_name(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct FsObjInfo *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_name(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE FsObjInfo__get_node_id(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct FsObjInfo *vtbl = obj->vtbl;
  int64_t v1;
  NS_CHECK(vtbl->get_node_id(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int64(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE FsObjInfo__get_node_id_device(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct FsObjInfo *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_node_id_device(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE FsObjInfo__get_object_size(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct FsObjInfo *vtbl = obj->vtbl;
  int64_t v1;
  NS_CHECK(vtbl->get_object_size(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int64(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE FsObjInfo__get_type(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct FsObjInfo *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_type(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cFsObjType));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE FsObjInfo__get_uid(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct FsObjInfo *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_uid(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE FsObjInfo__get_user_flags(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct FsObjInfo *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_user_flags(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE FsObjInfo__get_user_name(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct FsObjInfo *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_user_name(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Guest__internal_get_statistics(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Guest *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  uint32_t v3;
  uint32_t v4;
  uint32_t v5;
  uint32_t v6;
  uint32_t v7;
  uint32_t v8;
  uint32_t v9;
  uint32_t v10;
  uint32_t v11;
  uint32_t v12;
  uint32_t v13;
  NS_CHECK(vtbl->internal_get_statistics(obj, &v1, &v2, &v3, &v4, &v5, &v6, &v7, &v8, &v9, &v10, &v11, &v12, &v13));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  rb_ary_push(res, convert_uint32(v2));
  rb_ary_push(res, convert_uint32(v3));
  rb_ary_push(res, convert_uint32(v4));
  rb_ary_push(res, convert_uint32(v5));
  rb_ary_push(res, convert_uint32(v6));
  rb_ary_push(res, convert_uint32(v7));
  rb_ary_push(res, convert_uint32(v8));
  rb_ary_push(res, convert_uint32(v9));
  rb_ary_push(res, convert_uint32(v10));
  rb_ary_push(res, convert_uint32(v11));
  rb_ary_push(res, convert_uint32(v12));
  rb_ary_push(res, convert_uint32(v13));
  return res;
}
static VALUE Guest__get_facility_status(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Guest *vtbl = obj->vtbl;
  uint32_t v1;
  int64_t v2;
  uint32_t v3;
  i0 = prepare_enum(i0, cAdditionsFacilityType);
  extract_enum(i0, &v1, cAdditionsFacilityType);
  NS_CHECK(vtbl->get_facility_status(obj, v1, &v2, &v3));
  res = rb_ary_new();
  rb_ary_push(res, convert_int64(v2));
  rb_ary_push(res, convert_enum(v3, cAdditionsFacilityStatus));
  return res;
}
static VALUE Guest__get_additions_status(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Guest *vtbl = obj->vtbl;
  uint32_t v1;
  bool_t v2;
  i0 = prepare_enum(i0, cAdditionsRunLevelType);
  extract_enum(i0, &v1, cAdditionsRunLevelType);
  NS_CHECK(vtbl->get_additions_status(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v2));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Guest__set_credentials(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Guest *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  wstring_t v3;
  bool_t v4;
  i0 = prepare_wstring(i0);
  i1 = prepare_wstring(i1);
  i2 = prepare_wstring(i2);
  i3 = prepare_bool(i3);
  extract_wstring(i0, &v1);
  extract_wstring(i1, &v2);
  extract_wstring(i2, &v3);
  extract_bool(i3, &v4);
  NS_CHECK(vtbl->set_credentials(obj, v1, v2, v3, v4));
  res = rb_ary_new();
  return res;
}
static VALUE Guest__drag_hg_enter(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3, VALUE i4, VALUE i5) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Guest *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  uint32_t v3;
  uint32_t v4;
  uint32_t v5_size;
  void * v5;
  uint32_t v6_size;
  void * v6;
  uint32_t v7;
  i0 = prepare_uint32(i0);
  i1 = prepare_uint32(i1);
  i2 = prepare_uint32(i2);
  i3 = prepare_enum(i3, cDragAndDropAction);
  i4 = prepare_array_enum(i4, cDragAndDropAction);
  i5 = prepare_array_wstring(i5);
  extract_uint32(i0, &v1);
  extract_uint32(i1, &v2);
  extract_uint32(i2, &v3);
  extract_enum(i3, &v4, cDragAndDropAction);
  extract_carray(i4, &v5_size, &v5);
  extract_carray(i5, &v6_size, &v6);
  NS_CHECK(vtbl->drag_hg_enter(obj, v1, v2, v3, v4, v5_size, v5, v6_size, v6, &v7));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v7, cDragAndDropAction));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Guest__drag_hg_move(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3, VALUE i4, VALUE i5) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Guest *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  uint32_t v3;
  uint32_t v4;
  uint32_t v5_size;
  void * v5;
  uint32_t v6_size;
  void * v6;
  uint32_t v7;
  i0 = prepare_uint32(i0);
  i1 = prepare_uint32(i1);
  i2 = prepare_uint32(i2);
  i3 = prepare_enum(i3, cDragAndDropAction);
  i4 = prepare_array_enum(i4, cDragAndDropAction);
  i5 = prepare_array_wstring(i5);
  extract_uint32(i0, &v1);
  extract_uint32(i1, &v2);
  extract_uint32(i2, &v3);
  extract_enum(i3, &v4, cDragAndDropAction);
  extract_carray(i4, &v5_size, &v5);
  extract_carray(i5, &v6_size, &v6);
  NS_CHECK(vtbl->drag_hg_move(obj, v1, v2, v3, v4, v5_size, v5, v6_size, v6, &v7));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v7, cDragAndDropAction));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Guest__drag_hg_leave(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Guest *vtbl = obj->vtbl;
  uint32_t v1;
  i0 = prepare_uint32(i0);
  extract_uint32(i0, &v1);
  NS_CHECK(vtbl->drag_hg_leave(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE Guest__drag_hg_drop(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3, VALUE i4, VALUE i5) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Guest *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  uint32_t v3;
  uint32_t v4;
  uint32_t v5_size;
  void * v5;
  uint32_t v6_size;
  void * v6;
  wstring_t v7;
  uint32_t v8;
  i0 = prepare_uint32(i0);
  i1 = prepare_uint32(i1);
  i2 = prepare_uint32(i2);
  i3 = prepare_enum(i3, cDragAndDropAction);
  i4 = prepare_array_enum(i4, cDragAndDropAction);
  i5 = prepare_array_wstring(i5);
  extract_uint32(i0, &v1);
  extract_uint32(i1, &v2);
  extract_uint32(i2, &v3);
  extract_enum(i3, &v4, cDragAndDropAction);
  extract_carray(i4, &v5_size, &v5);
  extract_carray(i5, &v6_size, &v6);
  NS_CHECK(vtbl->drag_hg_drop(obj, v1, v2, v3, v4, v5_size, v5, v6_size, v6, &v7, &v8));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v7));
  rb_ary_push(res, convert_enum(v8, cDragAndDropAction));
  return res;
}
static VALUE Guest__drag_hg_put_data(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Guest *vtbl = obj->vtbl;
  uint32_t v1;
  wstring_t v2;
  uint32_t v3_size;
  void * v3;
  void * v4;
  i0 = prepare_uint32(i0);
  i1 = prepare_wstring(i1);
  i2 = prepare_blob(i2);
  extract_uint32(i0, &v1);
  extract_wstring(i1, &v2);
  extract_blob(i2, &v3_size, &v3);
  NS_CHECK(vtbl->drag_hg_put_data(obj, v1, v2, v3_size, v3, &v4));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v4, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Guest__drag_gh_pending(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Guest *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2_size;
  void * v2;
  uint32_t v3_size;
  void * v3;
  uint32_t v4;
  i0 = prepare_uint32(i0);
  extract_uint32(i0, &v1);
  NS_CHECK(vtbl->drag_gh_pending(obj, v1, &v2_size, &v2, &v3_size, &v3, &v4));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_wstring(v2_size, v2));
  rb_ary_push(res, convert_array_enum(v3_size, v3, cDragAndDropAction));
  rb_ary_push(res, convert_enum(v4, cDragAndDropAction));
  return res;
}
static VALUE Guest__drag_gh_dropped(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Guest *vtbl = obj->vtbl;
  wstring_t v1;
  uint32_t v2;
  void * v3;
  i0 = prepare_wstring(i0);
  i1 = prepare_enum(i1, cDragAndDropAction);
  extract_wstring(i0, &v1);
  extract_enum(i1, &v2, cDragAndDropAction);
  NS_CHECK(vtbl->drag_gh_dropped(obj, v1, v2, &v3));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v3, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Guest__drag_gh_get_data(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Guest *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->drag_gh_get_data(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_blob(v1_size, v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Guest__create_session(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Guest *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  wstring_t v3;
  wstring_t v4;
  void * v5;
  i0 = prepare_wstring(i0);
  i1 = prepare_wstring(i1);
  i2 = prepare_wstring(i2);
  i3 = prepare_wstring(i3);
  extract_wstring(i0, &v1);
  extract_wstring(i1, &v2);
  extract_wstring(i2, &v3);
  extract_wstring(i3, &v4);
  NS_CHECK(vtbl->create_session(obj, v1, v2, v3, v4, &v5));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v5, cGuestSession));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Guest__find_session(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Guest *vtbl = obj->vtbl;
  wstring_t v1;
  uint32_t v2_size;
  void * v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->find_session(obj, v1, &v2_size, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v2_size, v2, cGuestSession));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Guest__update_guest_additions(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Guest *vtbl = obj->vtbl;
  wstring_t v1;
  uint32_t v2_size;
  void * v2;
  void * v3;
  i0 = prepare_wstring(i0);
  i1 = prepare_array_enum(i1, cAdditionsUpdateFlag);
  extract_wstring(i0, &v1);
  extract_carray(i1, &v2_size, &v2);
  NS_CHECK(vtbl->update_guest_additions(obj, v1, v2_size, v2, &v3));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v3, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Guest__get_os_type_id(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Guest *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_os_type_id(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Guest__get_additions_run_level(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Guest *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_additions_run_level(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cAdditionsRunLevelType));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Guest__get_additions_version(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Guest *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_additions_version(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Guest__get_additions_revision(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Guest *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_additions_revision(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Guest__get_facilities(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Guest *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_facilities(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v1_size, v1, cAdditionsFacility));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Guest__get_sessions(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Guest *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_sessions(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v1_size, v1, cGuestSession));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Guest__get_memory_balloon_size(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Guest *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_memory_balloon_size(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Guest__get_statistics_update_interval(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Guest *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_statistics_update_interval(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Progress__set_current_operation_progress(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Progress *vtbl = obj->vtbl;
  uint32_t v1;
  i0 = prepare_uint32(i0);
  extract_uint32(i0, &v1);
  NS_CHECK(vtbl->set_current_operation_progress(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE Progress__set_next_operation(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Progress *vtbl = obj->vtbl;
  wstring_t v1;
  uint32_t v2;
  i0 = prepare_wstring(i0);
  i1 = prepare_uint32(i1);
  extract_wstring(i0, &v1);
  extract_uint32(i1, &v2);
  NS_CHECK(vtbl->set_next_operation(obj, v1, v2));
  res = rb_ary_new();
  return res;
}
static VALUE Progress__wait_for_completion(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Progress *vtbl = obj->vtbl;
  int32_t v1;
  i0 = prepare_int32(i0);
  extract_int32(i0, &v1);
  NS_CHECK(vtbl->wait_for_completion(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE Progress__wait_for_operation_completion(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Progress *vtbl = obj->vtbl;
  uint32_t v1;
  int32_t v2;
  i0 = prepare_uint32(i0);
  i1 = prepare_int32(i1);
  extract_uint32(i0, &v1);
  extract_int32(i1, &v2);
  NS_CHECK(vtbl->wait_for_operation_completion(obj, v1, v2));
  res = rb_ary_new();
  return res;
}
static VALUE Progress__wait_for_async_progress_completion(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Progress *vtbl = obj->vtbl;
  void * v1;
  i0 = prepare_interface(i0, cProgress);
  extract_interface(i0, &v1, cProgress);
  NS_CHECK(vtbl->wait_for_async_progress_completion(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE Progress__cancel(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Progress *vtbl = obj->vtbl;
  NS_CHECK(vtbl->cancel(obj));
  res = rb_ary_new();
  return res;
}
static VALUE Progress__get_id(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Progress *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_id(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Progress__get_description(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Progress *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_description(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Progress__get_initiator(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Progress *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_initiator(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cNSISupports));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Progress__get_cancelable(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Progress *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_cancelable(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Progress__get_percent(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Progress *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_percent(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Progress__get_time_remaining(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Progress *vtbl = obj->vtbl;
  int32_t v1;
  NS_CHECK(vtbl->get_time_remaining(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Progress__get_completed(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Progress *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_completed(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Progress__get_canceled(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Progress *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_canceled(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Progress__get_result_code(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Progress *vtbl = obj->vtbl;
  int32_t v1;
  NS_CHECK(vtbl->get_result_code(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Progress__get_error_info(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Progress *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_error_info(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cVirtualBoxErrorInfo));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Progress__get_operation_count(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Progress *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_operation_count(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Progress__get_operation(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Progress *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_operation(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Progress__get_operation_description(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Progress *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_operation_description(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Progress__get_operation_percent(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Progress *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_operation_percent(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Progress__get_operation_weight(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Progress *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_operation_weight(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Progress__get_timeout(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Progress *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_timeout(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Snapshot__get_children_count(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Snapshot *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_children_count(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Snapshot__get_id(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Snapshot *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_id(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Snapshot__get_name(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Snapshot *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_name(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Snapshot__get_description(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Snapshot *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_description(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Snapshot__get_time_stamp(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Snapshot *vtbl = obj->vtbl;
  int64_t v1;
  NS_CHECK(vtbl->get_time_stamp(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int64(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Snapshot__get_online(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Snapshot *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_online(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Snapshot__get_machine(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Snapshot *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_machine(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cMachine));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Snapshot__get_parent(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Snapshot *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_parent(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cSnapshot));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Snapshot__get_children(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Snapshot *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_children(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v1_size, v1, cSnapshot));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MediumAttachment__get_medium(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MediumAttachment *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_medium(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cMedium));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MediumAttachment__get_controller(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MediumAttachment *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_controller(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MediumAttachment__get_port(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MediumAttachment *vtbl = obj->vtbl;
  int32_t v1;
  NS_CHECK(vtbl->get_port(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MediumAttachment__get_device(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MediumAttachment *vtbl = obj->vtbl;
  int32_t v1;
  NS_CHECK(vtbl->get_device(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MediumAttachment__get_type(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MediumAttachment *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_type(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cDeviceType));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MediumAttachment__get_passthrough(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MediumAttachment *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_passthrough(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MediumAttachment__get_temporary_eject(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MediumAttachment *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_temporary_eject(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MediumAttachment__get_is_ejected(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MediumAttachment *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_is_ejected(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MediumAttachment__get_non_rotational(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MediumAttachment *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_non_rotational(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MediumAttachment__get_discard(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MediumAttachment *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_discard(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MediumAttachment__get_bandwidth_group(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MediumAttachment *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_bandwidth_group(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cBandwidthGroup));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Medium__set_ids(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  bool_t v1;
  wstring_t v2;
  bool_t v3;
  wstring_t v4;
  i0 = prepare_bool(i0);
  i1 = prepare_wstring(i1);
  i2 = prepare_bool(i2);
  i3 = prepare_wstring(i3);
  extract_bool(i0, &v1);
  extract_wstring(i1, &v2);
  extract_bool(i2, &v3);
  extract_wstring(i3, &v4);
  NS_CHECK(vtbl->set_ids(obj, v1, v2, v3, v4));
  res = rb_ary_new();
  return res;
}
static VALUE Medium__refresh_state(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->refresh_state(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cMediumState));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Medium__get_snapshot_ids(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  wstring_t v1;
  uint32_t v2_size;
  void * v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->get_snapshot_ids(obj, v1, &v2_size, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_wstring(v2_size, v2));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Medium__lock_read(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->lock_read(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cMediumState));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Medium__unlock_read(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->unlock_read(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cMediumState));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Medium__lock_write(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->lock_write(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cMediumState));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Medium__unlock_write(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->unlock_write(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cMediumState));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Medium__close(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  NS_CHECK(vtbl->close(obj));
  res = rb_ary_new();
  return res;
}
static VALUE Medium__get_property(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->get_property(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v2));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Medium__set_property(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  i0 = prepare_wstring(i0);
  i1 = prepare_wstring(i1);
  extract_wstring(i0, &v1);
  extract_wstring(i1, &v2);
  NS_CHECK(vtbl->set_property(obj, v1, v2));
  res = rb_ary_new();
  return res;
}
static VALUE Medium__get_properties(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  wstring_t v1;
  uint32_t v2_size;
  void * v2;
  uint32_t v3_size;
  void * v3;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->get_properties(obj, v1, &v2_size, &v2, &v3_size, &v3));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_wstring(v2_size, v2));
  rb_ary_push(res, convert_array_wstring(v3_size, v3));
  return res;
}
static VALUE Medium__set_properties(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  uint32_t v2_size;
  void * v2;
  i0 = prepare_array_wstring(i0);
  i1 = prepare_array_wstring(i1);
  extract_carray(i0, &v1_size, &v1);
  extract_carray(i1, &v2_size, &v2);
  NS_CHECK(vtbl->set_properties(obj, v1_size, v1, v2_size, v2));
  res = rb_ary_new();
  return res;
}
static VALUE Medium__create_base_storage(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  int64_t v1;
  uint32_t v2;
  void * v3;
  i0 = prepare_int64(i0);
  i1 = prepare_uint32(i1);
  extract_int64(i0, &v1);
  extract_uint32(i1, &v2);
  NS_CHECK(vtbl->create_base_storage(obj, v1, v2, &v3));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v3, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Medium__delete_storage(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->delete_storage(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Medium__create_diff_storage(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  void * v1;
  uint32_t v2;
  void * v3;
  i0 = prepare_interface(i0, cMedium);
  i1 = prepare_uint32(i1);
  extract_interface(i0, &v1, cMedium);
  extract_uint32(i1, &v2);
  NS_CHECK(vtbl->create_diff_storage(obj, v1, v2, &v3));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v3, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Medium__merge_to(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  void * v1;
  void * v2;
  i0 = prepare_interface(i0, cMedium);
  extract_interface(i0, &v1, cMedium);
  NS_CHECK(vtbl->merge_to(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Medium__clone_to(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  void * v1;
  uint32_t v2;
  void * v3;
  void * v4;
  i0 = prepare_interface(i0, cMedium);
  i1 = prepare_uint32(i1);
  i2 = prepare_interface(i2, cMedium);
  extract_interface(i0, &v1, cMedium);
  extract_uint32(i1, &v2);
  extract_interface(i2, &v3, cMedium);
  NS_CHECK(vtbl->clone_to(obj, v1, v2, v3, &v4));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v4, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Medium__clone_to_base(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  void * v1;
  uint32_t v2;
  void * v3;
  i0 = prepare_interface(i0, cMedium);
  i1 = prepare_uint32(i1);
  extract_interface(i0, &v1, cMedium);
  extract_uint32(i1, &v2);
  NS_CHECK(vtbl->clone_to_base(obj, v1, v2, &v3));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v3, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Medium__compact(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->compact(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Medium__resize(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  int64_t v1;
  void * v2;
  i0 = prepare_int64(i0);
  extract_int64(i0, &v1);
  NS_CHECK(vtbl->resize(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Medium__reset(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->reset(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Medium__get_id(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_id(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Medium__get_description(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_description(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Medium__get_state(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_state(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cMediumState));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Medium__get_variant(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_variant(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Medium__get_location(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_location(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Medium__get_name(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_name(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Medium__get_device_type(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_device_type(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cDeviceType));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Medium__get_host_drive(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_host_drive(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Medium__get_size(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  int64_t v1;
  NS_CHECK(vtbl->get_size(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int64(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Medium__get_format(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_format(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Medium__get_medium_format(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_medium_format(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cMediumFormat));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Medium__get_type(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_type(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cMediumType));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Medium__get_allowed_types(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_allowed_types(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_enum(v1_size, v1, cMediumType));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Medium__get_parent(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_parent(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cMedium));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Medium__get_children(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_children(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v1_size, v1, cMedium));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Medium__get_base(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_base(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cMedium));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Medium__get_read_only(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_read_only(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Medium__get_logical_size(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  int64_t v1;
  NS_CHECK(vtbl->get_logical_size(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int64(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Medium__get_auto_reset(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_auto_reset(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Medium__get_last_access_error(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_last_access_error(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Medium__get_machine_ids(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Medium *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_machine_ids(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_wstring(v1_size, v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MediumFormat__describe_file_extensions(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MediumFormat *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  uint32_t v2_size;
  void * v2;
  NS_CHECK(vtbl->describe_file_extensions(obj, &v1_size, &v1, &v2_size, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_wstring(v1_size, v1));
  rb_ary_push(res, convert_array_enum(v2_size, v2, cDeviceType));
  return res;
}
static VALUE MediumFormat__describe_properties(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MediumFormat *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  uint32_t v2_size;
  void * v2;
  uint32_t v3_size;
  void * v3;
  uint32_t v4_size;
  void * v4;
  uint32_t v5_size;
  void * v5;
  NS_CHECK(vtbl->describe_properties(obj, &v1_size, &v1, &v2_size, &v2, &v3_size, &v3, &v4_size, &v4, &v5_size, &v5));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_wstring(v1_size, v1));
  rb_ary_push(res, convert_array_wstring(v2_size, v2));
  rb_ary_push(res, convert_array_enum(v3_size, v3, cDataType));
  rb_ary_push(res, convert_array_uint32(v4_size, v4));
  rb_ary_push(res, convert_array_wstring(v5_size, v5));
  return res;
}
static VALUE MediumFormat__get_id(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MediumFormat *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_id(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MediumFormat__get_name(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MediumFormat *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_name(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MediumFormat__get_capabilities(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MediumFormat *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_capabilities(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Keyboard__put_scancode(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Keyboard *vtbl = obj->vtbl;
  int32_t v1;
  i0 = prepare_int32(i0);
  extract_int32(i0, &v1);
  NS_CHECK(vtbl->put_scancode(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE Keyboard__put_scancodes(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Keyboard *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  uint32_t v2;
  i0 = prepare_array_int32(i0);
  extract_carray(i0, &v1_size, &v1);
  NS_CHECK(vtbl->put_scancodes(obj, v1_size, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v2));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Keyboard__put_cad(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Keyboard *vtbl = obj->vtbl;
  NS_CHECK(vtbl->put_cad(obj));
  res = rb_ary_new();
  return res;
}
static VALUE Keyboard__get_event_source(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Keyboard *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_event_source(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cEventSource));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Mouse__put_mouse_event(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3, VALUE i4) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Mouse *vtbl = obj->vtbl;
  int32_t v1;
  int32_t v2;
  int32_t v3;
  int32_t v4;
  int32_t v5;
  i0 = prepare_int32(i0);
  i1 = prepare_int32(i1);
  i2 = prepare_int32(i2);
  i3 = prepare_int32(i3);
  i4 = prepare_int32(i4);
  extract_int32(i0, &v1);
  extract_int32(i1, &v2);
  extract_int32(i2, &v3);
  extract_int32(i3, &v4);
  extract_int32(i4, &v5);
  NS_CHECK(vtbl->put_mouse_event(obj, v1, v2, v3, v4, v5));
  res = rb_ary_new();
  return res;
}
static VALUE Mouse__put_mouse_event_absolute(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3, VALUE i4) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Mouse *vtbl = obj->vtbl;
  int32_t v1;
  int32_t v2;
  int32_t v3;
  int32_t v4;
  int32_t v5;
  i0 = prepare_int32(i0);
  i1 = prepare_int32(i1);
  i2 = prepare_int32(i2);
  i3 = prepare_int32(i3);
  i4 = prepare_int32(i4);
  extract_int32(i0, &v1);
  extract_int32(i1, &v2);
  extract_int32(i2, &v3);
  extract_int32(i3, &v4);
  extract_int32(i4, &v5);
  NS_CHECK(vtbl->put_mouse_event_absolute(obj, v1, v2, v3, v4, v5));
  res = rb_ary_new();
  return res;
}
static VALUE Mouse__get_absolute_supported(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Mouse *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_absolute_supported(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Mouse__get_relative_supported(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Mouse *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_relative_supported(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Mouse__get_needs_host_cursor(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Mouse *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_needs_host_cursor(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Mouse__get_event_source(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Mouse *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_event_source(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cEventSource));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Framebuffer__lock(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Framebuffer *vtbl = obj->vtbl;
  NS_CHECK(vtbl->lock(obj));
  res = rb_ary_new();
  return res;
}
static VALUE Framebuffer__unlock(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Framebuffer *vtbl = obj->vtbl;
  NS_CHECK(vtbl->unlock(obj));
  res = rb_ary_new();
  return res;
}
static VALUE Framebuffer__notify_update(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Framebuffer *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  uint32_t v3;
  uint32_t v4;
  i0 = prepare_uint32(i0);
  i1 = prepare_uint32(i1);
  i2 = prepare_uint32(i2);
  i3 = prepare_uint32(i3);
  extract_uint32(i0, &v1);
  extract_uint32(i1, &v2);
  extract_uint32(i2, &v3);
  extract_uint32(i3, &v4);
  NS_CHECK(vtbl->notify_update(obj, v1, v2, v3, v4));
  res = rb_ary_new();
  return res;
}
static VALUE Framebuffer__request_resize(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3, VALUE i4, VALUE i5, VALUE i6) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Framebuffer *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  void * v3;
  uint32_t v4;
  uint32_t v5;
  uint32_t v6;
  uint32_t v7;
  bool_t v8;
  i0 = prepare_uint32(i0);
  i1 = prepare_uint32(i1);
  i2 = prepare_ptr(i2);
  i3 = prepare_uint32(i3);
  i4 = prepare_uint32(i4);
  i5 = prepare_uint32(i5);
  i6 = prepare_uint32(i6);
  extract_uint32(i0, &v1);
  extract_uint32(i1, &v2);
  extract_ptr(i2, &v3);
  extract_uint32(i3, &v4);
  extract_uint32(i4, &v5);
  extract_uint32(i5, &v6);
  extract_uint32(i6, &v7);
  NS_CHECK(vtbl->request_resize(obj, v1, v2, v3, v4, v5, v6, v7, &v8));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v8));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Framebuffer__video_mode_supported(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Framebuffer *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  uint32_t v3;
  bool_t v4;
  i0 = prepare_uint32(i0);
  i1 = prepare_uint32(i1);
  i2 = prepare_uint32(i2);
  extract_uint32(i0, &v1);
  extract_uint32(i1, &v2);
  extract_uint32(i2, &v3);
  NS_CHECK(vtbl->video_mode_supported(obj, v1, v2, v3, &v4));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v4));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Framebuffer__get_visible_region(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Framebuffer *vtbl = obj->vtbl;
  void * v1;
  uint32_t v2;
  uint32_t v3;
  i0 = prepare_ptr(i0);
  i1 = prepare_uint32(i1);
  extract_ptr(i0, &v1);
  extract_uint32(i1, &v2);
  NS_CHECK(vtbl->get_visible_region(obj, v1, v2, &v3));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v3));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Framebuffer__set_visible_region(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Framebuffer *vtbl = obj->vtbl;
  void * v1;
  uint32_t v2;
  i0 = prepare_ptr(i0);
  i1 = prepare_uint32(i1);
  extract_ptr(i0, &v1);
  extract_uint32(i1, &v2);
  NS_CHECK(vtbl->set_visible_region(obj, v1, v2));
  res = rb_ary_new();
  return res;
}
static VALUE Framebuffer__process_vhwa_command(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Framebuffer *vtbl = obj->vtbl;
  void * v1;
  i0 = prepare_ptr(i0);
  extract_ptr(i0, &v1);
  NS_CHECK(vtbl->process_vhwa_command(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE Framebuffer__get_address(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Framebuffer *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_address(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_ptr(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Framebuffer__get_width(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Framebuffer *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_width(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Framebuffer__get_height(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Framebuffer *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_height(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Framebuffer__get_bits_per_pixel(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Framebuffer *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_bits_per_pixel(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Framebuffer__get_bytes_per_line(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Framebuffer *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_bytes_per_line(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Framebuffer__get_pixel_format(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Framebuffer *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_pixel_format(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Framebuffer__get_uses_guest_vram(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Framebuffer *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_uses_guest_vram(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Framebuffer__get_height_reduction(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Framebuffer *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_height_reduction(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Framebuffer__get_overlay(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Framebuffer *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_overlay(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cFramebufferOverlay));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Framebuffer__get_win_id(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Framebuffer *vtbl = obj->vtbl;
  int64_t v1;
  NS_CHECK(vtbl->get_win_id(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int64(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE FramebufferOverlay__move(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct FramebufferOverlay *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  i0 = prepare_uint32(i0);
  i1 = prepare_uint32(i1);
  extract_uint32(i0, &v1);
  extract_uint32(i1, &v2);
  NS_CHECK(vtbl->move(obj, v1, v2));
  res = rb_ary_new();
  return res;
}
static VALUE FramebufferOverlay__get_x(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct FramebufferOverlay *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_x(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE FramebufferOverlay__get_y(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct FramebufferOverlay *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_y(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE FramebufferOverlay__get_visible(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct FramebufferOverlay *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_visible(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE FramebufferOverlay__get_alpha(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct FramebufferOverlay *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_alpha(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Display__get_screen_resolution(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Display *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  uint32_t v3;
  uint32_t v4;
  i0 = prepare_uint32(i0);
  extract_uint32(i0, &v1);
  NS_CHECK(vtbl->get_screen_resolution(obj, v1, &v2, &v3, &v4));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v2));
  rb_ary_push(res, convert_uint32(v3));
  rb_ary_push(res, convert_uint32(v4));
  return res;
}
static VALUE Display__set_framebuffer(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Display *vtbl = obj->vtbl;
  uint32_t v1;
  void * v2;
  i0 = prepare_uint32(i0);
  i1 = prepare_interface(i1, cFramebuffer);
  extract_uint32(i0, &v1);
  extract_interface(i1, &v2, cFramebuffer);
  NS_CHECK(vtbl->set_framebuffer(obj, v1, v2));
  res = rb_ary_new();
  return res;
}
static VALUE Display__get_framebuffer(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Display *vtbl = obj->vtbl;
  uint32_t v1;
  void * v2;
  int32_t v3;
  int32_t v4;
  i0 = prepare_uint32(i0);
  extract_uint32(i0, &v1);
  NS_CHECK(vtbl->get_framebuffer(obj, v1, &v2, &v3, &v4));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cFramebuffer));
  rb_ary_push(res, convert_int32(v3));
  rb_ary_push(res, convert_int32(v4));
  return res;
}
static VALUE Display__set_video_mode_hint(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3, VALUE i4, VALUE i5, VALUE i6, VALUE i7) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Display *vtbl = obj->vtbl;
  uint32_t v1;
  bool_t v2;
  bool_t v3;
  int32_t v4;
  int32_t v5;
  uint32_t v6;
  uint32_t v7;
  uint32_t v8;
  i0 = prepare_uint32(i0);
  i1 = prepare_bool(i1);
  i2 = prepare_bool(i2);
  i3 = prepare_int32(i3);
  i4 = prepare_int32(i4);
  i5 = prepare_uint32(i5);
  i6 = prepare_uint32(i6);
  i7 = prepare_uint32(i7);
  extract_uint32(i0, &v1);
  extract_bool(i1, &v2);
  extract_bool(i2, &v3);
  extract_int32(i3, &v4);
  extract_int32(i4, &v5);
  extract_uint32(i5, &v6);
  extract_uint32(i6, &v7);
  extract_uint32(i7, &v8);
  NS_CHECK(vtbl->set_video_mode_hint(obj, v1, v2, v3, v4, v5, v6, v7, v8));
  res = rb_ary_new();
  return res;
}
static VALUE Display__set_seamless_mode(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Display *vtbl = obj->vtbl;
  bool_t v1;
  i0 = prepare_bool(i0);
  extract_bool(i0, &v1);
  NS_CHECK(vtbl->set_seamless_mode(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE Display__take_screenshot(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Display *vtbl = obj->vtbl;
  uint32_t v1;
  void * v2;
  uint32_t v3;
  uint32_t v4;
  i0 = prepare_uint32(i0);
  i1 = prepare_ptr(i1);
  i2 = prepare_uint32(i2);
  i3 = prepare_uint32(i3);
  extract_uint32(i0, &v1);
  extract_ptr(i1, &v2);
  extract_uint32(i2, &v3);
  extract_uint32(i3, &v4);
  NS_CHECK(vtbl->take_screenshot(obj, v1, v2, v3, v4));
  res = rb_ary_new();
  return res;
}
static VALUE Display__take_screenshot_to_array(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Display *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  uint32_t v3;
  uint32_t v4_size;
  void * v4;
  i0 = prepare_uint32(i0);
  i1 = prepare_uint32(i1);
  i2 = prepare_uint32(i2);
  extract_uint32(i0, &v1);
  extract_uint32(i1, &v2);
  extract_uint32(i2, &v3);
  NS_CHECK(vtbl->take_screenshot_to_array(obj, v1, v2, v3, &v4_size, &v4));
  res = rb_ary_new();
  rb_ary_push(res, convert_blob(v4_size, v4));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Display__take_screenshot_png_to_array(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Display *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  uint32_t v3;
  uint32_t v4_size;
  void * v4;
  i0 = prepare_uint32(i0);
  i1 = prepare_uint32(i1);
  i2 = prepare_uint32(i2);
  extract_uint32(i0, &v1);
  extract_uint32(i1, &v2);
  extract_uint32(i2, &v3);
  NS_CHECK(vtbl->take_screenshot_png_to_array(obj, v1, v2, v3, &v4_size, &v4));
  res = rb_ary_new();
  rb_ary_push(res, convert_blob(v4_size, v4));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Display__draw_to_screen(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3, VALUE i4, VALUE i5) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Display *vtbl = obj->vtbl;
  uint32_t v1;
  void * v2;
  uint32_t v3;
  uint32_t v4;
  uint32_t v5;
  uint32_t v6;
  i0 = prepare_uint32(i0);
  i1 = prepare_ptr(i1);
  i2 = prepare_uint32(i2);
  i3 = prepare_uint32(i3);
  i4 = prepare_uint32(i4);
  i5 = prepare_uint32(i5);
  extract_uint32(i0, &v1);
  extract_ptr(i1, &v2);
  extract_uint32(i2, &v3);
  extract_uint32(i3, &v4);
  extract_uint32(i4, &v5);
  extract_uint32(i5, &v6);
  NS_CHECK(vtbl->draw_to_screen(obj, v1, v2, v3, v4, v5, v6));
  res = rb_ary_new();
  return res;
}
static VALUE Display__invalidate_and_update(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Display *vtbl = obj->vtbl;
  NS_CHECK(vtbl->invalidate_and_update(obj));
  res = rb_ary_new();
  return res;
}
static VALUE Display__resize_completed(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Display *vtbl = obj->vtbl;
  uint32_t v1;
  i0 = prepare_uint32(i0);
  extract_uint32(i0, &v1);
  NS_CHECK(vtbl->resize_completed(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE Display__complete_vhwa_command(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Display *vtbl = obj->vtbl;
  void * v1;
  i0 = prepare_ptr(i0);
  extract_ptr(i0, &v1);
  NS_CHECK(vtbl->complete_vhwa_command(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE Display__viewport_changed(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3, VALUE i4) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Display *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  uint32_t v3;
  uint32_t v4;
  uint32_t v5;
  i0 = prepare_uint32(i0);
  i1 = prepare_uint32(i1);
  i2 = prepare_uint32(i2);
  i3 = prepare_uint32(i3);
  i4 = prepare_uint32(i4);
  extract_uint32(i0, &v1);
  extract_uint32(i1, &v2);
  extract_uint32(i2, &v3);
  extract_uint32(i3, &v4);
  extract_uint32(i4, &v5);
  NS_CHECK(vtbl->viewport_changed(obj, v1, v2, v3, v4, v5));
  res = rb_ary_new();
  return res;
}
static VALUE NetworkAdapter__get_property(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NetworkAdapter *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->get_property(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v2));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NetworkAdapter__set_property(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NetworkAdapter *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  i0 = prepare_wstring(i0);
  i1 = prepare_wstring(i1);
  extract_wstring(i0, &v1);
  extract_wstring(i1, &v2);
  NS_CHECK(vtbl->set_property(obj, v1, v2));
  res = rb_ary_new();
  return res;
}
static VALUE NetworkAdapter__get_properties(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NetworkAdapter *vtbl = obj->vtbl;
  wstring_t v1;
  uint32_t v2_size;
  void * v2;
  uint32_t v3_size;
  void * v3;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->get_properties(obj, v1, &v2_size, &v2, &v3_size, &v3));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_wstring(v2_size, v2));
  rb_ary_push(res, convert_array_wstring(v3_size, v3));
  return res;
}
static VALUE NetworkAdapter__get_adapter_type(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NetworkAdapter *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_adapter_type(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cNetworkAdapterType));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NetworkAdapter__get_slot(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NetworkAdapter *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_slot(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NetworkAdapter__get_enabled(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NetworkAdapter *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_enabled(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NetworkAdapter__get_mac_address(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NetworkAdapter *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_mac_address(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NetworkAdapter__get_attachment_type(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NetworkAdapter *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_attachment_type(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cNetworkAttachmentType));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NetworkAdapter__get_bridged_interface(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NetworkAdapter *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_bridged_interface(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NetworkAdapter__get_host_only_interface(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NetworkAdapter *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_host_only_interface(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NetworkAdapter__get_internal_network(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NetworkAdapter *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_internal_network(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NetworkAdapter__get_nat_network(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NetworkAdapter *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_nat_network(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NetworkAdapter__get_generic_driver(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NetworkAdapter *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_generic_driver(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NetworkAdapter__get_cable_connected(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NetworkAdapter *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_cable_connected(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NetworkAdapter__get_line_speed(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NetworkAdapter *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_line_speed(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NetworkAdapter__get_promisc_mode_policy(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NetworkAdapter *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_promisc_mode_policy(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cNetworkAdapterPromiscModePolicy));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NetworkAdapter__get_trace_enabled(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NetworkAdapter *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_trace_enabled(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NetworkAdapter__get_trace_file(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NetworkAdapter *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_trace_file(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NetworkAdapter__get_nat_engine(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NetworkAdapter *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_nat_engine(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cNATEngine));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NetworkAdapter__get_boot_priority(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NetworkAdapter *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_boot_priority(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NetworkAdapter__get_bandwidth_group(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NetworkAdapter *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_bandwidth_group(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cBandwidthGroup));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SerialPort__get_slot(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SerialPort *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_slot(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SerialPort__get_enabled(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SerialPort *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_enabled(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SerialPort__get_io_base(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SerialPort *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_io_base(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SerialPort__get_irq(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SerialPort *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_irq(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SerialPort__get_host_mode(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SerialPort *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_host_mode(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cPortMode));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SerialPort__get_server(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SerialPort *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_server(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SerialPort__get_path(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SerialPort *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_path(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ParallelPort__get_slot(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ParallelPort *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_slot(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ParallelPort__get_enabled(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ParallelPort *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_enabled(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ParallelPort__get_io_base(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ParallelPort *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_io_base(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ParallelPort__get_irq(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ParallelPort *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_irq(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ParallelPort__get_path(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ParallelPort *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_path(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MachineDebugger__dump_guest_core(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  i0 = prepare_wstring(i0);
  i1 = prepare_wstring(i1);
  extract_wstring(i0, &v1);
  extract_wstring(i1, &v2);
  NS_CHECK(vtbl->dump_guest_core(obj, v1, v2));
  res = rb_ary_new();
  return res;
}
static VALUE MachineDebugger__dump_host_process_core(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  i0 = prepare_wstring(i0);
  i1 = prepare_wstring(i1);
  extract_wstring(i0, &v1);
  extract_wstring(i1, &v2);
  NS_CHECK(vtbl->dump_host_process_core(obj, v1, v2));
  res = rb_ary_new();
  return res;
}
static VALUE MachineDebugger__info(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  wstring_t v3;
  i0 = prepare_wstring(i0);
  i1 = prepare_wstring(i1);
  extract_wstring(i0, &v1);
  extract_wstring(i1, &v2);
  NS_CHECK(vtbl->info(obj, v1, v2, &v3));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v3));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MachineDebugger__inject_n_m_i(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  NS_CHECK(vtbl->inject_n_m_i(obj));
  res = rb_ary_new();
  return res;
}
static VALUE MachineDebugger__modify_log_groups(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  wstring_t v1;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->modify_log_groups(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE MachineDebugger__modify_log_flags(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  wstring_t v1;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->modify_log_flags(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE MachineDebugger__modify_log_destinations(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  wstring_t v1;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->modify_log_destinations(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE MachineDebugger__read_physical_memory(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  int64_t v1;
  uint32_t v2;
  uint32_t v3_size;
  void * v3;
  i0 = prepare_int64(i0);
  i1 = prepare_uint32(i1);
  extract_int64(i0, &v1);
  extract_uint32(i1, &v2);
  NS_CHECK(vtbl->read_physical_memory(obj, v1, v2, &v3_size, &v3));
  res = rb_ary_new();
  rb_ary_push(res, convert_blob(v3_size, v3));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MachineDebugger__write_physical_memory(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  int64_t v1;
  uint32_t v2;
  uint32_t v3_size;
  void * v3;
  i0 = prepare_int64(i0);
  i1 = prepare_uint32(i1);
  i2 = prepare_blob(i2);
  extract_int64(i0, &v1);
  extract_uint32(i1, &v2);
  extract_blob(i2, &v3_size, &v3);
  NS_CHECK(vtbl->write_physical_memory(obj, v1, v2, v3_size, v3));
  res = rb_ary_new();
  return res;
}
static VALUE MachineDebugger__read_virtual_memory(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  uint32_t v1;
  int64_t v2;
  uint32_t v3;
  uint32_t v4_size;
  void * v4;
  i0 = prepare_uint32(i0);
  i1 = prepare_int64(i1);
  i2 = prepare_uint32(i2);
  extract_uint32(i0, &v1);
  extract_int64(i1, &v2);
  extract_uint32(i2, &v3);
  NS_CHECK(vtbl->read_virtual_memory(obj, v1, v2, v3, &v4_size, &v4));
  res = rb_ary_new();
  rb_ary_push(res, convert_blob(v4_size, v4));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MachineDebugger__write_virtual_memory(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  uint32_t v1;
  int64_t v2;
  uint32_t v3;
  uint32_t v4_size;
  void * v4;
  i0 = prepare_uint32(i0);
  i1 = prepare_int64(i1);
  i2 = prepare_uint32(i2);
  i3 = prepare_blob(i3);
  extract_uint32(i0, &v1);
  extract_int64(i1, &v2);
  extract_uint32(i2, &v3);
  extract_blob(i3, &v4_size, &v4);
  NS_CHECK(vtbl->write_virtual_memory(obj, v1, v2, v3, v4_size, v4));
  res = rb_ary_new();
  return res;
}
static VALUE MachineDebugger__detect_os(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->detect_os(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MachineDebugger__get_register(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  uint32_t v1;
  wstring_t v2;
  wstring_t v3;
  i0 = prepare_uint32(i0);
  i1 = prepare_wstring(i1);
  extract_uint32(i0, &v1);
  extract_wstring(i1, &v2);
  NS_CHECK(vtbl->get_register(obj, v1, v2, &v3));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v3));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MachineDebugger__get_registers(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2_size;
  void * v2;
  uint32_t v3_size;
  void * v3;
  i0 = prepare_uint32(i0);
  extract_uint32(i0, &v1);
  NS_CHECK(vtbl->get_registers(obj, v1, &v2_size, &v2, &v3_size, &v3));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_wstring(v2_size, v2));
  rb_ary_push(res, convert_array_wstring(v3_size, v3));
  return res;
}
static VALUE MachineDebugger__set_register(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  uint32_t v1;
  wstring_t v2;
  wstring_t v3;
  i0 = prepare_uint32(i0);
  i1 = prepare_wstring(i1);
  i2 = prepare_wstring(i2);
  extract_uint32(i0, &v1);
  extract_wstring(i1, &v2);
  extract_wstring(i2, &v3);
  NS_CHECK(vtbl->set_register(obj, v1, v2, v3));
  res = rb_ary_new();
  return res;
}
static VALUE MachineDebugger__set_registers(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2_size;
  void * v2;
  uint32_t v3_size;
  void * v3;
  i0 = prepare_uint32(i0);
  i1 = prepare_array_wstring(i1);
  i2 = prepare_array_wstring(i2);
  extract_uint32(i0, &v1);
  extract_carray(i1, &v2_size, &v2);
  extract_carray(i2, &v3_size, &v3);
  NS_CHECK(vtbl->set_registers(obj, v1, v2_size, v2, v3_size, v3));
  res = rb_ary_new();
  return res;
}
static VALUE MachineDebugger__dump_guest_stack(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  uint32_t v1;
  wstring_t v2;
  i0 = prepare_uint32(i0);
  extract_uint32(i0, &v1);
  NS_CHECK(vtbl->dump_guest_stack(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v2));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MachineDebugger__reset_stats(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  wstring_t v1;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->reset_stats(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE MachineDebugger__dump_stats(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  wstring_t v1;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->dump_stats(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE MachineDebugger__get_stats(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  wstring_t v1;
  bool_t v2;
  wstring_t v3;
  i0 = prepare_wstring(i0);
  i1 = prepare_bool(i1);
  extract_wstring(i0, &v1);
  extract_bool(i1, &v2);
  NS_CHECK(vtbl->get_stats(obj, v1, v2, &v3));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v3));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MachineDebugger__get_single_step(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_single_step(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MachineDebugger__get_recompile_user(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_recompile_user(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MachineDebugger__get_recompile_supervisor(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_recompile_supervisor(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MachineDebugger__get_patm_enabled(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_patm_enabled(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MachineDebugger__get_csam_enabled(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_csam_enabled(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MachineDebugger__get_log_enabled(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_log_enabled(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MachineDebugger__get_log_dbg_flags(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_log_dbg_flags(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MachineDebugger__get_log_dbg_groups(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_log_dbg_groups(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MachineDebugger__get_log_dbg_destinations(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_log_dbg_destinations(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MachineDebugger__get_log_rel_flags(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_log_rel_flags(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MachineDebugger__get_log_rel_groups(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_log_rel_groups(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MachineDebugger__get_log_rel_destinations(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_log_rel_destinations(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MachineDebugger__get_hw_virt_ex_enabled(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_hw_virt_ex_enabled(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MachineDebugger__get_hw_virt_ex_nested_paging_enabled(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_hw_virt_ex_nested_paging_enabled(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MachineDebugger__get_hw_virt_ex_vpid_enabled(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_hw_virt_ex_vpid_enabled(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MachineDebugger__get_os_name(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_os_name(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MachineDebugger__get_os_version(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_os_version(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MachineDebugger__get_pae_enabled(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_pae_enabled(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MachineDebugger__get_virtual_time_rate(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_virtual_time_rate(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MachineDebugger__get_vm(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDebugger *vtbl = obj->vtbl;
  int64_t v1;
  NS_CHECK(vtbl->get_vm(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int64(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE USBController__create_device_filter(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct USBController *vtbl = obj->vtbl;
  wstring_t v1;
  void * v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->create_device_filter(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cUSBDeviceFilter));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE USBController__insert_device_filter(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct USBController *vtbl = obj->vtbl;
  uint32_t v1;
  void * v2;
  i0 = prepare_uint32(i0);
  i1 = prepare_interface(i1, cUSBDeviceFilter);
  extract_uint32(i0, &v1);
  extract_interface(i1, &v2, cUSBDeviceFilter);
  NS_CHECK(vtbl->insert_device_filter(obj, v1, v2));
  res = rb_ary_new();
  return res;
}
static VALUE USBController__remove_device_filter(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct USBController *vtbl = obj->vtbl;
  uint32_t v1;
  void * v2;
  i0 = prepare_uint32(i0);
  extract_uint32(i0, &v1);
  NS_CHECK(vtbl->remove_device_filter(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cUSBDeviceFilter));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE USBController__get_enabled(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct USBController *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_enabled(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE USBController__get_enabled_ehci(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct USBController *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_enabled_ehci(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE USBController__get_proxy_available(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct USBController *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_proxy_available(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE USBController__get_usb_standard(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct USBController *vtbl = obj->vtbl;
  uint16_t v1;
  NS_CHECK(vtbl->get_usb_standard(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint16(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE USBController__get_device_filters(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct USBController *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_device_filters(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v1_size, v1, cUSBDeviceFilter));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE USBDevice__get_id(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct USBDevice *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_id(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE USBDevice__get_vendor_id(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct USBDevice *vtbl = obj->vtbl;
  uint16_t v1;
  NS_CHECK(vtbl->get_vendor_id(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint16(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE USBDevice__get_product_id(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct USBDevice *vtbl = obj->vtbl;
  uint16_t v1;
  NS_CHECK(vtbl->get_product_id(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint16(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE USBDevice__get_revision(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct USBDevice *vtbl = obj->vtbl;
  uint16_t v1;
  NS_CHECK(vtbl->get_revision(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint16(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE USBDevice__get_manufacturer(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct USBDevice *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_manufacturer(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE USBDevice__get_product(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct USBDevice *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_product(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE USBDevice__get_serial_number(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct USBDevice *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_serial_number(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE USBDevice__get_address(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct USBDevice *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_address(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE USBDevice__get_port(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct USBDevice *vtbl = obj->vtbl;
  uint16_t v1;
  NS_CHECK(vtbl->get_port(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint16(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE USBDevice__get_version(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct USBDevice *vtbl = obj->vtbl;
  uint16_t v1;
  NS_CHECK(vtbl->get_version(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint16(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE USBDevice__get_port_version(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct USBDevice *vtbl = obj->vtbl;
  uint16_t v1;
  NS_CHECK(vtbl->get_port_version(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint16(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE USBDevice__get_remote(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct USBDevice *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_remote(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE USBDeviceFilter__get_name(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct USBDeviceFilter *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_name(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE USBDeviceFilter__get_active(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct USBDeviceFilter *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_active(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE USBDeviceFilter__get_vendor_id(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct USBDeviceFilter *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_vendor_id(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE USBDeviceFilter__get_product_id(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct USBDeviceFilter *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_product_id(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE USBDeviceFilter__get_revision(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct USBDeviceFilter *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_revision(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE USBDeviceFilter__get_manufacturer(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct USBDeviceFilter *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_manufacturer(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE USBDeviceFilter__get_product(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct USBDeviceFilter *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_product(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE USBDeviceFilter__get_serial_number(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct USBDeviceFilter *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_serial_number(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE USBDeviceFilter__get_port(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct USBDeviceFilter *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_port(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE USBDeviceFilter__get_remote(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct USBDeviceFilter *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_remote(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE USBDeviceFilter__get_masked_interfaces(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct USBDeviceFilter *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_masked_interfaces(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE HostUSBDevice__get_state(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct HostUSBDevice *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_state(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cUSBDeviceState));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE HostUSBDeviceFilter__get_action(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct HostUSBDeviceFilter *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_action(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cUSBDeviceFilterAction));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE AudioAdapter__get_enabled(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct AudioAdapter *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_enabled(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE AudioAdapter__get_audio_controller(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct AudioAdapter *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_audio_controller(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cAudioControllerType));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE AudioAdapter__get_audio_driver(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct AudioAdapter *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_audio_driver(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cAudioDriverType));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VRDEServer__set_vrde_property(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VRDEServer *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  i0 = prepare_wstring(i0);
  i1 = prepare_wstring(i1);
  extract_wstring(i0, &v1);
  extract_wstring(i1, &v2);
  NS_CHECK(vtbl->set_vrde_property(obj, v1, v2));
  res = rb_ary_new();
  return res;
}
static VALUE VRDEServer__get_vrde_property(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VRDEServer *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->get_vrde_property(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v2));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VRDEServer__get_enabled(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VRDEServer *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_enabled(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VRDEServer__get_auth_type(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VRDEServer *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_auth_type(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cAuthType));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VRDEServer__get_auth_timeout(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VRDEServer *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_auth_timeout(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VRDEServer__get_allow_multi_connection(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VRDEServer *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_allow_multi_connection(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VRDEServer__get_reuse_single_connection(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VRDEServer *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_reuse_single_connection(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VRDEServer__get_vrde_ext_pack(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VRDEServer *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_vrde_ext_pack(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VRDEServer__get_auth_library(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VRDEServer *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_auth_library(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VRDEServer__get_vrde_properties(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VRDEServer *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_vrde_properties(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_wstring(v1_size, v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SharedFolder__get_name(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SharedFolder *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_name(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SharedFolder__get_host_path(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SharedFolder *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_host_path(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SharedFolder__get_accessible(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SharedFolder *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_accessible(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SharedFolder__get_writable(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SharedFolder *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_writable(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SharedFolder__get_auto_mount(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SharedFolder *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_auto_mount(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SharedFolder__get_last_access_error(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SharedFolder *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_last_access_error(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE InternalSessionControl__get_pid(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalSessionControl *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_pid(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE InternalSessionControl__get_remote_console(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalSessionControl *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_remote_console(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cConsole));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE InternalSessionControl__assign_machine(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalSessionControl *vtbl = obj->vtbl;
  void * v1;
  uint32_t v2;
  i0 = prepare_interface(i0, cMachine);
  i1 = prepare_enum(i1, cLockType);
  extract_interface(i0, &v1, cMachine);
  extract_enum(i1, &v2, cLockType);
  NS_CHECK(vtbl->assign_machine(obj, v1, v2));
  res = rb_ary_new();
  return res;
}
static VALUE InternalSessionControl__assign_remote_machine(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalSessionControl *vtbl = obj->vtbl;
  void * v1;
  void * v2;
  i0 = prepare_interface(i0, cMachine);
  i1 = prepare_interface(i1, cConsole);
  extract_interface(i0, &v1, cMachine);
  extract_interface(i1, &v2, cConsole);
  NS_CHECK(vtbl->assign_remote_machine(obj, v1, v2));
  res = rb_ary_new();
  return res;
}
static VALUE InternalSessionControl__update_machine_state(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalSessionControl *vtbl = obj->vtbl;
  uint32_t v1;
  i0 = prepare_enum(i0, cMachineState);
  extract_enum(i0, &v1, cMachineState);
  NS_CHECK(vtbl->update_machine_state(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE InternalSessionControl__uninitialize(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalSessionControl *vtbl = obj->vtbl;
  NS_CHECK(vtbl->uninitialize(obj));
  res = rb_ary_new();
  return res;
}
static VALUE InternalSessionControl__on_network_adapter_change(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalSessionControl *vtbl = obj->vtbl;
  void * v1;
  bool_t v2;
  i0 = prepare_interface(i0, cNetworkAdapter);
  i1 = prepare_bool(i1);
  extract_interface(i0, &v1, cNetworkAdapter);
  extract_bool(i1, &v2);
  NS_CHECK(vtbl->on_network_adapter_change(obj, v1, v2));
  res = rb_ary_new();
  return res;
}
static VALUE InternalSessionControl__on_serial_port_change(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalSessionControl *vtbl = obj->vtbl;
  void * v1;
  i0 = prepare_interface(i0, cSerialPort);
  extract_interface(i0, &v1, cSerialPort);
  NS_CHECK(vtbl->on_serial_port_change(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE InternalSessionControl__on_parallel_port_change(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalSessionControl *vtbl = obj->vtbl;
  void * v1;
  i0 = prepare_interface(i0, cParallelPort);
  extract_interface(i0, &v1, cParallelPort);
  NS_CHECK(vtbl->on_parallel_port_change(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE InternalSessionControl__on_storage_controller_change(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalSessionControl *vtbl = obj->vtbl;
  NS_CHECK(vtbl->on_storage_controller_change(obj));
  res = rb_ary_new();
  return res;
}
static VALUE InternalSessionControl__on_medium_change(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalSessionControl *vtbl = obj->vtbl;
  void * v1;
  bool_t v2;
  i0 = prepare_interface(i0, cMediumAttachment);
  i1 = prepare_bool(i1);
  extract_interface(i0, &v1, cMediumAttachment);
  extract_bool(i1, &v2);
  NS_CHECK(vtbl->on_medium_change(obj, v1, v2));
  res = rb_ary_new();
  return res;
}
static VALUE InternalSessionControl__on_storage_device_change(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalSessionControl *vtbl = obj->vtbl;
  void * v1;
  bool_t v2;
  i0 = prepare_interface(i0, cMediumAttachment);
  i1 = prepare_bool(i1);
  extract_interface(i0, &v1, cMediumAttachment);
  extract_bool(i1, &v2);
  NS_CHECK(vtbl->on_storage_device_change(obj, v1, v2));
  res = rb_ary_new();
  return res;
}
static VALUE InternalSessionControl__on_clipboard_mode_change(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalSessionControl *vtbl = obj->vtbl;
  uint32_t v1;
  i0 = prepare_enum(i0, cClipboardMode);
  extract_enum(i0, &v1, cClipboardMode);
  NS_CHECK(vtbl->on_clipboard_mode_change(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE InternalSessionControl__on_drag_and_drop_mode_change(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalSessionControl *vtbl = obj->vtbl;
  uint32_t v1;
  i0 = prepare_enum(i0, cDragAndDropMode);
  extract_enum(i0, &v1, cDragAndDropMode);
  NS_CHECK(vtbl->on_drag_and_drop_mode_change(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE InternalSessionControl__on_cpu_change(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalSessionControl *vtbl = obj->vtbl;
  uint32_t v1;
  bool_t v2;
  i0 = prepare_uint32(i0);
  i1 = prepare_bool(i1);
  extract_uint32(i0, &v1);
  extract_bool(i1, &v2);
  NS_CHECK(vtbl->on_cpu_change(obj, v1, v2));
  res = rb_ary_new();
  return res;
}
static VALUE InternalSessionControl__on_cpu_execution_cap_change(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalSessionControl *vtbl = obj->vtbl;
  uint32_t v1;
  i0 = prepare_uint32(i0);
  extract_uint32(i0, &v1);
  NS_CHECK(vtbl->on_cpu_execution_cap_change(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE InternalSessionControl__on_vrde_server_change(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalSessionControl *vtbl = obj->vtbl;
  bool_t v1;
  i0 = prepare_bool(i0);
  extract_bool(i0, &v1);
  NS_CHECK(vtbl->on_vrde_server_change(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE InternalSessionControl__on_usb_controller_change(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalSessionControl *vtbl = obj->vtbl;
  NS_CHECK(vtbl->on_usb_controller_change(obj));
  res = rb_ary_new();
  return res;
}
static VALUE InternalSessionControl__on_shared_folder_change(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalSessionControl *vtbl = obj->vtbl;
  bool_t v1;
  i0 = prepare_bool(i0);
  extract_bool(i0, &v1);
  NS_CHECK(vtbl->on_shared_folder_change(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE InternalSessionControl__on_usb_device_attach(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalSessionControl *vtbl = obj->vtbl;
  void * v1;
  void * v2;
  uint32_t v3;
  i0 = prepare_interface(i0, cUSBDevice);
  i1 = prepare_interface(i1, cVirtualBoxErrorInfo);
  i2 = prepare_uint32(i2);
  extract_interface(i0, &v1, cUSBDevice);
  extract_interface(i1, &v2, cVirtualBoxErrorInfo);
  extract_uint32(i2, &v3);
  NS_CHECK(vtbl->on_usb_device_attach(obj, v1, v2, v3));
  res = rb_ary_new();
  return res;
}
static VALUE InternalSessionControl__on_usb_device_detach(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalSessionControl *vtbl = obj->vtbl;
  wstring_t v1;
  void * v2;
  i0 = prepare_wstring(i0);
  i1 = prepare_interface(i1, cVirtualBoxErrorInfo);
  extract_wstring(i0, &v1);
  extract_interface(i1, &v2, cVirtualBoxErrorInfo);
  NS_CHECK(vtbl->on_usb_device_detach(obj, v1, v2));
  res = rb_ary_new();
  return res;
}
static VALUE InternalSessionControl__on_show_window(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalSessionControl *vtbl = obj->vtbl;
  bool_t v1;
  bool_t v2;
  int64_t v3;
  i0 = prepare_bool(i0);
  extract_bool(i0, &v1);
  NS_CHECK(vtbl->on_show_window(obj, v1, &v2, &v3));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v2));
  rb_ary_push(res, convert_int64(v3));
  return res;
}
static VALUE InternalSessionControl__on_bandwidth_group_change(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalSessionControl *vtbl = obj->vtbl;
  void * v1;
  i0 = prepare_interface(i0, cBandwidthGroup);
  extract_interface(i0, &v1, cBandwidthGroup);
  NS_CHECK(vtbl->on_bandwidth_group_change(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE InternalSessionControl__access_guest_property(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalSessionControl *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  wstring_t v3;
  bool_t v4;
  wstring_t v5;
  int64_t v6;
  wstring_t v7;
  i0 = prepare_wstring(i0);
  i1 = prepare_wstring(i1);
  i2 = prepare_wstring(i2);
  i3 = prepare_bool(i3);
  extract_wstring(i0, &v1);
  extract_wstring(i1, &v2);
  extract_wstring(i2, &v3);
  extract_bool(i3, &v4);
  NS_CHECK(vtbl->access_guest_property(obj, v1, v2, v3, v4, &v5, &v6, &v7));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v5));
  rb_ary_push(res, convert_int64(v6));
  rb_ary_push(res, convert_wstring(v7));
  return res;
}
static VALUE InternalSessionControl__enumerate_guest_properties(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalSessionControl *vtbl = obj->vtbl;
  wstring_t v1;
  uint32_t v2_size;
  void * v2;
  uint32_t v3_size;
  void * v3;
  uint32_t v4_size;
  void * v4;
  uint32_t v5_size;
  void * v5;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->enumerate_guest_properties(obj, v1, &v2_size, &v2, &v3_size, &v3, &v4_size, &v4, &v5_size, &v5));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_wstring(v2_size, v2));
  rb_ary_push(res, convert_array_wstring(v3_size, v3));
  rb_ary_push(res, convert_array_int64(v4_size, v4));
  rb_ary_push(res, convert_array_wstring(v5_size, v5));
  return res;
}
static VALUE InternalSessionControl__online_merge_medium(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3, VALUE i4, VALUE i5, VALUE i6, VALUE i7, VALUE i8) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalSessionControl *vtbl = obj->vtbl;
  void * v1;
  uint32_t v2;
  uint32_t v3;
  void * v4;
  void * v5;
  bool_t v6;
  void * v7;
  uint32_t v8_size;
  void * v8;
  void * v9;
  i0 = prepare_interface(i0, cMediumAttachment);
  i1 = prepare_uint32(i1);
  i2 = prepare_uint32(i2);
  i3 = prepare_interface(i3, cMedium);
  i4 = prepare_interface(i4, cMedium);
  i5 = prepare_bool(i5);
  i6 = prepare_interface(i6, cMedium);
  i7 = prepare_array_interface(i7, cMedium);
  i8 = prepare_interface(i8, cProgress);
  extract_interface(i0, &v1, cMediumAttachment);
  extract_uint32(i1, &v2);
  extract_uint32(i2, &v3);
  extract_interface(i3, &v4, cMedium);
  extract_interface(i4, &v5, cMedium);
  extract_bool(i5, &v6);
  extract_interface(i6, &v7, cMedium);
  extract_carray(i7, &v8_size, &v8);
  extract_interface(i8, &v9, cProgress);
  NS_CHECK(vtbl->online_merge_medium(obj, v1, v2, v3, v4, v5, v6, v7, v8_size, v8, v9));
  res = rb_ary_new();
  return res;
}
static VALUE InternalSessionControl__enable_vm_m_statistics(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct InternalSessionControl *vtbl = obj->vtbl;
  bool_t v1;
  i0 = prepare_bool(i0);
  extract_bool(i0, &v1);
  NS_CHECK(vtbl->enable_vm_m_statistics(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE Session__unlock_machine(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Session *vtbl = obj->vtbl;
  NS_CHECK(vtbl->unlock_machine(obj));
  res = rb_ary_new();
  return res;
}
static VALUE Session__get_state(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Session *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_state(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cSessionState));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Session__get_type(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Session *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_type(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cSessionType));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Session__get_machine(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Session *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_machine(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cMachine));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Session__get_console(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Session *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_console(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cConsole));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE StorageController__get_name(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct StorageController *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_name(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE StorageController__get_max_devices_per_port_count(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct StorageController *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_max_devices_per_port_count(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE StorageController__get_min_port_count(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct StorageController *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_min_port_count(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE StorageController__get_max_port_count(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct StorageController *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_max_port_count(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE StorageController__get_instance(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct StorageController *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_instance(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE StorageController__get_port_count(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct StorageController *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_port_count(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE StorageController__get_bus(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct StorageController *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_bus(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cStorageBus));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE StorageController__get_controller_type(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct StorageController *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_controller_type(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cStorageControllerType));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE StorageController__get_use_host_io_cache(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct StorageController *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_use_host_io_cache(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE StorageController__get_bootable(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct StorageController *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_bootable(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE PerformanceMetric__get_metric_name(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct PerformanceMetric *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_metric_name(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE PerformanceMetric__get_object(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct PerformanceMetric *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_object(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cNSISupports));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE PerformanceMetric__get_description(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct PerformanceMetric *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_description(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE PerformanceMetric__get_period(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct PerformanceMetric *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_period(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE PerformanceMetric__get_count(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct PerformanceMetric *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_count(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE PerformanceMetric__get_unit(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct PerformanceMetric *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_unit(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE PerformanceMetric__get_minimum_value(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct PerformanceMetric *vtbl = obj->vtbl;
  int32_t v1;
  NS_CHECK(vtbl->get_minimum_value(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE PerformanceMetric__get_maximum_value(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct PerformanceMetric *vtbl = obj->vtbl;
  int32_t v1;
  NS_CHECK(vtbl->get_maximum_value(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE PerformanceCollector__get_metrics(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct PerformanceCollector *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  uint32_t v2_size;
  void * v2;
  uint32_t v3_size;
  void * v3;
  i0 = prepare_array_wstring(i0);
  i1 = prepare_array_interface(i1, cNSISupports);
  extract_carray(i0, &v1_size, &v1);
  extract_carray(i1, &v2_size, &v2);
  NS_CHECK(vtbl->get_metrics(obj, v1_size, v1, v2_size, v2, &v3_size, &v3));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v3_size, v3, cPerformanceMetric));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE PerformanceCollector__setup_metrics(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct PerformanceCollector *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  uint32_t v2_size;
  void * v2;
  uint32_t v3;
  uint32_t v4;
  uint32_t v5_size;
  void * v5;
  i0 = prepare_array_wstring(i0);
  i1 = prepare_array_interface(i1, cNSISupports);
  i2 = prepare_uint32(i2);
  i3 = prepare_uint32(i3);
  extract_carray(i0, &v1_size, &v1);
  extract_carray(i1, &v2_size, &v2);
  extract_uint32(i2, &v3);
  extract_uint32(i3, &v4);
  NS_CHECK(vtbl->setup_metrics(obj, v1_size, v1, v2_size, v2, v3, v4, &v5_size, &v5));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v5_size, v5, cPerformanceMetric));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE PerformanceCollector__enable_metrics(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct PerformanceCollector *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  uint32_t v2_size;
  void * v2;
  uint32_t v3_size;
  void * v3;
  i0 = prepare_array_wstring(i0);
  i1 = prepare_array_interface(i1, cNSISupports);
  extract_carray(i0, &v1_size, &v1);
  extract_carray(i1, &v2_size, &v2);
  NS_CHECK(vtbl->enable_metrics(obj, v1_size, v1, v2_size, v2, &v3_size, &v3));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v3_size, v3, cPerformanceMetric));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE PerformanceCollector__disable_metrics(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct PerformanceCollector *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  uint32_t v2_size;
  void * v2;
  uint32_t v3_size;
  void * v3;
  i0 = prepare_array_wstring(i0);
  i1 = prepare_array_interface(i1, cNSISupports);
  extract_carray(i0, &v1_size, &v1);
  extract_carray(i1, &v2_size, &v2);
  NS_CHECK(vtbl->disable_metrics(obj, v1_size, v1, v2_size, v2, &v3_size, &v3));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v3_size, v3, cPerformanceMetric));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE PerformanceCollector__query_metrics_data(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct PerformanceCollector *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  uint32_t v2_size;
  void * v2;
  uint32_t v3_size;
  void * v3;
  uint32_t v4_size;
  void * v4;
  uint32_t v5_size;
  void * v5;
  uint32_t v6_size;
  void * v6;
  uint32_t v7_size;
  void * v7;
  uint32_t v8_size;
  void * v8;
  uint32_t v9_size;
  void * v9;
  uint32_t v10_size;
  void * v10;
  i0 = prepare_array_wstring(i0);
  i1 = prepare_array_interface(i1, cNSISupports);
  extract_carray(i0, &v1_size, &v1);
  extract_carray(i1, &v2_size, &v2);
  NS_CHECK(vtbl->query_metrics_data(obj, v1_size, v1, v2_size, v2, &v3_size, &v3, &v4_size, &v4, &v5_size, &v5, &v6_size, &v6, &v7_size, &v7, &v8_size, &v8, &v9_size, &v9, &v10_size, &v10));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_wstring(v3_size, v3));
  rb_ary_push(res, convert_array_interface(v4_size, v4, cNSISupports));
  rb_ary_push(res, convert_array_wstring(v5_size, v5));
  rb_ary_push(res, convert_array_uint32(v6_size, v6));
  rb_ary_push(res, convert_array_uint32(v7_size, v7));
  rb_ary_push(res, convert_array_uint32(v8_size, v8));
  rb_ary_push(res, convert_array_uint32(v9_size, v9));
  rb_ary_push(res, convert_array_int32(v10_size, v10));
  return res;
}
static VALUE PerformanceCollector__get_metric_names(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct PerformanceCollector *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_metric_names(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_wstring(v1_size, v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NATEngine__set_network_settings(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3, VALUE i4) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NATEngine *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  uint32_t v3;
  uint32_t v4;
  uint32_t v5;
  i0 = prepare_uint32(i0);
  i1 = prepare_uint32(i1);
  i2 = prepare_uint32(i2);
  i3 = prepare_uint32(i3);
  i4 = prepare_uint32(i4);
  extract_uint32(i0, &v1);
  extract_uint32(i1, &v2);
  extract_uint32(i2, &v3);
  extract_uint32(i3, &v4);
  extract_uint32(i4, &v5);
  NS_CHECK(vtbl->set_network_settings(obj, v1, v2, v3, v4, v5));
  res = rb_ary_new();
  return res;
}
static VALUE NATEngine__get_network_settings(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NATEngine *vtbl = obj->vtbl;
  uint32_t v1;
  uint32_t v2;
  uint32_t v3;
  uint32_t v4;
  uint32_t v5;
  NS_CHECK(vtbl->get_network_settings(obj, &v1, &v2, &v3, &v4, &v5));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  rb_ary_push(res, convert_uint32(v2));
  rb_ary_push(res, convert_uint32(v3));
  rb_ary_push(res, convert_uint32(v4));
  rb_ary_push(res, convert_uint32(v5));
  return res;
}
static VALUE NATEngine__add_redirect(VALUE self, VALUE i0, VALUE i1, VALUE i2, VALUE i3, VALUE i4, VALUE i5) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NATEngine *vtbl = obj->vtbl;
  wstring_t v1;
  uint32_t v2;
  wstring_t v3;
  uint16_t v4;
  wstring_t v5;
  uint16_t v6;
  i0 = prepare_wstring(i0);
  i1 = prepare_enum(i1, cNATProtocol);
  i2 = prepare_wstring(i2);
  i3 = prepare_uint16(i3);
  i4 = prepare_wstring(i4);
  i5 = prepare_uint16(i5);
  extract_wstring(i0, &v1);
  extract_enum(i1, &v2, cNATProtocol);
  extract_wstring(i2, &v3);
  extract_uint16(i3, &v4);
  extract_wstring(i4, &v5);
  extract_uint16(i5, &v6);
  NS_CHECK(vtbl->add_redirect(obj, v1, v2, v3, v4, v5, v6));
  res = rb_ary_new();
  return res;
}
static VALUE NATEngine__remove_redirect(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NATEngine *vtbl = obj->vtbl;
  wstring_t v1;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->remove_redirect(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE NATEngine__get_network(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NATEngine *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_network(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NATEngine__get_host_ip(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NATEngine *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_host_ip(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NATEngine__get_tftp_prefix(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NATEngine *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_tftp_prefix(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NATEngine__get_tftp_boot_file(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NATEngine *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_tftp_boot_file(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NATEngine__get_tftp_next_server(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NATEngine *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_tftp_next_server(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NATEngine__get_alias_mode(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NATEngine *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_alias_mode(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NATEngine__get_dns_pass_domain(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NATEngine *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_dns_pass_domain(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NATEngine__get_dns_proxy(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NATEngine *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_dns_proxy(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NATEngine__get_dns_use_host_resolver(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NATEngine *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_dns_use_host_resolver(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NATEngine__get_redirects(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NATEngine *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_redirects(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_wstring(v1_size, v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ExtPackPlugIn__get_name(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ExtPackPlugIn *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_name(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ExtPackPlugIn__get_description(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ExtPackPlugIn *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_description(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ExtPackPlugIn__get_frontend(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ExtPackPlugIn *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_frontend(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ExtPackPlugIn__get_module_path(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ExtPackPlugIn *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_module_path(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ExtPackBase__query_license(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ExtPackBase *vtbl = obj->vtbl;
  wstring_t v1;
  wstring_t v2;
  wstring_t v3;
  wstring_t v4;
  i0 = prepare_wstring(i0);
  i1 = prepare_wstring(i1);
  i2 = prepare_wstring(i2);
  extract_wstring(i0, &v1);
  extract_wstring(i1, &v2);
  extract_wstring(i2, &v3);
  NS_CHECK(vtbl->query_license(obj, v1, v2, v3, &v4));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v4));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ExtPackBase__get_name(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ExtPackBase *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_name(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ExtPackBase__get_description(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ExtPackBase *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_description(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ExtPackBase__get_version(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ExtPackBase *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_version(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ExtPackBase__get_revision(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ExtPackBase *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_revision(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ExtPackBase__get_edition(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ExtPackBase *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_edition(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ExtPackBase__get_vrde_module(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ExtPackBase *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_vrde_module(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ExtPackBase__get_plug_ins(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ExtPackBase *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_plug_ins(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v1_size, v1, cExtPackPlugIn));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ExtPackBase__get_usable(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ExtPackBase *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_usable(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ExtPackBase__get_why_unusable(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ExtPackBase *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_why_unusable(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ExtPackBase__get_show_license(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ExtPackBase *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_show_license(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ExtPackBase__get_license(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ExtPackBase *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_license(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ExtPack__query_object(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ExtPack *vtbl = obj->vtbl;
  wstring_t v1;
  void * v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->query_object(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cNSISupports));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ExtPackFile__install(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ExtPackFile *vtbl = obj->vtbl;
  bool_t v1;
  wstring_t v2;
  void * v3;
  i0 = prepare_bool(i0);
  i1 = prepare_wstring(i1);
  extract_bool(i0, &v1);
  extract_wstring(i1, &v2);
  NS_CHECK(vtbl->install(obj, v1, v2, &v3));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v3, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ExtPackFile__get_file_path(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ExtPackFile *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_file_path(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ExtPackManager__find(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ExtPackManager *vtbl = obj->vtbl;
  wstring_t v1;
  void * v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->find(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cExtPack));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ExtPackManager__open_ext_pack_file(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ExtPackManager *vtbl = obj->vtbl;
  wstring_t v1;
  void * v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->open_ext_pack_file(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cExtPackFile));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ExtPackManager__uninstall(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ExtPackManager *vtbl = obj->vtbl;
  wstring_t v1;
  bool_t v2;
  wstring_t v3;
  void * v4;
  i0 = prepare_wstring(i0);
  i1 = prepare_bool(i1);
  i2 = prepare_wstring(i2);
  extract_wstring(i0, &v1);
  extract_bool(i1, &v2);
  extract_wstring(i2, &v3);
  NS_CHECK(vtbl->uninstall(obj, v1, v2, v3, &v4));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v4, cProgress));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ExtPackManager__cleanup(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ExtPackManager *vtbl = obj->vtbl;
  NS_CHECK(vtbl->cleanup(obj));
  res = rb_ary_new();
  return res;
}
static VALUE ExtPackManager__query_all_plug_ins_for_frontend(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ExtPackManager *vtbl = obj->vtbl;
  wstring_t v1;
  uint32_t v2_size;
  void * v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->query_all_plug_ins_for_frontend(obj, v1, &v2_size, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_wstring(v2_size, v2));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ExtPackManager__is_ext_pack_usable(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ExtPackManager *vtbl = obj->vtbl;
  wstring_t v1;
  bool_t v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->is_ext_pack_usable(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v2));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ExtPackManager__get_installed_ext_packs(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ExtPackManager *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_installed_ext_packs(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v1_size, v1, cExtPack));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE BandwidthGroup__get_name(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct BandwidthGroup *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_name(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE BandwidthGroup__get_type(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct BandwidthGroup *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_type(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cBandwidthGroupType));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE BandwidthGroup__get_reference(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct BandwidthGroup *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_reference(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE BandwidthGroup__get_max_bytes_per_sec(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct BandwidthGroup *vtbl = obj->vtbl;
  int64_t v1;
  NS_CHECK(vtbl->get_max_bytes_per_sec(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int64(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE BandwidthControl__create_bandwidth_group(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct BandwidthControl *vtbl = obj->vtbl;
  wstring_t v1;
  uint32_t v2;
  int64_t v3;
  i0 = prepare_wstring(i0);
  i1 = prepare_enum(i1, cBandwidthGroupType);
  i2 = prepare_int64(i2);
  extract_wstring(i0, &v1);
  extract_enum(i1, &v2, cBandwidthGroupType);
  extract_int64(i2, &v3);
  NS_CHECK(vtbl->create_bandwidth_group(obj, v1, v2, v3));
  res = rb_ary_new();
  return res;
}
static VALUE BandwidthControl__delete_bandwidth_group(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct BandwidthControl *vtbl = obj->vtbl;
  wstring_t v1;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->delete_bandwidth_group(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE BandwidthControl__get_bandwidth_group(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct BandwidthControl *vtbl = obj->vtbl;
  wstring_t v1;
  void * v2;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->get_bandwidth_group(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cBandwidthGroup));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE BandwidthControl__get_all_bandwidth_groups(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct BandwidthControl *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_all_bandwidth_groups(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_interface(v1_size, v1, cBandwidthGroup));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE BandwidthControl__get_num_groups(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct BandwidthControl *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_num_groups(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBoxClient__get_virtual_box(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBoxClient *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_virtual_box(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cVirtualBox));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBoxClient__get_session(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBoxClient *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_session(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cSession));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VirtualBoxClient__get_event_source(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VirtualBoxClient *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_event_source(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cEventSource));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE EventSource__create_listener(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct EventSource *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->create_listener(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cEventListener));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE EventSource__create_aggregator(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct EventSource *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  void * v2;
  i0 = prepare_array_interface(i0, cEventSource);
  extract_carray(i0, &v1_size, &v1);
  NS_CHECK(vtbl->create_aggregator(obj, v1_size, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v2, cEventSource));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE EventSource__register_listener(VALUE self, VALUE i0, VALUE i1, VALUE i2) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct EventSource *vtbl = obj->vtbl;
  void * v1;
  uint32_t v2_size;
  void * v2;
  bool_t v3;
  i0 = prepare_interface(i0, cEventListener);
  i1 = prepare_array_enum(i1, cVBoxEventType);
  i2 = prepare_bool(i2);
  extract_interface(i0, &v1, cEventListener);
  extract_carray(i1, &v2_size, &v2);
  extract_bool(i2, &v3);
  NS_CHECK(vtbl->register_listener(obj, v1, v2_size, v2, v3));
  res = rb_ary_new();
  return res;
}
static VALUE EventSource__unregister_listener(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct EventSource *vtbl = obj->vtbl;
  void * v1;
  i0 = prepare_interface(i0, cEventListener);
  extract_interface(i0, &v1, cEventListener);
  NS_CHECK(vtbl->unregister_listener(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE EventSource__fire_event(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct EventSource *vtbl = obj->vtbl;
  void * v1;
  int32_t v2;
  bool_t v3;
  i0 = prepare_interface(i0, cEvent);
  i1 = prepare_int32(i1);
  extract_interface(i0, &v1, cEvent);
  extract_int32(i1, &v2);
  NS_CHECK(vtbl->fire_event(obj, v1, v2, &v3));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v3));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE EventSource__get_event(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct EventSource *vtbl = obj->vtbl;
  void * v1;
  int32_t v2;
  void * v3;
  i0 = prepare_interface(i0, cEventListener);
  i1 = prepare_int32(i1);
  extract_interface(i0, &v1, cEventListener);
  extract_int32(i1, &v2);
  NS_CHECK(vtbl->get_event(obj, v1, v2, &v3));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v3, cEvent));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE EventSource__event_processed(VALUE self, VALUE i0, VALUE i1) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct EventSource *vtbl = obj->vtbl;
  void * v1;
  void * v2;
  i0 = prepare_interface(i0, cEventListener);
  i1 = prepare_interface(i1, cEvent);
  extract_interface(i0, &v1, cEventListener);
  extract_interface(i1, &v2, cEvent);
  NS_CHECK(vtbl->event_processed(obj, v1, v2));
  res = rb_ary_new();
  return res;
}
static VALUE EventListener__handle_event(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct EventListener *vtbl = obj->vtbl;
  void * v1;
  i0 = prepare_interface(i0, cEvent);
  extract_interface(i0, &v1, cEvent);
  NS_CHECK(vtbl->handle_event(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE Event__set_processed(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Event *vtbl = obj->vtbl;
  NS_CHECK(vtbl->set_processed(obj));
  res = rb_ary_new();
  return res;
}
static VALUE Event__wait_processed(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Event *vtbl = obj->vtbl;
  int32_t v1;
  bool_t v2;
  i0 = prepare_int32(i0);
  extract_int32(i0, &v1);
  NS_CHECK(vtbl->wait_processed(obj, v1, &v2));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v2));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Event__get_type(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Event *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_type(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cVBoxEventType));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Event__get_source(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Event *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_source(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cEventSource));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE Event__get_waitable(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct Event *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_waitable(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ReusableEvent__reuse(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ReusableEvent *vtbl = obj->vtbl;
  NS_CHECK(vtbl->reuse(obj));
  res = rb_ary_new();
  return res;
}
static VALUE ReusableEvent__get_generation(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ReusableEvent *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_generation(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MachineEvent__get_machine_id(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineEvent *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_machine_id(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MachineStateChangedEvent__get_state(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineStateChangedEvent *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_state(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cMachineState));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MachineDataChangedEvent__get_temporary(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineDataChangedEvent *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_temporary(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MediumRegisteredEvent__get_medium_id(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MediumRegisteredEvent *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_medium_id(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MediumRegisteredEvent__get_medium_type(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MediumRegisteredEvent *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_medium_type(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cDeviceType));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MediumRegisteredEvent__get_registered(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MediumRegisteredEvent *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_registered(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MachineRegisteredEvent__get_registered(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MachineRegisteredEvent *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_registered(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SessionStateChangedEvent__get_state(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SessionStateChangedEvent *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_state(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cSessionState));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestPropertyChangedEvent__get_name(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestPropertyChangedEvent *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_name(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestPropertyChangedEvent__get_value(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestPropertyChangedEvent *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_value(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestPropertyChangedEvent__get_flags(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestPropertyChangedEvent *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_flags(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SnapshotEvent__get_snapshot_id(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SnapshotEvent *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_snapshot_id(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MousePointerShapeChangedEvent__get_visible(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MousePointerShapeChangedEvent *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_visible(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MousePointerShapeChangedEvent__get_alpha(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MousePointerShapeChangedEvent *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_alpha(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MousePointerShapeChangedEvent__get_xhot(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MousePointerShapeChangedEvent *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_xhot(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MousePointerShapeChangedEvent__get_yhot(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MousePointerShapeChangedEvent *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_yhot(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MousePointerShapeChangedEvent__get_width(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MousePointerShapeChangedEvent *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_width(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MousePointerShapeChangedEvent__get_height(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MousePointerShapeChangedEvent *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_height(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MousePointerShapeChangedEvent__get_shape(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MousePointerShapeChangedEvent *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_shape(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_blob(v1_size, v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MouseCapabilityChangedEvent__get_supports_absolute(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MouseCapabilityChangedEvent *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_supports_absolute(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MouseCapabilityChangedEvent__get_supports_relative(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MouseCapabilityChangedEvent *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_supports_relative(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MouseCapabilityChangedEvent__get_needs_host_cursor(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MouseCapabilityChangedEvent *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_needs_host_cursor(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE KeyboardLedsChangedEvent__get_num_lock(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct KeyboardLedsChangedEvent *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_num_lock(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE KeyboardLedsChangedEvent__get_caps_lock(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct KeyboardLedsChangedEvent *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_caps_lock(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE KeyboardLedsChangedEvent__get_scroll_lock(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct KeyboardLedsChangedEvent *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_scroll_lock(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE StateChangedEvent__get_state(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct StateChangedEvent *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_state(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cMachineState));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NetworkAdapterChangedEvent__get_network_adapter(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NetworkAdapterChangedEvent *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_network_adapter(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cNetworkAdapter));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SerialPortChangedEvent__get_serial_port(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SerialPortChangedEvent *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_serial_port(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cSerialPort));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ParallelPortChangedEvent__get_parallel_port(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ParallelPortChangedEvent *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_parallel_port(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cParallelPort));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE MediumChangedEvent__get_medium_attachment(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct MediumChangedEvent *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_medium_attachment(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cMediumAttachment));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ClipboardModeChangedEvent__get_clipboard_mode(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ClipboardModeChangedEvent *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_clipboard_mode(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cClipboardMode));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE DragAndDropModeChangedEvent__get_drag_and_drop_mode(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct DragAndDropModeChangedEvent *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_drag_and_drop_mode(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cDragAndDropMode));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE CPUChangedEvent__get_cpu(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct CPUChangedEvent *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_cpu(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE CPUChangedEvent__get_add(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct CPUChangedEvent *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_add(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE CPUExecutionCapChangedEvent__get_execution_cap(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct CPUExecutionCapChangedEvent *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_execution_cap(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestKeyboardEvent__get_scancodes(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestKeyboardEvent *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_scancodes(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_int32(v1_size, v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestMouseEvent__get_absolute(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestMouseEvent *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_absolute(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestMouseEvent__get_x(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestMouseEvent *vtbl = obj->vtbl;
  int32_t v1;
  NS_CHECK(vtbl->get_x(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestMouseEvent__get_y(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestMouseEvent *vtbl = obj->vtbl;
  int32_t v1;
  NS_CHECK(vtbl->get_y(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestMouseEvent__get_z(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestMouseEvent *vtbl = obj->vtbl;
  int32_t v1;
  NS_CHECK(vtbl->get_z(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestMouseEvent__get_w(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestMouseEvent *vtbl = obj->vtbl;
  int32_t v1;
  NS_CHECK(vtbl->get_w(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestMouseEvent__get_buttons(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestMouseEvent *vtbl = obj->vtbl;
  int32_t v1;
  NS_CHECK(vtbl->get_buttons(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE USBDeviceStateChangedEvent__get_device(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct USBDeviceStateChangedEvent *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_device(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cUSBDevice));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE USBDeviceStateChangedEvent__get_attached(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct USBDeviceStateChangedEvent *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_attached(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE USBDeviceStateChangedEvent__get_error(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct USBDeviceStateChangedEvent *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_error(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cVirtualBoxErrorInfo));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE SharedFolderChangedEvent__get_scope(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct SharedFolderChangedEvent *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_scope(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cScope));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE RuntimeErrorEvent__get_fatal(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct RuntimeErrorEvent *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_fatal(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE RuntimeErrorEvent__get_id(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct RuntimeErrorEvent *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_id(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE RuntimeErrorEvent__get_message(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct RuntimeErrorEvent *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_message(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE EventSourceChangedEvent__get_listener(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct EventSourceChangedEvent *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_listener(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cEventListener));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE EventSourceChangedEvent__get_add(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct EventSourceChangedEvent *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_add(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ExtraDataChangedEvent__get_machine_id(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ExtraDataChangedEvent *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_machine_id(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ExtraDataChangedEvent__get_key(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ExtraDataChangedEvent *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_key(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ExtraDataChangedEvent__get_value(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ExtraDataChangedEvent *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_value(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VetoEvent__add_veto(VALUE self, VALUE i0) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VetoEvent *vtbl = obj->vtbl;
  wstring_t v1;
  i0 = prepare_wstring(i0);
  extract_wstring(i0, &v1);
  NS_CHECK(vtbl->add_veto(obj, v1));
  res = rb_ary_new();
  return res;
}
static VALUE VetoEvent__is_vetoed(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VetoEvent *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->is_vetoed(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VetoEvent__get_vetos(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VetoEvent *vtbl = obj->vtbl;
  uint32_t v1_size;
  void * v1;
  NS_CHECK(vtbl->get_vetos(obj, &v1_size, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_array_wstring(v1_size, v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ExtraDataCanChangeEvent__get_machine_id(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ExtraDataCanChangeEvent *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_machine_id(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ExtraDataCanChangeEvent__get_key(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ExtraDataCanChangeEvent *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_key(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ExtraDataCanChangeEvent__get_value(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ExtraDataCanChangeEvent *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_value(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE ShowWindowEvent__get_win_id(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct ShowWindowEvent *vtbl = obj->vtbl;
  int64_t v1;
  NS_CHECK(vtbl->get_win_id(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int64(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NATRedirectEvent__get_slot(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NATRedirectEvent *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_slot(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NATRedirectEvent__get_remove(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NATRedirectEvent *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_remove(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NATRedirectEvent__get_name(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NATRedirectEvent *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_name(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NATRedirectEvent__get_proto(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NATRedirectEvent *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_proto(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cNATProtocol));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NATRedirectEvent__get_host_ip(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NATRedirectEvent *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_host_ip(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NATRedirectEvent__get_host_port(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NATRedirectEvent *vtbl = obj->vtbl;
  int32_t v1;
  NS_CHECK(vtbl->get_host_port(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NATRedirectEvent__get_guest_ip(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NATRedirectEvent *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_guest_ip(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE NATRedirectEvent__get_guest_port(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct NATRedirectEvent *vtbl = obj->vtbl;
  int32_t v1;
  NS_CHECK(vtbl->get_guest_port(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_int32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE HostPCIDevicePlugEvent__get_plugged(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct HostPCIDevicePlugEvent *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_plugged(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE HostPCIDevicePlugEvent__get_success(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct HostPCIDevicePlugEvent *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_success(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE HostPCIDevicePlugEvent__get_attachment(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct HostPCIDevicePlugEvent *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_attachment(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cPCIDeviceAttachment));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE HostPCIDevicePlugEvent__get_message(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct HostPCIDevicePlugEvent *vtbl = obj->vtbl;
  wstring_t v1;
  NS_CHECK(vtbl->get_message(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_wstring(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE VBoxSVCAvailabilityChangedEvent__get_available(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct VBoxSVCAvailabilityChangedEvent *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_available(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE BandwidthGroupChangedEvent__get_bandwidth_group(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct BandwidthGroupChangedEvent *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_bandwidth_group(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cBandwidthGroup));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestMonitorChangedEvent__get_change_type(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestMonitorChangedEvent *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_change_type(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_enum(v1, cGuestMonitorChangedEventType));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestMonitorChangedEvent__get_screen_id(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestMonitorChangedEvent *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_screen_id(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestMonitorChangedEvent__get_origin_x(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestMonitorChangedEvent *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_origin_x(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestMonitorChangedEvent__get_origin_y(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestMonitorChangedEvent *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_origin_y(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestMonitorChangedEvent__get_width(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestMonitorChangedEvent *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_width(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE GuestMonitorChangedEvent__get_height(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct GuestMonitorChangedEvent *vtbl = obj->vtbl;
  uint32_t v1;
  NS_CHECK(vtbl->get_height(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_uint32(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE StorageDeviceChangedEvent__get_storage_device(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct StorageDeviceChangedEvent *vtbl = obj->vtbl;
  void * v1;
  NS_CHECK(vtbl->get_storage_device(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_interface(v1, cMediumAttachment));
  res = rb_ary_entry(res, 0);
  return res;
}
static VALUE StorageDeviceChangedEvent__get_removed(VALUE self) {
  VALUE  res      = Qundef;
  struct obj *obj = DATA_PTR(self);
  struct StorageDeviceChangedEvent *vtbl = obj->vtbl;
  bool_t v1;
  NS_CHECK(vtbl->get_removed(obj, &v1));
  res = rb_ary_new();
  rb_ary_push(res, convert_bool(v1));
  res = rb_ary_entry(res, 0);
  return res;
}
static void comclass_init(VALUE under) {
  {
    iid_t iid  = {0x00000000, 0x0000, 0x0000, {0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46}};
    VALUE c    = cNSISupports
      = rb_define_class_under(under, "NSISupports", cAbstractInterface);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
  }
  {
    iid_t iid  = {0xf3a8d3b4, 0xc424, 0x4edc, {0x8b, 0xf6, 0x89, 0x74, 0xc9, 0x83, 0xba, 0x78}};
    VALUE c    = cNSIException
      = rb_define_class_under(under, "NSIException", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "message", NSIException__get_message, 0);
    rb_define_method(c, "result", NSIException__get_result, 0);
    rb_define_method(c, "name", NSIException__get_name, 0);
    rb_define_method(c, "filename", NSIException__get_filename, 0);
    rb_define_method(c, "line_number", NSIException__get_line_number, 0);
    rb_define_method(c, "column_number", NSIException__get_column_number, 0);
    rb_define_method(c, "location", NSIException__get_location, 0);
    rb_define_method(c, "inner", NSIException__get_inner, 0);
    rb_define_method(c, "data", NSIException__get_data, 0);
    rb_define_method(c, "to_string", NSIException__to_string, 1);
  }
  {
    iid_t iid  = {0x52bd6f5f, 0x1adb, 0x4493, {0x97, 0x5d, 0x58, 0x1a, 0x9c, 0x4b, 0x80, 0x3f}};
    VALUE c    = cSettingsVersion
      = rb_define_class_under(under, "SettingsVersion", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("null"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("v1_0"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("v1_1"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("v1_2"), ULL2NUM(3));
    rb_funcall(h, _bracketseq, 2, SYM("v1_3pre"), ULL2NUM(4));
    rb_funcall(h, _bracketseq, 2, SYM("v1_3"), ULL2NUM(5));
    rb_funcall(h, _bracketseq, 2, SYM("v1_4"), ULL2NUM(6));
    rb_funcall(h, _bracketseq, 2, SYM("v1_5"), ULL2NUM(7));
    rb_funcall(h, _bracketseq, 2, SYM("v1_6"), ULL2NUM(8));
    rb_funcall(h, _bracketseq, 2, SYM("v1_7"), ULL2NUM(9));
    rb_funcall(h, _bracketseq, 2, SYM("v1_8"), ULL2NUM(10));
    rb_funcall(h, _bracketseq, 2, SYM("v1_9"), ULL2NUM(11));
    rb_funcall(h, _bracketseq, 2, SYM("v1_10"), ULL2NUM(12));
    rb_funcall(h, _bracketseq, 2, SYM("v1_11"), ULL2NUM(13));
    rb_funcall(h, _bracketseq, 2, SYM("v1_12"), ULL2NUM(14));
    rb_funcall(h, _bracketseq, 2, SYM("v1_13"), ULL2NUM(15));
    rb_funcall(h, _bracketseq, 2, SYM("future"), ULL2NUM(99999));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x1da0007c, 0xddf7, 0x4be8, {0xbc, 0xac, 0xd8, 0x4a, 0x15, 0x58, 0x78, 0x5f}};
    VALUE c    = cAccessMode
      = rb_define_class_under(under, "AccessMode", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("read_only"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("read_write"), ULL2NUM(2));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0xec6c6a9e, 0x113d, 0x4ff4, {0xb4, 0x4f, 0x0b, 0x69, 0xf2, 0x1c, 0x97, 0xfe}};
    VALUE c    = cMachineState
      = rb_define_class_under(under, "MachineState", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("null"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("powered_off"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("saved"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("teleported"), ULL2NUM(3));
    rb_funcall(h, _bracketseq, 2, SYM("aborted"), ULL2NUM(4));
    rb_funcall(h, _bracketseq, 2, SYM("running"), ULL2NUM(5));
    rb_funcall(h, _bracketseq, 2, SYM("paused"), ULL2NUM(6));
    rb_funcall(h, _bracketseq, 2, SYM("stuck"), ULL2NUM(7));
    rb_funcall(h, _bracketseq, 2, SYM("teleporting"), ULL2NUM(8));
    rb_funcall(h, _bracketseq, 2, SYM("live_snapshotting"), ULL2NUM(9));
    rb_funcall(h, _bracketseq, 2, SYM("starting"), ULL2NUM(10));
    rb_funcall(h, _bracketseq, 2, SYM("stopping"), ULL2NUM(11));
    rb_funcall(h, _bracketseq, 2, SYM("saving"), ULL2NUM(12));
    rb_funcall(h, _bracketseq, 2, SYM("restoring"), ULL2NUM(13));
    rb_funcall(h, _bracketseq, 2, SYM("teleporting_paused_vm"), ULL2NUM(14));
    rb_funcall(h, _bracketseq, 2, SYM("teleporting_in"), ULL2NUM(15));
    rb_funcall(h, _bracketseq, 2, SYM("fault_tolerant_syncing"), ULL2NUM(16));
    rb_funcall(h, _bracketseq, 2, SYM("deleting_snapshot_online"), ULL2NUM(17));
    rb_funcall(h, _bracketseq, 2, SYM("deleting_snapshot_paused"), ULL2NUM(18));
    rb_funcall(h, _bracketseq, 2, SYM("restoring_snapshot"), ULL2NUM(19));
    rb_funcall(h, _bracketseq, 2, SYM("deleting_snapshot"), ULL2NUM(20));
    rb_funcall(h, _bracketseq, 2, SYM("setting_up"), ULL2NUM(21));
    rb_funcall(h, _bracketseq, 2, SYM("first_online"), ULL2NUM(5));
    rb_funcall(h, _bracketseq, 2, SYM("last_online"), ULL2NUM(18));
    rb_funcall(h, _bracketseq, 2, SYM("first_transient"), ULL2NUM(8));
    rb_funcall(h, _bracketseq, 2, SYM("last_transient"), ULL2NUM(21));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0xcf2700c0, 0xea4b, 0x47ae, {0x97, 0x25, 0x78, 0x10, 0x11, 0x4b, 0x94, 0xd8}};
    VALUE c    = cSessionState
      = rb_define_class_under(under, "SessionState", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("null"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("unlocked"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("locked"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("spawning"), ULL2NUM(3));
    rb_funcall(h, _bracketseq, 2, SYM("unlocking"), ULL2NUM(4));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x24d356a6, 0x2f45, 0x4abd, {0xb9, 0x77, 0x1c, 0xbe, 0x9c, 0x47, 0x01, 0xf5}};
    VALUE c    = cCPUPropertyType
      = rb_define_class_under(under, "CPUPropertyType", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("null"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("pae"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("synthetic"), ULL2NUM(2));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0xce81dfdd, 0xd2b8, 0x4a90, {0xbb, 0xea, 0x40, 0xee, 0x8b, 0x7f, 0xfc, 0xee}};
    VALUE c    = cHWVirtExPropertyType
      = rb_define_class_under(under, "HWVirtExPropertyType", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("null"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("enabled"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("exclusive"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("vpid"), ULL2NUM(3));
    rb_funcall(h, _bracketseq, 2, SYM("nested_paging"), ULL2NUM(4));
    rb_funcall(h, _bracketseq, 2, SYM("large_pages"), ULL2NUM(5));
    rb_funcall(h, _bracketseq, 2, SYM("force"), ULL2NUM(6));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x5124f7ec, 0x6b67, 0x493c, {0x9d, 0xee, 0xee, 0x45, 0xa4, 0x41, 0x14, 0xe1}};
    VALUE c    = cFaultToleranceState
      = rb_define_class_under(under, "FaultToleranceState", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("inactive"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("master"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("standby"), ULL2NUM(3));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x168a6a8e, 0x12fd, 0x4878, {0xa1, 0xf9, 0x38, 0xa7, 0x50, 0xa5, 0x60, 0x89}};
    VALUE c    = cLockType
      = rb_define_class_under(under, "LockType", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("write"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("shared"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("vm"), ULL2NUM(3));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0xA13C02CB, 0x0C2C, 0x421E, {0x83, 0x17, 0xAC, 0x0E, 0x8A, 0xAA, 0x15, 0x3A}};
    VALUE c    = cSessionType
      = rb_define_class_under(under, "SessionType", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("null"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("write_lock"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("remote"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("shared"), ULL2NUM(3));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x6d9420f7, 0x0b56, 0x4636, {0x99, 0xf9, 0x73, 0x46, 0xf1, 0xb0, 0x1e, 0x57}};
    VALUE c    = cDeviceType
      = rb_define_class_under(under, "DeviceType", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("null"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("floppy"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("dvd"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("hard_disk"), ULL2NUM(3));
    rb_funcall(h, _bracketseq, 2, SYM("network"), ULL2NUM(4));
    rb_funcall(h, _bracketseq, 2, SYM("usb"), ULL2NUM(5));
    rb_funcall(h, _bracketseq, 2, SYM("shared_folder"), ULL2NUM(6));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x6FC8AEAA, 0x130A, 0x4eb5, {0x89, 0x54, 0x3F, 0x92, 0x14, 0x22, 0xD7, 0x07}};
    VALUE c    = cDeviceActivity
      = rb_define_class_under(under, "DeviceActivity", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("null"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("idle"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("reading"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("writing"), ULL2NUM(3));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x33364716, 0x4008, 0x4701, {0x8f, 0x14, 0xbe, 0x0f, 0xa3, 0xd6, 0x29, 0x50}};
    VALUE c    = cClipboardMode
      = rb_define_class_under(under, "ClipboardMode", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("disabled"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("host_to_guest"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("guest_to_host"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("bidirectional"), ULL2NUM(3));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0xb618ea0e, 0xb6fb, 0x4f8d, {0x97, 0xf7, 0x5e, 0x23, 0x7e, 0x49, 0xb5, 0x47}};
    VALUE c    = cDragAndDropMode
      = rb_define_class_under(under, "DragAndDropMode", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("disabled"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("host_to_guest"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("guest_to_host"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("bidirectional"), ULL2NUM(3));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x7c91096e, 0x499e, 0x4eca, {0x9f, 0x9b, 0x90, 0x01, 0x43, 0x8d, 0x78, 0x55}};
    VALUE c    = cScope
      = rb_define_class_under(under, "Scope", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("global"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("machine"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("session"), ULL2NUM(2));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0xae4fb9f7, 0x29d2, 0x45b4, {0xb2, 0xc7, 0xd5, 0x79, 0x60, 0x31, 0x35, 0xd5}};
    VALUE c    = cBIOSBootMenuMode
      = rb_define_class_under(under, "BIOSBootMenuMode", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("disabled"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("menu_only"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("message_and_menu"), ULL2NUM(2));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x64c38e6b, 0x8bcf, 0x45ad, {0xac, 0x03, 0x9b, 0x40, 0x62, 0x87, 0xc5, 0xbf}};
    VALUE c    = cProcessorFeature
      = rb_define_class_under(under, "ProcessorFeature", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("hw_virt_ex"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("pae"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("long_mode"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("nested_paging"), ULL2NUM(3));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0xb903f264, 0xc230, 0x483e, {0xac, 0x74, 0x2b, 0x37, 0xce, 0x60, 0xd3, 0x71}};
    VALUE c    = cFirmwareType
      = rb_define_class_under(under, "FirmwareType", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("bios"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("efi"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("efi32"), ULL2NUM(3));
    rb_funcall(h, _bracketseq, 2, SYM("efi64"), ULL2NUM(4));
    rb_funcall(h, _bracketseq, 2, SYM("efidual"), ULL2NUM(5));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0xe44b2f7b, 0x72ba, 0x44fb, {0x9e, 0x53, 0x21, 0x86, 0x01, 0x4f, 0x0d, 0x17}};
    VALUE c    = cPointingHIDType
      = rb_define_class_under(under, "PointingHIDType", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("none"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("ps2_mouse"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("usb_mouse"), ULL2NUM(3));
    rb_funcall(h, _bracketseq, 2, SYM("usb_tablet"), ULL2NUM(4));
    rb_funcall(h, _bracketseq, 2, SYM("combo_mouse"), ULL2NUM(5));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x383e43d7, 0x5c7c, 0x4ec8, {0x9c, 0xb8, 0xed, 0xa1, 0xbc, 0xcd, 0x66, 0x99}};
    VALUE c    = cKeyboardHIDType
      = rb_define_class_under(under, "KeyboardHIDType", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("none"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("ps2_keyboard"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("usb_keyboard"), ULL2NUM(3));
    rb_funcall(h, _bracketseq, 2, SYM("combo_keyboard"), ULL2NUM(4));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x813999ba, 0xb949, 0x48a8, {0x92, 0x30, 0xaa, 0xdc, 0x62, 0x85, 0xe2, 0xf2}};
    VALUE c    = cVFSType
      = rb_define_class_under(under, "VFSType", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("file"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("cloud"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("s3"), ULL2NUM(3));
    rb_funcall(h, _bracketseq, 2, SYM("web_dav"), ULL2NUM(4));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x714333cd, 0x44e2, 0x415f, {0xa2, 0x45, 0xd3, 0x78, 0xfa, 0x9b, 0x12, 0x42}};
    VALUE c    = cVFSFileType
      = rb_define_class_under(under, "VFSFileType", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("unknown"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("fifo"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("dev_char"), ULL2NUM(3));
    rb_funcall(h, _bracketseq, 2, SYM("directory"), ULL2NUM(4));
    rb_funcall(h, _bracketseq, 2, SYM("dev_block"), ULL2NUM(5));
    rb_funcall(h, _bracketseq, 2, SYM("file"), ULL2NUM(6));
    rb_funcall(h, _bracketseq, 2, SYM("sym_link"), ULL2NUM(7));
    rb_funcall(h, _bracketseq, 2, SYM("socket"), ULL2NUM(8));
    rb_funcall(h, _bracketseq, 2, SYM("white_out"), ULL2NUM(9));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x0a981523, 0x3b20, 0x4004, {0x8e, 0xe3, 0xdf, 0xd3, 0x22, 0x20, 0x2a, 0xce}};
    VALUE c    = cImportOptions
      = rb_define_class_under(under, "ImportOptions", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("keep_all_macs"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("keep_nat_macs"), ULL2NUM(2));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x303c0900, 0xa746, 0x4612, {0x8c, 0x67, 0x79, 0x00, 0x3e, 0x91, 0xf4, 0x59}};
    VALUE c    = cVirtualSystemDescriptionType
      = rb_define_class_under(under, "VirtualSystemDescriptionType", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("ignore"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("os"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("name"), ULL2NUM(3));
    rb_funcall(h, _bracketseq, 2, SYM("product"), ULL2NUM(4));
    rb_funcall(h, _bracketseq, 2, SYM("vendor"), ULL2NUM(5));
    rb_funcall(h, _bracketseq, 2, SYM("version"), ULL2NUM(6));
    rb_funcall(h, _bracketseq, 2, SYM("product_url"), ULL2NUM(7));
    rb_funcall(h, _bracketseq, 2, SYM("vendor_url"), ULL2NUM(8));
    rb_funcall(h, _bracketseq, 2, SYM("description"), ULL2NUM(9));
    rb_funcall(h, _bracketseq, 2, SYM("license"), ULL2NUM(10));
    rb_funcall(h, _bracketseq, 2, SYM("miscellaneous"), ULL2NUM(11));
    rb_funcall(h, _bracketseq, 2, SYM("cpu"), ULL2NUM(12));
    rb_funcall(h, _bracketseq, 2, SYM("memory"), ULL2NUM(13));
    rb_funcall(h, _bracketseq, 2, SYM("hard_disk_controller_ide"), ULL2NUM(14));
    rb_funcall(h, _bracketseq, 2, SYM("hard_disk_controller_sata"), ULL2NUM(15));
    rb_funcall(h, _bracketseq, 2, SYM("hard_disk_controller_scsi"), ULL2NUM(16));
    rb_funcall(h, _bracketseq, 2, SYM("hard_disk_controller_sas"), ULL2NUM(17));
    rb_funcall(h, _bracketseq, 2, SYM("hard_disk_image"), ULL2NUM(18));
    rb_funcall(h, _bracketseq, 2, SYM("floppy"), ULL2NUM(19));
    rb_funcall(h, _bracketseq, 2, SYM("cdrom"), ULL2NUM(20));
    rb_funcall(h, _bracketseq, 2, SYM("network_adapter"), ULL2NUM(21));
    rb_funcall(h, _bracketseq, 2, SYM("usb_controller"), ULL2NUM(22));
    rb_funcall(h, _bracketseq, 2, SYM("sound_card"), ULL2NUM(23));
    rb_funcall(h, _bracketseq, 2, SYM("settings_file"), ULL2NUM(24));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x56d9403f, 0x3425, 0x4118, {0x99, 0x19, 0x36, 0xf2, 0xa9, 0xb8, 0xc7, 0x7c}};
    VALUE c    = cVirtualSystemDescriptionValueType
      = rb_define_class_under(under, "VirtualSystemDescriptionValueType", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("reference"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("original"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("auto"), ULL2NUM(3));
    rb_funcall(h, _bracketseq, 2, SYM("extra_config"), ULL2NUM(4));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x67897c50, 0x7cca, 0x47a9, {0x83, 0xf6, 0xce, 0x8f, 0xd8, 0xeb, 0x54, 0x41}};
    VALUE c    = cCleanupMode
      = rb_define_class_under(under, "CleanupMode", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("unregister_only"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("detach_all_return_none"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("detach_all_return_hard_disks_only"), ULL2NUM(3));
    rb_funcall(h, _bracketseq, 2, SYM("full"), ULL2NUM(4));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0xA7A159FE, 0x5096, 0x4B8D, {0x8C, 0x3C, 0xD0, 0x33, 0xCB, 0x0B, 0x35, 0xA8}};
    VALUE c    = cCloneMode
      = rb_define_class_under(under, "CloneMode", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("machine_state"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("machine_and_child_states"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("all_states"), ULL2NUM(3));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x22243f8e, 0x96ab, 0x497c, {0x8c, 0xf0, 0xf4, 0x0a, 0x56, 0x6c, 0x63, 0x0b}};
    VALUE c    = cCloneOptions
      = rb_define_class_under(under, "CloneOptions", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("link"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("keep_all_macs"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("keep_nat_macs"), ULL2NUM(3));
    rb_funcall(h, _bracketseq, 2, SYM("keep_disk_names"), ULL2NUM(4));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x6bb96740, 0xcf34, 0x470d, {0xaa, 0xb2, 0x2c, 0xd4, 0x8e, 0xa2, 0xe1, 0x0e}};
    VALUE c    = cAutostopType
      = rb_define_class_under(under, "AutostopType", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("disabled"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("save_state"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("power_off"), ULL2NUM(3));
    rb_funcall(h, _bracketseq, 2, SYM("acpi_shutdown"), ULL2NUM(4));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x1aa54aaf, 0x2497, 0x45a2, {0xbf, 0xb1, 0x8e, 0xb2, 0x25, 0xe9, 0x3d, 0x5b}};
    VALUE c    = cHostNetworkInterfaceMediumType
      = rb_define_class_under(under, "HostNetworkInterfaceMediumType", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("unknown"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("ethernet"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("ppp"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("slip"), ULL2NUM(3));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0xCC474A69, 0x2710, 0x434B, {0x8D, 0x99, 0xC3, 0x8E, 0x5D, 0x5A, 0x6F, 0x41}};
    VALUE c    = cHostNetworkInterfaceStatus
      = rb_define_class_under(under, "HostNetworkInterfaceStatus", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("unknown"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("up"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("down"), ULL2NUM(2));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x67431b00, 0x9946, 0x48a2, {0xbc, 0x02, 0xb2, 0x5c, 0x59, 0x19, 0xf4, 0xf3}};
    VALUE c    = cHostNetworkInterfaceType
      = rb_define_class_under(under, "HostNetworkInterfaceType", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("bridged"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("host_only"), ULL2NUM(2));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x98f7f957, 0x89fb, 0x49b6, {0xa3, 0xb1, 0x31, 0xe3, 0x28, 0x5e, 0xb1, 0xd8}};
    VALUE c    = cAdditionsFacilityType
      = rb_define_class_under(under, "AdditionsFacilityType", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("none"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("vbox_guest_driver"), ULL2NUM(20));
    rb_funcall(h, _bracketseq, 2, SYM("auto_logon"), ULL2NUM(90));
    rb_funcall(h, _bracketseq, 2, SYM("vbox_service"), ULL2NUM(100));
    rb_funcall(h, _bracketseq, 2, SYM("vbox_tray_client"), ULL2NUM(101));
    rb_funcall(h, _bracketseq, 2, SYM("seamless"), ULL2NUM(1000));
    rb_funcall(h, _bracketseq, 2, SYM("graphics"), ULL2NUM(1100));
    rb_funcall(h, _bracketseq, 2, SYM("all"), ULL2NUM(2147483646));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x446451b2, 0xc88d, 0x4e5d, {0x84, 0xc9, 0x91, 0xbc, 0x7f, 0x53, 0x3f, 0x5f}};
    VALUE c    = cAdditionsFacilityClass
      = rb_define_class_under(under, "AdditionsFacilityClass", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("none"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("driver"), ULL2NUM(10));
    rb_funcall(h, _bracketseq, 2, SYM("service"), ULL2NUM(30));
    rb_funcall(h, _bracketseq, 2, SYM("program"), ULL2NUM(50));
    rb_funcall(h, _bracketseq, 2, SYM("feature"), ULL2NUM(100));
    rb_funcall(h, _bracketseq, 2, SYM("third_party"), ULL2NUM(999));
    rb_funcall(h, _bracketseq, 2, SYM("all"), ULL2NUM(2147483646));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0xce06f9e1, 0x394e, 0x4fe9, {0x93, 0x68, 0x5a, 0x88, 0xc5, 0x67, 0xdb, 0xde}};
    VALUE c    = cAdditionsFacilityStatus
      = rb_define_class_under(under, "AdditionsFacilityStatus", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("inactive"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("paused"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("pre_init"), ULL2NUM(20));
    rb_funcall(h, _bracketseq, 2, SYM("init"), ULL2NUM(30));
    rb_funcall(h, _bracketseq, 2, SYM("active"), ULL2NUM(50));
    rb_funcall(h, _bracketseq, 2, SYM("terminating"), ULL2NUM(100));
    rb_funcall(h, _bracketseq, 2, SYM("terminated"), ULL2NUM(101));
    rb_funcall(h, _bracketseq, 2, SYM("failed"), ULL2NUM(800));
    rb_funcall(h, _bracketseq, 2, SYM("unknown"), ULL2NUM(999));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0xa25417ee, 0xa9dd, 0x4f5b, {0xb0, 0xdc, 0x37, 0x78, 0x60, 0x08, 0x77, 0x54}};
    VALUE c    = cAdditionsRunLevelType
      = rb_define_class_under(under, "AdditionsRunLevelType", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("none"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("system"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("userland"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("desktop"), ULL2NUM(3));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x726a818d, 0x18d6, 0x4389, {0x94, 0xe8, 0x3e, 0x9e, 0x68, 0x26, 0x17, 0x1a}};
    VALUE c    = cAdditionsUpdateFlag
      = rb_define_class_under(under, "AdditionsUpdateFlag", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("none"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("wait_for_update_start_only"), ULL2NUM(1));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x1b73f4f3, 0x3515, 0x4073, {0xa5, 0x06, 0x76, 0x87, 0x8d, 0x9e, 0x25, 0x41}};
    VALUE c    = cFileSeekType
      = rb_define_class_under(under, "FileSeekType", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("set"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("current"), ULL2NUM(1));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x5d38c1dd, 0x2604, 0x4ddf, {0x92, 0xe5, 0x0c, 0x0c, 0xdd, 0x3b, 0xdb, 0xd5}};
    VALUE c    = cProcessInputFlag
      = rb_define_class_under(under, "ProcessInputFlag", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("none"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("end_of_file"), ULL2NUM(1));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x9979e85a, 0x52bb, 0x40b7, {0x87, 0x0c, 0x57, 0x11, 0x5e, 0x27, 0xe0, 0xf1}};
    VALUE c    = cProcessOutputFlag
      = rb_define_class_under(under, "ProcessOutputFlag", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("none"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("std_err"), ULL2NUM(1));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x23b550c7, 0x78e1, 0x437e, {0x98, 0xf0, 0x65, 0xfd, 0x97, 0x57, 0xbc, 0xd2}};
    VALUE c    = cProcessWaitForFlag
      = rb_define_class_under(under, "ProcessWaitForFlag", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("none"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("start"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("terminate"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("std_in"), ULL2NUM(4));
    rb_funcall(h, _bracketseq, 2, SYM("std_out"), ULL2NUM(8));
    rb_funcall(h, _bracketseq, 2, SYM("std_err"), ULL2NUM(16));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x40719cbe, 0xf192, 0x4fe9, {0xa2, 0x31, 0x66, 0x97, 0xb3, 0xc8, 0xe2, 0xb4}};
    VALUE c    = cProcessWaitResult
      = rb_define_class_under(under, "ProcessWaitResult", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("none"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("start"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("terminate"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("status"), ULL2NUM(3));
    rb_funcall(h, _bracketseq, 2, SYM("error"), ULL2NUM(4));
    rb_funcall(h, _bracketseq, 2, SYM("timeout"), ULL2NUM(5));
    rb_funcall(h, _bracketseq, 2, SYM("std_in"), ULL2NUM(6));
    rb_funcall(h, _bracketseq, 2, SYM("std_out"), ULL2NUM(7));
    rb_funcall(h, _bracketseq, 2, SYM("std_err"), ULL2NUM(8));
    rb_funcall(h, _bracketseq, 2, SYM("wait_flag_not_supported"), ULL2NUM(9));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x23f79fdf, 0x738a, 0x493d, {0xb8, 0x0b, 0x42, 0xd6, 0x07, 0xc9, 0xb9, 0x16}};
    VALUE c    = cCopyFileFlag
      = rb_define_class_under(under, "CopyFileFlag", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("none"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("recursive"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("update"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("follow_links"), ULL2NUM(4));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0xbd721b0e, 0xced5, 0x4f79, {0xb3, 0x68, 0x24, 0x98, 0x97, 0xc3, 0x2a, 0x36}};
    VALUE c    = cDirectoryCreateFlag
      = rb_define_class_under(under, "DirectoryCreateFlag", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("none"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("parents"), ULL2NUM(1));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x455aabf0, 0x7692, 0x48f6, {0x90, 0x61, 0xf2, 0x15, 0x79, 0xb6, 0x57, 0x69}};
    VALUE c    = cDirectoryRemoveRecFlag
      = rb_define_class_under(under, "DirectoryRemoveRecFlag", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("none"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("content_and_dir"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("content_only"), ULL2NUM(2));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0xf3baa09f, 0xc758, 0x453d, {0xb9, 0x1c, 0xc7, 0x78, 0x7d, 0x76, 0x35, 0x1d}};
    VALUE c    = cPathRenameFlag
      = rb_define_class_under(under, "PathRenameFlag", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("none"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("no_replace"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("replace"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("no_symlinks"), ULL2NUM(4));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x35192799, 0xbfde, 0x405d, {0x9b, 0xea, 0xc7, 0x35, 0xab, 0x99, 0x98, 0xe4}};
    VALUE c    = cProcessCreateFlag
      = rb_define_class_under(under, "ProcessCreateFlag", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("none"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("wait_for_process_start_only"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("ignore_orphaned_processes"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("hidden"), ULL2NUM(4));
    rb_funcall(h, _bracketseq, 2, SYM("no_profile"), ULL2NUM(8));
    rb_funcall(h, _bracketseq, 2, SYM("wait_for_std_out"), ULL2NUM(16));
    rb_funcall(h, _bracketseq, 2, SYM("wait_for_std_err"), ULL2NUM(32));
    rb_funcall(h, _bracketseq, 2, SYM("expand_arguments"), ULL2NUM(64));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0xee8cac50, 0xe232, 0x49fe, {0x80, 0x6b, 0xd1, 0x21, 0x4d, 0x9c, 0x2e, 0x49}};
    VALUE c    = cProcessPriority
      = rb_define_class_under(under, "ProcessPriority", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("invalid"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("default"), ULL2NUM(1));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x37794668, 0xf8f1, 0x4714, {0x98, 0xa5, 0x6f, 0x8f, 0xa2, 0xed, 0x01, 0x18}};
    VALUE c    = cSymlinkType
      = rb_define_class_under(under, "SymlinkType", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("unknown"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("directory"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("file"), ULL2NUM(2));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0xb7fe2b9d, 0x790e, 0x4b25, {0x8a, 0xdf, 0x1c, 0xa3, 0x30, 0x26, 0x93, 0x1f}};
    VALUE c    = cSymlinkReadFlag
      = rb_define_class_under(under, "SymlinkReadFlag", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("none"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("no_symlinks"), ULL2NUM(1));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x4d52368f, 0x5b48, 0x4bfe, {0xb4, 0x86, 0xac, 0xf8, 0x91, 0x39, 0xb5, 0x2f}};
    VALUE c    = cProcessStatus
      = rb_define_class_under(under, "ProcessStatus", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("undefined"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("starting"), ULL2NUM(10));
    rb_funcall(h, _bracketseq, 2, SYM("started"), ULL2NUM(100));
    rb_funcall(h, _bracketseq, 2, SYM("paused"), ULL2NUM(110));
    rb_funcall(h, _bracketseq, 2, SYM("terminating"), ULL2NUM(480));
    rb_funcall(h, _bracketseq, 2, SYM("terminated_normally"), ULL2NUM(500));
    rb_funcall(h, _bracketseq, 2, SYM("terminated_signal"), ULL2NUM(510));
    rb_funcall(h, _bracketseq, 2, SYM("terminated_abnormally"), ULL2NUM(511));
    rb_funcall(h, _bracketseq, 2, SYM("timed_out_killed"), ULL2NUM(512));
    rb_funcall(h, _bracketseq, 2, SYM("timed_out_abnormally"), ULL2NUM(513));
    rb_funcall(h, _bracketseq, 2, SYM("down"), ULL2NUM(600));
    rb_funcall(h, _bracketseq, 2, SYM("error"), ULL2NUM(800));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0xa1ed437c, 0xb3c3, 0x4ca2, {0xb1, 0x9c, 0x42, 0x39, 0xd6, 0x58, 0xd5, 0xe8}};
    VALUE c    = cFsObjType
      = rb_define_class_under(under, "FsObjType", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("undefined"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("fifo"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("dev_char"), ULL2NUM(10));
    rb_funcall(h, _bracketseq, 2, SYM("dev_block"), ULL2NUM(11));
    rb_funcall(h, _bracketseq, 2, SYM("directory"), ULL2NUM(50));
    rb_funcall(h, _bracketseq, 2, SYM("file"), ULL2NUM(80));
    rb_funcall(h, _bracketseq, 2, SYM("symlink"), ULL2NUM(100));
    rb_funcall(h, _bracketseq, 2, SYM("socket"), ULL2NUM(200));
    rb_funcall(h, _bracketseq, 2, SYM("whiteout"), ULL2NUM(400));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x47f3b162, 0xc107, 0x4fcd, {0xbf, 0xa7, 0x54, 0xb8, 0x13, 0x5c, 0x44, 0x1e}};
    VALUE c    = cDragAndDropAction
      = rb_define_class_under(under, "DragAndDropAction", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("ignore"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("copy"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("move"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("link"), ULL2NUM(3));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x5138837a, 0x8fd2, 0x4194, {0xa1, 0xb0, 0x08, 0xf7, 0xbc, 0x39, 0x49, 0xd0}};
    VALUE c    = cDirectoryOpenFlag
      = rb_define_class_under(under, "DirectoryOpenFlag", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("none"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("no_symlinks"), ULL2NUM(1));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0xef41e980, 0xe012, 0x43cd, {0x9d, 0xea, 0x47, 0x9d, 0x4e, 0xf1, 0x4d, 0x13}};
    VALUE c    = cMediumState
      = rb_define_class_under(under, "MediumState", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("not_created"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("created"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("locked_read"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("locked_write"), ULL2NUM(3));
    rb_funcall(h, _bracketseq, 2, SYM("inaccessible"), ULL2NUM(4));
    rb_funcall(h, _bracketseq, 2, SYM("creating"), ULL2NUM(5));
    rb_funcall(h, _bracketseq, 2, SYM("deleting"), ULL2NUM(6));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0xfe663fb5, 0xc244, 0x4e1b, {0x9d, 0x81, 0xc6, 0x28, 0xb4, 0x17, 0xdd, 0x04}};
    VALUE c    = cMediumType
      = rb_define_class_under(under, "MediumType", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("normal"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("immutable"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("writethrough"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("shareable"), ULL2NUM(3));
    rb_funcall(h, _bracketseq, 2, SYM("readonly"), ULL2NUM(4));
    rb_funcall(h, _bracketseq, 2, SYM("multi_attach"), ULL2NUM(5));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x80685b6b, 0xe42f, 0x497d, {0x82, 0x71, 0xe7, 0x7b, 0xf3, 0xc6, 0x1a, 0xda}};
    VALUE c    = cMediumVariant
      = rb_define_class_under(under, "MediumVariant", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("standard"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("vmdk_split2g"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("vmdk_raw_disk"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("vmdk_stream_optimized"), ULL2NUM(4));
    rb_funcall(h, _bracketseq, 2, SYM("vmdk_esx"), ULL2NUM(8));
    rb_funcall(h, _bracketseq, 2, SYM("fixed"), ULL2NUM(65536));
    rb_funcall(h, _bracketseq, 2, SYM("diff"), ULL2NUM(131072));
    rb_funcall(h, _bracketseq, 2, SYM("no_create_dir"), ULL2NUM(1073741824));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0xd90ea51e, 0xa3f1, 0x4a01, {0xbe, 0xb1, 0xc1, 0x72, 0x3c, 0x0d, 0x3b, 0xa7}};
    VALUE c    = cDataType
      = rb_define_class_under(under, "DataType", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("int32"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("int8"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("string"), ULL2NUM(2));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x86884dcf, 0x1d6b, 0x4f1b, {0xb4, 0xbf, 0xf5, 0xaa, 0x44, 0x95, 0x9d, 0x60}};
    VALUE c    = cDataFlags
      = rb_define_class_under(under, "DataFlags", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("none"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("mandatory"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("expert"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("array"), ULL2NUM(4));
    rb_funcall(h, _bracketseq, 2, SYM("flag_mask"), ULL2NUM(7));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x7342ba79, 0x7ce0, 0x4d94, {0x8f, 0x86, 0x5e, 0xd5, 0xa1, 0x85, 0xd9, 0xbd}};
    VALUE c    = cMediumFormatCapabilities
      = rb_define_class_under(under, "MediumFormatCapabilities", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("uuid"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("create_fixed"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("create_dynamic"), ULL2NUM(4));
    rb_funcall(h, _bracketseq, 2, SYM("create_split2g"), ULL2NUM(8));
    rb_funcall(h, _bracketseq, 2, SYM("differencing"), ULL2NUM(16));
    rb_funcall(h, _bracketseq, 2, SYM("asynchronous"), ULL2NUM(32));
    rb_funcall(h, _bracketseq, 2, SYM("file"), ULL2NUM(64));
    rb_funcall(h, _bracketseq, 2, SYM("properties"), ULL2NUM(128));
    rb_funcall(h, _bracketseq, 2, SYM("tcp_networking"), ULL2NUM(256));
    rb_funcall(h, _bracketseq, 2, SYM("vfs"), ULL2NUM(512));
    rb_funcall(h, _bracketseq, 2, SYM("capability_mask"), ULL2NUM(1023));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x9ee094b8, 0xb28a, 0x4d56, {0xa1, 0x66, 0x97, 0x3c, 0xb5, 0x88, 0xd7, 0xf8}};
    VALUE c    = cMouseButtonState
      = rb_define_class_under(under, "MouseButtonState", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("left_button"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("right_button"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("middle_button"), ULL2NUM(4));
    rb_funcall(h, _bracketseq, 2, SYM("wheel_up"), ULL2NUM(8));
    rb_funcall(h, _bracketseq, 2, SYM("wheel_down"), ULL2NUM(16));
    rb_funcall(h, _bracketseq, 2, SYM("x_button1"), ULL2NUM(32));
    rb_funcall(h, _bracketseq, 2, SYM("x_button2"), ULL2NUM(64));
    rb_funcall(h, _bracketseq, 2, SYM("mouse_state_mask"), ULL2NUM(127));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x7acfd5ed, 0x29e3, 0x45e3, {0x81, 0x36, 0x73, 0xc9, 0x22, 0x4f, 0x3d, 0x2d}};
    VALUE c    = cFramebufferPixelFormat
      = rb_define_class_under(under, "FramebufferPixelFormat", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("opaque"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("fourcc_rgb"), ULL2NUM(843204434));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x2ac4bc71, 0x6b82, 0x417a, {0xac, 0xd1, 0xf7, 0x42, 0x6d, 0x25, 0x70, 0xd6}};
    VALUE c    = cNetworkAttachmentType
      = rb_define_class_under(under, "NetworkAttachmentType", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("null"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("nat"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("bridged"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("internal"), ULL2NUM(3));
    rb_funcall(h, _bracketseq, 2, SYM("host_only"), ULL2NUM(4));
    rb_funcall(h, _bracketseq, 2, SYM("generic"), ULL2NUM(5));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x3c2281e4, 0xd952, 0x4e87, {0x8c, 0x7d, 0x24, 0x37, 0x9c, 0xb6, 0xa8, 0x1c}};
    VALUE c    = cNetworkAdapterType
      = rb_define_class_under(under, "NetworkAdapterType", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("null"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("am79c970a"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("am79c973"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("i82540em"), ULL2NUM(3));
    rb_funcall(h, _bracketseq, 2, SYM("i82543gc"), ULL2NUM(4));
    rb_funcall(h, _bracketseq, 2, SYM("i82545em"), ULL2NUM(5));
    rb_funcall(h, _bracketseq, 2, SYM("virtio"), ULL2NUM(6));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0xc963768a, 0x376f, 0x4c85, {0x8d, 0x84, 0xd8, 0xce, 0xd4, 0xb7, 0x26, 0x9e}};
    VALUE c    = cNetworkAdapterPromiscModePolicy
      = rb_define_class_under(under, "NetworkAdapterPromiscModePolicy", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("deny"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("allow_network"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("allow_all"), ULL2NUM(3));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x533b5fe3, 0x0185, 0x4197, {0x86, 0xa7, 0x17, 0xe3, 0x7d, 0xd3, 0x9d, 0x76}};
    VALUE c    = cPortMode
      = rb_define_class_under(under, "PortMode", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("disconnected"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("host_pipe"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("host_device"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("raw_file"), ULL2NUM(3));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0xb99a2e65, 0x67fb, 0x4882, {0x82, 0xfd, 0xf3, 0xe5, 0xe8, 0x19, 0x3a, 0xb4}};
    VALUE c    = cUSBDeviceState
      = rb_define_class_under(under, "USBDeviceState", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("not_supported"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("unavailable"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("busy"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("available"), ULL2NUM(3));
    rb_funcall(h, _bracketseq, 2, SYM("held"), ULL2NUM(4));
    rb_funcall(h, _bracketseq, 2, SYM("captured"), ULL2NUM(5));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0xcbc30a49, 0x2f4e, 0x43b5, {0x9d, 0xa6, 0x12, 0x13, 0x20, 0x47, 0x59, 0x33}};
    VALUE c    = cUSBDeviceFilterAction
      = rb_define_class_under(under, "USBDeviceFilterAction", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("null"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("ignore"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("hold"), ULL2NUM(2));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x4bcc3d73, 0xc2fe, 0x40db, {0xb7, 0x2f, 0x0c, 0x2c, 0xa9, 0xd6, 0x84, 0x96}};
    VALUE c    = cAudioDriverType
      = rb_define_class_under(under, "AudioDriverType", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("null"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("winmm"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("oss"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("alsa"), ULL2NUM(3));
    rb_funcall(h, _bracketseq, 2, SYM("direct_sound"), ULL2NUM(4));
    rb_funcall(h, _bracketseq, 2, SYM("core_audio"), ULL2NUM(5));
    rb_funcall(h, _bracketseq, 2, SYM("mmpm"), ULL2NUM(6));
    rb_funcall(h, _bracketseq, 2, SYM("pulse"), ULL2NUM(7));
    rb_funcall(h, _bracketseq, 2, SYM("sol_audio"), ULL2NUM(8));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x7afd395c, 0x42c3, 0x444e, {0x87, 0x88, 0x3c, 0xe8, 0x02, 0x92, 0xf3, 0x6c}};
    VALUE c    = cAudioControllerType
      = rb_define_class_under(under, "AudioControllerType", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("ac97"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("sb16"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("hda"), ULL2NUM(2));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x7eef6ef6, 0x98c2, 0x4dc2, {0xab, 0x35, 0x10, 0xd2, 0xb2, 0x92, 0x02, 0x8d}};
    VALUE c    = cAuthType
      = rb_define_class_under(under, "AuthType", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("null"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("external"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("guest"), ULL2NUM(2));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0xeee67ab3, 0x668d, 0x4ef5, {0x91, 0xe0, 0x70, 0x25, 0xfe, 0x4a, 0x0d, 0x7a}};
    VALUE c    = cStorageBus
      = rb_define_class_under(under, "StorageBus", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("null"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("ide"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("sata"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("scsi"), ULL2NUM(3));
    rb_funcall(h, _bracketseq, 2, SYM("floppy"), ULL2NUM(4));
    rb_funcall(h, _bracketseq, 2, SYM("sas"), ULL2NUM(5));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x8a412b8a, 0xf43e, 0x4456, {0xbd, 0x37, 0xb4, 0x74, 0xf0, 0x87, 0x9a, 0x58}};
    VALUE c    = cStorageControllerType
      = rb_define_class_under(under, "StorageControllerType", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("null"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("lsi_logic"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("bus_logic"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("intel_ahci"), ULL2NUM(3));
    rb_funcall(h, _bracketseq, 2, SYM("piix3"), ULL2NUM(4));
    rb_funcall(h, _bracketseq, 2, SYM("piix4"), ULL2NUM(5));
    rb_funcall(h, _bracketseq, 2, SYM("ich6"), ULL2NUM(6));
    rb_funcall(h, _bracketseq, 2, SYM("i82078"), ULL2NUM(7));
    rb_funcall(h, _bracketseq, 2, SYM("lsi_logic_sas"), ULL2NUM(8));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x8b4096a8, 0xa7c3, 0x4d3b, {0xbb, 0xb1, 0x05, 0xa0, 0xa5, 0x1e, 0xc3, 0x94}};
    VALUE c    = cChipsetType
      = rb_define_class_under(under, "ChipsetType", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("null"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("piix3"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("ich9"), ULL2NUM(2));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x67772168, 0x50d9, 0x11df, {0x96, 0x69, 0x7f, 0xb7, 0x14, 0xee, 0x4f, 0xa1}};
    VALUE c    = cNATAliasMode
      = rb_define_class_under(under, "NATAliasMode", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("alias_log"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("alias_proxy_only"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("alias_use_same_ports"), ULL2NUM(4));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0xe90164be, 0xeb03, 0x11de, {0x94, 0xaf, 0xff, 0xf9, 0xb1, 0xc1, 0xb1, 0x9f}};
    VALUE c    = cNATProtocol
      = rb_define_class_under(under, "NATProtocol", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("udp"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("tcp"), ULL2NUM(1));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x1d92b67d, 0xdc69, 0x4be9, {0xad, 0x4c, 0x93, 0xa0, 0x1e, 0x1e, 0x0c, 0x8e}};
    VALUE c    = cBandwidthGroupType
      = rb_define_class_under(under, "BandwidthGroupType", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("null"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("disk"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("network"), ULL2NUM(2));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0x0d67e79e, 0xb7b1, 0x4919, {0xaa, 0xb3, 0xb3, 0x68, 0x66, 0x07, 0x55, 0x15}};
    VALUE c    = cVBoxEventType
      = rb_define_class_under(under, "VBoxEventType", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("invalid"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("any"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("vetoable"), ULL2NUM(2));
    rb_funcall(h, _bracketseq, 2, SYM("machine_event"), ULL2NUM(3));
    rb_funcall(h, _bracketseq, 2, SYM("snapshot_event"), ULL2NUM(4));
    rb_funcall(h, _bracketseq, 2, SYM("input_event"), ULL2NUM(5));
    rb_funcall(h, _bracketseq, 2, SYM("last_wildcard"), ULL2NUM(31));
    rb_funcall(h, _bracketseq, 2, SYM("on_machine_state_changed"), ULL2NUM(32));
    rb_funcall(h, _bracketseq, 2, SYM("on_machine_data_changed"), ULL2NUM(33));
    rb_funcall(h, _bracketseq, 2, SYM("on_extra_data_changed"), ULL2NUM(34));
    rb_funcall(h, _bracketseq, 2, SYM("on_extra_data_can_change"), ULL2NUM(35));
    rb_funcall(h, _bracketseq, 2, SYM("on_medium_registered"), ULL2NUM(36));
    rb_funcall(h, _bracketseq, 2, SYM("on_machine_registered"), ULL2NUM(37));
    rb_funcall(h, _bracketseq, 2, SYM("on_session_state_changed"), ULL2NUM(38));
    rb_funcall(h, _bracketseq, 2, SYM("on_snapshot_taken"), ULL2NUM(39));
    rb_funcall(h, _bracketseq, 2, SYM("on_snapshot_deleted"), ULL2NUM(40));
    rb_funcall(h, _bracketseq, 2, SYM("on_snapshot_changed"), ULL2NUM(41));
    rb_funcall(h, _bracketseq, 2, SYM("on_guest_property_changed"), ULL2NUM(42));
    rb_funcall(h, _bracketseq, 2, SYM("on_mouse_pointer_shape_changed"), ULL2NUM(43));
    rb_funcall(h, _bracketseq, 2, SYM("on_mouse_capability_changed"), ULL2NUM(44));
    rb_funcall(h, _bracketseq, 2, SYM("on_keyboard_leds_changed"), ULL2NUM(45));
    rb_funcall(h, _bracketseq, 2, SYM("on_state_changed"), ULL2NUM(46));
    rb_funcall(h, _bracketseq, 2, SYM("on_additions_state_changed"), ULL2NUM(47));
    rb_funcall(h, _bracketseq, 2, SYM("on_network_adapter_changed"), ULL2NUM(48));
    rb_funcall(h, _bracketseq, 2, SYM("on_serial_port_changed"), ULL2NUM(49));
    rb_funcall(h, _bracketseq, 2, SYM("on_parallel_port_changed"), ULL2NUM(50));
    rb_funcall(h, _bracketseq, 2, SYM("on_storage_controller_changed"), ULL2NUM(51));
    rb_funcall(h, _bracketseq, 2, SYM("on_medium_changed"), ULL2NUM(52));
    rb_funcall(h, _bracketseq, 2, SYM("on_vrde_server_changed"), ULL2NUM(53));
    rb_funcall(h, _bracketseq, 2, SYM("on_usb_controller_changed"), ULL2NUM(54));
    rb_funcall(h, _bracketseq, 2, SYM("on_usb_device_state_changed"), ULL2NUM(55));
    rb_funcall(h, _bracketseq, 2, SYM("on_shared_folder_changed"), ULL2NUM(56));
    rb_funcall(h, _bracketseq, 2, SYM("on_runtime_error"), ULL2NUM(57));
    rb_funcall(h, _bracketseq, 2, SYM("on_can_show_window"), ULL2NUM(58));
    rb_funcall(h, _bracketseq, 2, SYM("on_show_window"), ULL2NUM(59));
    rb_funcall(h, _bracketseq, 2, SYM("on_cpu_changed"), ULL2NUM(60));
    rb_funcall(h, _bracketseq, 2, SYM("on_vrde_server_info_changed"), ULL2NUM(61));
    rb_funcall(h, _bracketseq, 2, SYM("on_event_source_changed"), ULL2NUM(62));
    rb_funcall(h, _bracketseq, 2, SYM("on_cpu_execution_cap_changed"), ULL2NUM(63));
    rb_funcall(h, _bracketseq, 2, SYM("on_guest_keyboard"), ULL2NUM(64));
    rb_funcall(h, _bracketseq, 2, SYM("on_guest_mouse"), ULL2NUM(65));
    rb_funcall(h, _bracketseq, 2, SYM("on_nat_redirect"), ULL2NUM(66));
    rb_funcall(h, _bracketseq, 2, SYM("on_host_pci_device_plug"), ULL2NUM(67));
    rb_funcall(h, _bracketseq, 2, SYM("on_vbox_svc_availability_changed"), ULL2NUM(68));
    rb_funcall(h, _bracketseq, 2, SYM("on_bandwidth_group_changed"), ULL2NUM(69));
    rb_funcall(h, _bracketseq, 2, SYM("on_guest_monitor_changed"), ULL2NUM(70));
    rb_funcall(h, _bracketseq, 2, SYM("on_storage_device_changed"), ULL2NUM(71));
    rb_funcall(h, _bracketseq, 2, SYM("on_clipboard_mode_changed"), ULL2NUM(72));
    rb_funcall(h, _bracketseq, 2, SYM("on_drag_and_drop_mode_changed"), ULL2NUM(73));
    rb_funcall(h, _bracketseq, 2, SYM("last"), ULL2NUM(74));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0xef172985, 0x7e36, 0x4297, {0x95, 0xbe, 0xe4, 0x63, 0x96, 0x96, 0x8d, 0x66}};
    VALUE c    = cGuestMonitorChangedEventType
      = rb_define_class_under(under, "GuestMonitorChangedEventType", cAbstractEnum);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    VALUE h    = rb_hash_new();
    rb_funcall(h, _bracketseq, 2, SYM("enabled"), ULL2NUM(0));
    rb_funcall(h, _bracketseq, 2, SYM("disabled"), ULL2NUM(1));
    rb_funcall(h, _bracketseq, 2, SYM("new_origin"), ULL2NUM(2));
    rb_funcall(c, _map, 1, h);
  }
  {
    iid_t iid  = {0xf91e6e91, 0x49e1, 0x4fd2, {0xb2, 0x1e, 0x26, 0x90, 0x03, 0x35, 0x0d, 0x06}};
    VALUE c    = cVirtualBoxErrorInfo
      = rb_define_class_under(under, "VirtualBoxErrorInfo", cNSIException);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "result_code", VirtualBoxErrorInfo__get_result_code, 0);
    rb_define_method(c, "interface_i_d", VirtualBoxErrorInfo__get_interface_i_d, 0);
    rb_define_method(c, "component", VirtualBoxErrorInfo__get_component, 0);
    rb_define_method(c, "text", VirtualBoxErrorInfo__get_text, 0);
    rb_define_method(c, "next", VirtualBoxErrorInfo__get_next, 0);
  }
  {
    iid_t iid  = {0x6cfe387c, 0x74fb, 0x4ca7, {0xbf, 0xf6, 0x97, 0x3b, 0xec, 0x8a, 0xf7, 0xa3}};
    VALUE c    = cDHCPServer
      = rb_define_class_under(under, "DHCPServer", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "enabled", DHCPServer__get_enabled, 0);
    rb_define_method(c, "ip_address", DHCPServer__get_ip_address, 0);
    rb_define_method(c, "network_mask", DHCPServer__get_network_mask, 0);
    rb_define_method(c, "network_name", DHCPServer__get_network_name, 0);
    rb_define_method(c, "lower_ip", DHCPServer__get_lower_ip, 0);
    rb_define_method(c, "upper_ip", DHCPServer__get_upper_ip, 0);
    rb_define_method(c, "set_configuration", DHCPServer__set_configuration, 4);
    rb_define_method(c, "start", DHCPServer__start, 3);
    rb_define_method(c, "stop", DHCPServer__stop, 0);
  }
  {
    iid_t iid  = {0x3b2f08eb, 0xb810, 0x4715, {0xbe, 0xe0, 0xbb, 0x06, 0xb9, 0x88, 0x0a, 0xd2}};
    VALUE c    = cVirtualBox
      = rb_define_class_under(under, "VirtualBox", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "version", VirtualBox__get_version, 0);
    rb_define_method(c, "version_normalized", VirtualBox__get_version_normalized, 0);
    rb_define_method(c, "revision", VirtualBox__get_revision, 0);
    rb_define_method(c, "package_type", VirtualBox__get_package_type, 0);
    rb_define_method(c, "api_version", VirtualBox__get_api_version, 0);
    rb_define_method(c, "home_folder", VirtualBox__get_home_folder, 0);
    rb_define_method(c, "settings_file_path", VirtualBox__get_settings_file_path, 0);
    rb_define_method(c, "host", VirtualBox__get_host, 0);
    rb_define_method(c, "system_properties", VirtualBox__get_system_properties, 0);
    rb_define_method(c, "machines", VirtualBox__get_machines, 0);
    rb_define_method(c, "machine_groups", VirtualBox__get_machine_groups, 0);
    rb_define_method(c, "hard_disks", VirtualBox__get_hard_disks, 0);
    rb_define_method(c, "dvd_images", VirtualBox__get_dvd_images, 0);
    rb_define_method(c, "floppy_images", VirtualBox__get_floppy_images, 0);
    rb_define_method(c, "progress_operations", VirtualBox__get_progress_operations, 0);
    rb_define_method(c, "guest_os_types", VirtualBox__get_guest_os_types, 0);
    rb_define_method(c, "shared_folders", VirtualBox__get_shared_folders, 0);
    rb_define_method(c, "performance_collector", VirtualBox__get_performance_collector, 0);
    rb_define_method(c, "dhcp_servers", VirtualBox__get_dhcp_servers, 0);
    rb_define_method(c, "event_source", VirtualBox__get_event_source, 0);
    rb_define_method(c, "extension_pack_manager", VirtualBox__get_extension_pack_manager, 0);
    rb_define_method(c, "internal_networks", VirtualBox__get_internal_networks, 0);
    rb_define_method(c, "generic_network_drivers", VirtualBox__get_generic_network_drivers, 0);
    rb_define_method(c, "compose_machine_filename", VirtualBox__compose_machine_filename, 4);
    rb_define_method(c, "create_machine", VirtualBox__create_machine, 5);
    rb_define_method(c, "open_machine", VirtualBox__open_machine, 1);
    rb_define_method(c, "register_machine", VirtualBox__register_machine, 1);
    rb_define_method(c, "find_machine", VirtualBox__find_machine, 1);
    rb_define_method(c, "get_machines_by_groups", VirtualBox__get_machines_by_groups, 1);
    rb_define_method(c, "get_machine_states", VirtualBox__get_machine_states, 1);
    rb_define_method(c, "create_appliance", VirtualBox__create_appliance, 0);
    rb_define_method(c, "create_hard_disk", VirtualBox__create_hard_disk, 2);
    rb_define_method(c, "open_medium", VirtualBox__open_medium, 4);
    rb_define_method(c, "get_guest_os_type", VirtualBox__get_guest_os_type, 1);
    rb_define_method(c, "create_shared_folder", VirtualBox__create_shared_folder, 4);
    rb_define_method(c, "remove_shared_folder", VirtualBox__remove_shared_folder, 1);
    rb_define_method(c, "get_extra_data_keys", VirtualBox__get_extra_data_keys, 0);
    rb_define_method(c, "get_extra_data", VirtualBox__get_extra_data, 1);
    rb_define_method(c, "set_extra_data", VirtualBox__set_extra_data, 2);
    rb_define_method(c, "set_settings_secret", VirtualBox__set_settings_secret, 1);
    rb_define_method(c, "create_dhcp_server", VirtualBox__create_dhcp_server, 1);
    rb_define_method(c, "find_dhcp_server_by_network_name", VirtualBox__find_dhcp_server_by_network_name, 1);
    rb_define_method(c, "remove_dhcp_server", VirtualBox__remove_dhcp_server, 1);
    rb_define_method(c, "check_firmware_present", VirtualBox__check_firmware_present, 2);
  }
  {
    iid_t iid  = {0x003d7f92, 0xd38e, 0x487f, {0xb7, 0x90, 0x8c, 0x5e, 0x86, 0x31, 0xcb, 0x2f}};
    VALUE c    = cVFSExplorer
      = rb_define_class_under(under, "VFSExplorer", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "path", VFSExplorer__get_path, 0);
    rb_define_method(c, "type", VFSExplorer__get_type, 0);
    rb_define_method(c, "update", VFSExplorer__update, 0);
    rb_define_method(c, "cd", VFSExplorer__cd, 1);
    rb_define_method(c, "cd_up", VFSExplorer__cd_up, 0);
    rb_define_method(c, "entry_list", VFSExplorer__entry_list, 0);
    rb_define_method(c, "exists", VFSExplorer__exists, 1);
    rb_define_method(c, "remove", VFSExplorer__remove, 1);
  }
  {
    iid_t iid  = {0x3059cf9e, 0x25c7, 0x4f0b, {0x9f, 0xa5, 0x3c, 0x42, 0xe4, 0x41, 0x67, 0x0b}};
    VALUE c    = cAppliance
      = rb_define_class_under(under, "Appliance", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "path", Appliance__get_path, 0);
    rb_define_method(c, "disks", Appliance__get_disks, 0);
    rb_define_method(c, "virtual_system_descriptions", Appliance__get_virtual_system_descriptions, 0);
    rb_define_method(c, "machines", Appliance__get_machines, 0);
    rb_define_method(c, "read", Appliance__read, 1);
    rb_define_method(c, "interpret", Appliance__interpret, 0);
    rb_define_method(c, "import_machines", Appliance__import_machines, 1);
    rb_define_method(c, "create_vfs_explorer", Appliance__create_vfs_explorer, 1);
    rb_define_method(c, "write", Appliance__write, 3);
    rb_define_method(c, "get_warnings", Appliance__get_warnings, 0);
  }
  {
    iid_t iid  = {0xd7525e6c, 0x531a, 0x4c51, {0x8e, 0x04, 0x41, 0x23, 0x50, 0x83, 0xa3, 0xd8}};
    VALUE c    = cVirtualSystemDescription
      = rb_define_class_under(under, "VirtualSystemDescription", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "count", VirtualSystemDescription__get_count, 0);
    rb_define_method(c, "get_description", VirtualSystemDescription__get_description, 0);
    rb_define_method(c, "get_description_by_type", VirtualSystemDescription__get_description_by_type, 1);
    rb_define_method(c, "get_values_by_type", VirtualSystemDescription__get_values_by_type, 2);
    rb_define_method(c, "set_final_values", VirtualSystemDescription__set_final_values, 3);
    rb_define_method(c, "add_description", VirtualSystemDescription__add_description, 3);
  }
  {
    iid_t iid  = {0xdca36a92, 0x703c, 0x4649, {0x98, 0xa4, 0xf4, 0x0c, 0x1e, 0xf0, 0xc3, 0x36}};
    VALUE c    = cInternalMachineControl
      = rb_define_class_under(under, "InternalMachineControl", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "set_remove_saved_state_file", InternalMachineControl__set_remove_saved_state_file, 1);
    rb_define_method(c, "update_state", InternalMachineControl__update_state, 1);
    rb_define_method(c, "get_ipcid", InternalMachineControl__get_ipcid, 0);
    rb_define_method(c, "begin_power_up", InternalMachineControl__begin_power_up, 1);
    rb_define_method(c, "end_power_up", InternalMachineControl__end_power_up, 1);
    rb_define_method(c, "begin_powering_down", InternalMachineControl__begin_powering_down, 0);
    rb_define_method(c, "end_powering_down", InternalMachineControl__end_powering_down, 2);
    rb_define_method(c, "run_usb_device_filters", InternalMachineControl__run_usb_device_filters, 1);
    rb_define_method(c, "capture_usb_device", InternalMachineControl__capture_usb_device, 1);
    rb_define_method(c, "detach_usb_device", InternalMachineControl__detach_usb_device, 2);
    rb_define_method(c, "auto_capture_usb_devices", InternalMachineControl__auto_capture_usb_devices, 0);
    rb_define_method(c, "detach_all_usb_devices", InternalMachineControl__detach_all_usb_devices, 1);
    rb_define_method(c, "on_session_end", InternalMachineControl__on_session_end, 1);
    rb_define_method(c, "begin_saving_state", InternalMachineControl__begin_saving_state, 0);
    rb_define_method(c, "end_saving_state", InternalMachineControl__end_saving_state, 2);
    rb_define_method(c, "adopt_saved_state", InternalMachineControl__adopt_saved_state, 1);
    rb_define_method(c, "begin_taking_snapshot", InternalMachineControl__begin_taking_snapshot, 5);
    rb_define_method(c, "end_taking_snapshot", InternalMachineControl__end_taking_snapshot, 1);
    rb_define_method(c, "delete_snapshot", InternalMachineControl__delete_snapshot, 4);
    rb_define_method(c, "finish_online_merge_medium", InternalMachineControl__finish_online_merge_medium, 6);
    rb_define_method(c, "restore_snapshot", InternalMachineControl__restore_snapshot, 2);
    rb_define_method(c, "pull_guest_properties", InternalMachineControl__pull_guest_properties, 0);
    rb_define_method(c, "push_guest_property", InternalMachineControl__push_guest_property, 4);
    rb_define_method(c, "lock_media", InternalMachineControl__lock_media, 0);
    rb_define_method(c, "unlock_media", InternalMachineControl__unlock_media, 0);
    rb_define_method(c, "eject_medium", InternalMachineControl__eject_medium, 1);
  }
  {
    iid_t iid  = {0x38b54279, 0xdc35, 0x4f5e, {0xa4, 0x31, 0x83, 0x5b, 0x86, 0x7c, 0x6b, 0x5e}};
    VALUE c    = cBIOSSettings
      = rb_define_class_under(under, "BIOSSettings", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "logo_fade_in", BIOSSettings__get_logo_fade_in, 0);
    rb_define_method(c, "logo_fade_out", BIOSSettings__get_logo_fade_out, 0);
    rb_define_method(c, "logo_display_time", BIOSSettings__get_logo_display_time, 0);
    rb_define_method(c, "logo_image_path", BIOSSettings__get_logo_image_path, 0);
    rb_define_method(c, "boot_menu_mode", BIOSSettings__get_boot_menu_mode, 0);
    rb_define_method(c, "acpi_enabled", BIOSSettings__get_acpi_enabled, 0);
    rb_define_method(c, "io_apic_enabled", BIOSSettings__get_io_apic_enabled, 0);
    rb_define_method(c, "time_offset", BIOSSettings__get_time_offset, 0);
    rb_define_method(c, "pxe_debug_enabled", BIOSSettings__get_pxe_debug_enabled, 0);
  }
  {
    iid_t iid  = {0xD88B324F, 0xDB19, 0x4D3B, {0xA1, 0xA9, 0xBF, 0x5B, 0x12, 0x71, 0x99, 0xA8}};
    VALUE c    = cPCIAddress
      = rb_define_class_under(under, "PCIAddress", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "bus", PCIAddress__get_bus, 0);
    rb_define_method(c, "device", PCIAddress__get_device, 0);
    rb_define_method(c, "dev_function", PCIAddress__get_dev_function, 0);
    rb_define_method(c, "as_long", PCIAddress__as_long, 0);
    rb_define_method(c, "from_long", PCIAddress__from_long, 1);
  }
  {
    iid_t iid  = {0x91f33d6f, 0xe621, 0x4f70, {0xa7, 0x7e, 0x15, 0xf0, 0xe3, 0xc7, 0x14, 0xd5}};
    VALUE c    = cPCIDeviceAttachment
      = rb_define_class_under(under, "PCIDeviceAttachment", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "name", PCIDeviceAttachment__get_name, 0);
    rb_define_method(c, "is_physical_device", PCIDeviceAttachment__get_is_physical_device, 0);
    rb_define_method(c, "host_address", PCIDeviceAttachment__get_host_address, 0);
    rb_define_method(c, "guest_address", PCIDeviceAttachment__get_guest_address, 0);
  }
  {
    iid_t iid  = {0x22781af3, 0x1c96, 0x4126, {0x9e, 0xdf, 0x67, 0xa0, 0x20, 0xe0, 0xe8, 0x58}};
    VALUE c    = cMachine
      = rb_define_class_under(under, "Machine", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "parent", Machine__get_parent, 0);
    rb_define_method(c, "accessible", Machine__get_accessible, 0);
    rb_define_method(c, "access_error", Machine__get_access_error, 0);
    rb_define_method(c, "name", Machine__get_name, 0);
    rb_define_method(c, "description", Machine__get_description, 0);
    rb_define_method(c, "id", Machine__get_id, 0);
    rb_define_method(c, "groups", Machine__get_groups, 0);
    rb_define_method(c, "os_type_id", Machine__get_os_type_id, 0);
    rb_define_method(c, "hardware_version", Machine__get_hardware_version, 0);
    rb_define_method(c, "hardware_uuid", Machine__get_hardware_uuid, 0);
    rb_define_method(c, "cpu_count", Machine__get_cpu_count, 0);
    rb_define_method(c, "cpu_hot_plug_enabled", Machine__get_cpu_hot_plug_enabled, 0);
    rb_define_method(c, "cpu_execution_cap", Machine__get_cpu_execution_cap, 0);
    rb_define_method(c, "memory_size", Machine__get_memory_size, 0);
    rb_define_method(c, "memory_balloon_size", Machine__get_memory_balloon_size, 0);
    rb_define_method(c, "page_fusion_enabled", Machine__get_page_fusion_enabled, 0);
    rb_define_method(c, "vram_size", Machine__get_vram_size, 0);
    rb_define_method(c, "accelerate_3d_enabled", Machine__get_accelerate_3d_enabled, 0);
    rb_define_method(c, "accelerate_2d_video_enabled", Machine__get_accelerate_2d_video_enabled, 0);
    rb_define_method(c, "monitor_count", Machine__get_monitor_count, 0);
    rb_define_method(c, "video_capture_enabled", Machine__get_video_capture_enabled, 0);
    rb_define_method(c, "video_capture_file", Machine__get_video_capture_file, 0);
    rb_define_method(c, "video_capture_width", Machine__get_video_capture_width, 0);
    rb_define_method(c, "video_capture_height", Machine__get_video_capture_height, 0);
    rb_define_method(c, "bios_settings", Machine__get_bios_settings, 0);
    rb_define_method(c, "firmware_type", Machine__get_firmware_type, 0);
    rb_define_method(c, "pointing_hid_type", Machine__get_pointing_hid_type, 0);
    rb_define_method(c, "keyboard_hid_type", Machine__get_keyboard_hid_type, 0);
    rb_define_method(c, "hpet_enabled", Machine__get_hpet_enabled, 0);
    rb_define_method(c, "chipset_type", Machine__get_chipset_type, 0);
    rb_define_method(c, "snapshot_folder", Machine__get_snapshot_folder, 0);
    rb_define_method(c, "vrde_server", Machine__get_vrde_server, 0);
    rb_define_method(c, "emulated_usb_webcamera_enabled", Machine__get_emulated_usb_webcamera_enabled, 0);
    rb_define_method(c, "emulated_usb_card_reader_enabled", Machine__get_emulated_usb_card_reader_enabled, 0);
    rb_define_method(c, "medium_attachments", Machine__get_medium_attachments, 0);
    rb_define_method(c, "usb_controller", Machine__get_usb_controller, 0);
    rb_define_method(c, "audio_adapter", Machine__get_audio_adapter, 0);
    rb_define_method(c, "storage_controllers", Machine__get_storage_controllers, 0);
    rb_define_method(c, "settings_file_path", Machine__get_settings_file_path, 0);
    rb_define_method(c, "settings_modified", Machine__get_settings_modified, 0);
    rb_define_method(c, "session_state", Machine__get_session_state, 0);
    rb_define_method(c, "session_type", Machine__get_session_type, 0);
    rb_define_method(c, "session_pid", Machine__get_session_pid, 0);
    rb_define_method(c, "state", Machine__get_state, 0);
    rb_define_method(c, "last_state_change", Machine__get_last_state_change, 0);
    rb_define_method(c, "state_file_path", Machine__get_state_file_path, 0);
    rb_define_method(c, "log_folder", Machine__get_log_folder, 0);
    rb_define_method(c, "current_snapshot", Machine__get_current_snapshot, 0);
    rb_define_method(c, "snapshot_count", Machine__get_snapshot_count, 0);
    rb_define_method(c, "current_state_modified", Machine__get_current_state_modified, 0);
    rb_define_method(c, "shared_folders", Machine__get_shared_folders, 0);
    rb_define_method(c, "clipboard_mode", Machine__get_clipboard_mode, 0);
    rb_define_method(c, "drag_and_drop_mode", Machine__get_drag_and_drop_mode, 0);
    rb_define_method(c, "guest_property_notification_patterns", Machine__get_guest_property_notification_patterns, 0);
    rb_define_method(c, "teleporter_enabled", Machine__get_teleporter_enabled, 0);
    rb_define_method(c, "teleporter_port", Machine__get_teleporter_port, 0);
    rb_define_method(c, "teleporter_address", Machine__get_teleporter_address, 0);
    rb_define_method(c, "teleporter_password", Machine__get_teleporter_password, 0);
    rb_define_method(c, "fault_tolerance_state", Machine__get_fault_tolerance_state, 0);
    rb_define_method(c, "fault_tolerance_port", Machine__get_fault_tolerance_port, 0);
    rb_define_method(c, "fault_tolerance_address", Machine__get_fault_tolerance_address, 0);
    rb_define_method(c, "fault_tolerance_password", Machine__get_fault_tolerance_password, 0);
    rb_define_method(c, "fault_tolerance_sync_interval", Machine__get_fault_tolerance_sync_interval, 0);
    rb_define_method(c, "rtc_use_utc", Machine__get_rtc_use_utc, 0);
    rb_define_method(c, "io_cache_enabled", Machine__get_io_cache_enabled, 0);
    rb_define_method(c, "io_cache_size", Machine__get_io_cache_size, 0);
    rb_define_method(c, "pci_device_assignments", Machine__get_pci_device_assignments, 0);
    rb_define_method(c, "bandwidth_control", Machine__get_bandwidth_control, 0);
    rb_define_method(c, "tracing_enabled", Machine__get_tracing_enabled, 0);
    rb_define_method(c, "tracing_config", Machine__get_tracing_config, 0);
    rb_define_method(c, "allow_tracing_to_access_vm", Machine__get_allow_tracing_to_access_vm, 0);
    rb_define_method(c, "autostart_enabled", Machine__get_autostart_enabled, 0);
    rb_define_method(c, "autostart_delay", Machine__get_autostart_delay, 0);
    rb_define_method(c, "autostop_type", Machine__get_autostop_type, 0);
    rb_define_method(c, "lock_machine", Machine__lock_machine, 2);
    rb_define_method(c, "launch_vm_process", Machine__launch_vm_process, 3);
    rb_define_method(c, "set_boot_order", Machine__set_boot_order, 2);
    rb_define_method(c, "get_boot_order", Machine__get_boot_order, 1);
    rb_define_method(c, "attach_device", Machine__attach_device, 5);
    rb_define_method(c, "attach_device_without_medium", Machine__attach_device_without_medium, 4);
    rb_define_method(c, "detach_device", Machine__detach_device, 3);
    rb_define_method(c, "passthrough_device", Machine__passthrough_device, 4);
    rb_define_method(c, "temporary_eject_device", Machine__temporary_eject_device, 4);
    rb_define_method(c, "non_rotational_device", Machine__non_rotational_device, 4);
    rb_define_method(c, "set_auto_discard_for_device", Machine__set_auto_discard_for_device, 4);
    rb_define_method(c, "set_bandwidth_group_for_device", Machine__set_bandwidth_group_for_device, 4);
    rb_define_method(c, "set_no_bandwidth_group_for_device", Machine__set_no_bandwidth_group_for_device, 3);
    rb_define_method(c, "unmount_medium", Machine__unmount_medium, 4);
    rb_define_method(c, "mount_medium", Machine__mount_medium, 5);
    rb_define_method(c, "get_medium", Machine__get_medium, 3);
    rb_define_method(c, "get_medium_attachments_of_controller", Machine__get_medium_attachments_of_controller, 1);
    rb_define_method(c, "get_medium_attachment", Machine__get_medium_attachment, 3);
    rb_define_method(c, "attach_host_pci_device", Machine__attach_host_pci_device, 3);
    rb_define_method(c, "detach_host_pci_device", Machine__detach_host_pci_device, 1);
    rb_define_method(c, "get_network_adapter", Machine__get_network_adapter, 1);
    rb_define_method(c, "add_storage_controller", Machine__add_storage_controller, 2);
    rb_define_method(c, "get_storage_controller_by_name", Machine__get_storage_controller_by_name, 1);
    rb_define_method(c, "get_storage_controller_by_instance", Machine__get_storage_controller_by_instance, 1);
    rb_define_method(c, "remove_storage_controller", Machine__remove_storage_controller, 1);
    rb_define_method(c, "set_storage_controller_bootable", Machine__set_storage_controller_bootable, 2);
    rb_define_method(c, "get_serial_port", Machine__get_serial_port, 1);
    rb_define_method(c, "get_parallel_port", Machine__get_parallel_port, 1);
    rb_define_method(c, "get_extra_data_keys", Machine__get_extra_data_keys, 0);
    rb_define_method(c, "get_extra_data", Machine__get_extra_data, 1);
    rb_define_method(c, "set_extra_data", Machine__set_extra_data, 2);
    rb_define_method(c, "get_cpu_property", Machine__get_cpu_property, 1);
    rb_define_method(c, "set_cpu_property", Machine__set_cpu_property, 2);
    rb_define_method(c, "get_cpuid_leaf", Machine__get_cpuid_leaf, 1);
    rb_define_method(c, "set_cpuid_leaf", Machine__set_cpuid_leaf, 5);
    rb_define_method(c, "remove_cpuid_leaf", Machine__remove_cpuid_leaf, 1);
    rb_define_method(c, "remove_all_cpuid_leaves", Machine__remove_all_cpuid_leaves, 0);
    rb_define_method(c, "get_hw_virt_ex_property", Machine__get_hw_virt_ex_property, 1);
    rb_define_method(c, "set_hw_virt_ex_property", Machine__set_hw_virt_ex_property, 2);
    rb_define_method(c, "save_settings", Machine__save_settings, 0);
    rb_define_method(c, "discard_settings", Machine__discard_settings, 0);
    rb_define_method(c, "unregister", Machine__unregister, 1);
    rb_define_method(c, "delete", Machine__delete, 1);
    rb_define_method(c, "export", Machine__export, 2);
    rb_define_method(c, "find_snapshot", Machine__find_snapshot, 1);
    rb_define_method(c, "create_shared_folder", Machine__create_shared_folder, 4);
    rb_define_method(c, "remove_shared_folder", Machine__remove_shared_folder, 1);
    rb_define_method(c, "can_show_console_window", Machine__can_show_console_window, 0);
    rb_define_method(c, "show_console_window", Machine__show_console_window, 0);
    rb_define_method(c, "get_guest_property", Machine__get_guest_property, 1);
    rb_define_method(c, "get_guest_property_value", Machine__get_guest_property_value, 1);
    rb_define_method(c, "get_guest_property_timestamp", Machine__get_guest_property_timestamp, 1);
    rb_define_method(c, "set_guest_property", Machine__set_guest_property, 3);
    rb_define_method(c, "set_guest_property_value", Machine__set_guest_property_value, 2);
    rb_define_method(c, "delete_guest_property", Machine__delete_guest_property, 1);
    rb_define_method(c, "enumerate_guest_properties", Machine__enumerate_guest_properties, 1);
    rb_define_method(c, "query_saved_guest_screen_info", Machine__query_saved_guest_screen_info, 1);
    rb_define_method(c, "query_saved_thumbnail_size", Machine__query_saved_thumbnail_size, 1);
    rb_define_method(c, "read_saved_thumbnail_to_array", Machine__read_saved_thumbnail_to_array, 2);
    rb_define_method(c, "read_saved_thumbnail_png_to_array", Machine__read_saved_thumbnail_png_to_array, 1);
    rb_define_method(c, "query_saved_screenshot_png_size", Machine__query_saved_screenshot_png_size, 1);
    rb_define_method(c, "read_saved_screenshot_png_to_array", Machine__read_saved_screenshot_png_to_array, 1);
    rb_define_method(c, "hot_plug_cpu", Machine__hot_plug_cpu, 1);
    rb_define_method(c, "hot_unplug_cpu", Machine__hot_unplug_cpu, 1);
    rb_define_method(c, "get_cpu_status", Machine__get_cpu_status, 1);
    rb_define_method(c, "query_log_filename", Machine__query_log_filename, 1);
    rb_define_method(c, "read_log", Machine__read_log, 3);
    rb_define_method(c, "clone_to", Machine__clone_to, 3);
  }
  {
    iid_t iid  = {0x714434a1, 0x58c3, 0x4aab, {0x90, 0x49, 0x76, 0x52, 0xc5, 0xdf, 0x11, 0x3b}};
    VALUE c    = cVRDEServerInfo
      = rb_define_class_under(under, "VRDEServerInfo", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "active", VRDEServerInfo__get_active, 0);
    rb_define_method(c, "port", VRDEServerInfo__get_port, 0);
    rb_define_method(c, "number_of_clients", VRDEServerInfo__get_number_of_clients, 0);
    rb_define_method(c, "begin_time", VRDEServerInfo__get_begin_time, 0);
    rb_define_method(c, "end_time", VRDEServerInfo__get_end_time, 0);
    rb_define_method(c, "bytes_sent", VRDEServerInfo__get_bytes_sent, 0);
    rb_define_method(c, "bytes_sent_total", VRDEServerInfo__get_bytes_sent_total, 0);
    rb_define_method(c, "bytes_received", VRDEServerInfo__get_bytes_received, 0);
    rb_define_method(c, "bytes_received_total", VRDEServerInfo__get_bytes_received_total, 0);
    rb_define_method(c, "user", VRDEServerInfo__get_user, 0);
    rb_define_method(c, "domain", VRDEServerInfo__get_domain, 0);
    rb_define_method(c, "client_name", VRDEServerInfo__get_client_name, 0);
    rb_define_method(c, "client_ip", VRDEServerInfo__get_client_ip, 0);
    rb_define_method(c, "client_version", VRDEServerInfo__get_client_version, 0);
    rb_define_method(c, "encryption_style", VRDEServerInfo__get_encryption_style, 0);
  }
  {
    iid_t iid  = {0xdb7ab4ca, 0x2a3f, 0x4183, {0x92, 0x43, 0xc1, 0x20, 0x8d, 0xa9, 0x23, 0x92}};
    VALUE c    = cConsole
      = rb_define_class_under(under, "Console", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "machine", Console__get_machine, 0);
    rb_define_method(c, "state", Console__get_state, 0);
    rb_define_method(c, "guest", Console__get_guest, 0);
    rb_define_method(c, "keyboard", Console__get_keyboard, 0);
    rb_define_method(c, "mouse", Console__get_mouse, 0);
    rb_define_method(c, "display", Console__get_display, 0);
    rb_define_method(c, "debugger", Console__get_debugger, 0);
    rb_define_method(c, "usb_devices", Console__get_usb_devices, 0);
    rb_define_method(c, "remote_usb_devices", Console__get_remote_usb_devices, 0);
    rb_define_method(c, "shared_folders", Console__get_shared_folders, 0);
    rb_define_method(c, "vrde_server_info", Console__get_vrde_server_info, 0);
    rb_define_method(c, "event_source", Console__get_event_source, 0);
    rb_define_method(c, "attached_pci_devices", Console__get_attached_pci_devices, 0);
    rb_define_method(c, "use_host_clipboard", Console__get_use_host_clipboard, 0);
    rb_define_method(c, "power_up", Console__power_up, 0);
    rb_define_method(c, "power_up_paused", Console__power_up_paused, 0);
    rb_define_method(c, "power_down", Console__power_down, 0);
    rb_define_method(c, "reset", Console__reset, 0);
    rb_define_method(c, "pause", Console__pause, 0);
    rb_define_method(c, "resume", Console__resume, 0);
    rb_define_method(c, "power_button", Console__power_button, 0);
    rb_define_method(c, "sleep_button", Console__sleep_button, 0);
    rb_define_method(c, "get_power_button_handled", Console__get_power_button_handled, 0);
    rb_define_method(c, "get_guest_entered_acpi_mode", Console__get_guest_entered_acpi_mode, 0);
    rb_define_method(c, "save_state", Console__save_state, 0);
    rb_define_method(c, "adopt_saved_state", Console__adopt_saved_state, 1);
    rb_define_method(c, "discard_saved_state", Console__discard_saved_state, 1);
    rb_define_method(c, "get_device_activity", Console__get_device_activity, 1);
    rb_define_method(c, "attach_usb_device", Console__attach_usb_device, 1);
    rb_define_method(c, "detach_usb_device", Console__detach_usb_device, 1);
    rb_define_method(c, "find_usb_device_by_address", Console__find_usb_device_by_address, 1);
    rb_define_method(c, "find_usb_device_by_id", Console__find_usb_device_by_id, 1);
    rb_define_method(c, "create_shared_folder", Console__create_shared_folder, 4);
    rb_define_method(c, "remove_shared_folder", Console__remove_shared_folder, 1);
    rb_define_method(c, "take_snapshot", Console__take_snapshot, 2);
    rb_define_method(c, "delete_snapshot", Console__delete_snapshot, 1);
    rb_define_method(c, "delete_snapshot_and_all_children", Console__delete_snapshot_and_all_children, 1);
    rb_define_method(c, "delete_snapshot_range", Console__delete_snapshot_range, 2);
    rb_define_method(c, "restore_snapshot", Console__restore_snapshot, 1);
    rb_define_method(c, "teleport", Console__teleport, 4);
  }
  {
    iid_t iid  = {0x87a4153d, 0x6889, 0x4dd6, {0x96, 0x54, 0x2e, 0x9f, 0xf0, 0xae, 0x8d, 0xec}};
    VALUE c    = cHostNetworkInterface
      = rb_define_class_under(under, "HostNetworkInterface", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "name", HostNetworkInterface__get_name, 0);
    rb_define_method(c, "id", HostNetworkInterface__get_id, 0);
    rb_define_method(c, "network_name", HostNetworkInterface__get_network_name, 0);
    rb_define_method(c, "dhcp_enabled", HostNetworkInterface__get_dhcp_enabled, 0);
    rb_define_method(c, "ip_address", HostNetworkInterface__get_ip_address, 0);
    rb_define_method(c, "network_mask", HostNetworkInterface__get_network_mask, 0);
    rb_define_method(c, "ipv6_supported", HostNetworkInterface__get_ipv6_supported, 0);
    rb_define_method(c, "ipv6_address", HostNetworkInterface__get_ipv6_address, 0);
    rb_define_method(c, "ipv6_network_mask_prefix_length", HostNetworkInterface__get_ipv6_network_mask_prefix_length, 0);
    rb_define_method(c, "hardware_address", HostNetworkInterface__get_hardware_address, 0);
    rb_define_method(c, "medium_type", HostNetworkInterface__get_medium_type, 0);
    rb_define_method(c, "status", HostNetworkInterface__get_status, 0);
    rb_define_method(c, "interface_type", HostNetworkInterface__get_interface_type, 0);
    rb_define_method(c, "enable_static_ip_config", HostNetworkInterface__enable_static_ip_config, 2);
    rb_define_method(c, "enable_static_ip_config_v6", HostNetworkInterface__enable_static_ip_config_v6, 2);
    rb_define_method(c, "enable_dynamic_ip_config", HostNetworkInterface__enable_dynamic_ip_config, 0);
    rb_define_method(c, "dhcp_rediscover", HostNetworkInterface__dhcp_rediscover, 0);
  }
  {
    iid_t iid  = {0x30678943, 0x32df, 0x4830, {0xb4, 0x13, 0x93, 0x1b, 0x25, 0xac, 0x86, 0xa0}};
    VALUE c    = cHost
      = rb_define_class_under(under, "Host", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "dvd_drives", Host__get_dvd_drives, 0);
    rb_define_method(c, "floppy_drives", Host__get_floppy_drives, 0);
    rb_define_method(c, "usb_devices", Host__get_usb_devices, 0);
    rb_define_method(c, "usb_device_filters", Host__get_usb_device_filters, 0);
    rb_define_method(c, "network_interfaces", Host__get_network_interfaces, 0);
    rb_define_method(c, "processor_count", Host__get_processor_count, 0);
    rb_define_method(c, "processor_online_count", Host__get_processor_online_count, 0);
    rb_define_method(c, "processor_core_count", Host__get_processor_core_count, 0);
    rb_define_method(c, "memory_size", Host__get_memory_size, 0);
    rb_define_method(c, "memory_available", Host__get_memory_available, 0);
    rb_define_method(c, "operating_system", Host__get_operating_system, 0);
    rb_define_method(c, "os_version", Host__get_os_version, 0);
    rb_define_method(c, "utc_time", Host__get_utc_time, 0);
    rb_define_method(c, "acceleration3d_available", Host__get_acceleration3d_available, 0);
    rb_define_method(c, "get_processor_speed", Host__get_processor_speed, 1);
    rb_define_method(c, "get_processor_feature", Host__get_processor_feature, 1);
    rb_define_method(c, "get_processor_description", Host__get_processor_description, 1);
    rb_define_method(c, "get_processor_cpuid_leaf", Host__get_processor_cpuid_leaf, 3);
    rb_define_method(c, "create_host_only_network_interface", Host__create_host_only_network_interface, 0);
    rb_define_method(c, "remove_host_only_network_interface", Host__remove_host_only_network_interface, 1);
    rb_define_method(c, "create_usb_device_filter", Host__create_usb_device_filter, 1);
    rb_define_method(c, "insert_usb_device_filter", Host__insert_usb_device_filter, 2);
    rb_define_method(c, "remove_usb_device_filter", Host__remove_usb_device_filter, 1);
    rb_define_method(c, "find_host_dvd_drive", Host__find_host_dvd_drive, 1);
    rb_define_method(c, "find_host_floppy_drive", Host__find_host_floppy_drive, 1);
    rb_define_method(c, "find_host_network_interface_by_name", Host__find_host_network_interface_by_name, 1);
    rb_define_method(c, "find_host_network_interface_by_id", Host__find_host_network_interface_by_id, 1);
    rb_define_method(c, "find_host_network_interfaces_of_type", Host__find_host_network_interfaces_of_type, 1);
    rb_define_method(c, "find_usb_device_by_id", Host__find_usb_device_by_id, 1);
    rb_define_method(c, "find_usb_device_by_address", Host__find_usb_device_by_address, 1);
    rb_define_method(c, "generate_mac_address", Host__generate_mac_address, 0);
  }
  {
    iid_t iid  = {0x1d7aca29, 0x97f0, 0x4287, {0x98, 0x74, 0xa6, 0x0e, 0xc4, 0xf8, 0x0e, 0xa6}};
    VALUE c    = cSystemProperties
      = rb_define_class_under(under, "SystemProperties", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "min_guest_ram", SystemProperties__get_min_guest_ram, 0);
    rb_define_method(c, "max_guest_ram", SystemProperties__get_max_guest_ram, 0);
    rb_define_method(c, "min_guest_vram", SystemProperties__get_min_guest_vram, 0);
    rb_define_method(c, "max_guest_vram", SystemProperties__get_max_guest_vram, 0);
    rb_define_method(c, "min_guest_cpu_count", SystemProperties__get_min_guest_cpu_count, 0);
    rb_define_method(c, "max_guest_cpu_count", SystemProperties__get_max_guest_cpu_count, 0);
    rb_define_method(c, "max_guest_monitors", SystemProperties__get_max_guest_monitors, 0);
    rb_define_method(c, "info_vd_size", SystemProperties__get_info_vd_size, 0);
    rb_define_method(c, "serial_port_count", SystemProperties__get_serial_port_count, 0);
    rb_define_method(c, "parallel_port_count", SystemProperties__get_parallel_port_count, 0);
    rb_define_method(c, "max_boot_position", SystemProperties__get_max_boot_position, 0);
    rb_define_method(c, "default_machine_folder", SystemProperties__get_default_machine_folder, 0);
    rb_define_method(c, "medium_formats", SystemProperties__get_medium_formats, 0);
    rb_define_method(c, "default_hard_disk_format", SystemProperties__get_default_hard_disk_format, 0);
    rb_define_method(c, "free_disk_space_warning", SystemProperties__get_free_disk_space_warning, 0);
    rb_define_method(c, "free_disk_space_percent_warning", SystemProperties__get_free_disk_space_percent_warning, 0);
    rb_define_method(c, "free_disk_space_error", SystemProperties__get_free_disk_space_error, 0);
    rb_define_method(c, "free_disk_space_percent_error", SystemProperties__get_free_disk_space_percent_error, 0);
    rb_define_method(c, "vrde_auth_library", SystemProperties__get_vrde_auth_library, 0);
    rb_define_method(c, "web_service_auth_library", SystemProperties__get_web_service_auth_library, 0);
    rb_define_method(c, "default_vrde_ext_pack", SystemProperties__get_default_vrde_ext_pack, 0);
    rb_define_method(c, "log_history_count", SystemProperties__get_log_history_count, 0);
    rb_define_method(c, "default_audio_driver", SystemProperties__get_default_audio_driver, 0);
    rb_define_method(c, "autostart_database_path", SystemProperties__get_autostart_database_path, 0);
    rb_define_method(c, "default_additions_iso", SystemProperties__get_default_additions_iso, 0);
    rb_define_method(c, "get_max_network_adapters", SystemProperties__get_max_network_adapters, 1);
    rb_define_method(c, "get_max_network_adapters_of_type", SystemProperties__get_max_network_adapters_of_type, 2);
    rb_define_method(c, "get_max_devices_per_port_for_storage_bus", SystemProperties__get_max_devices_per_port_for_storage_bus, 1);
    rb_define_method(c, "get_min_port_count_for_storage_bus", SystemProperties__get_min_port_count_for_storage_bus, 1);
    rb_define_method(c, "get_max_port_count_for_storage_bus", SystemProperties__get_max_port_count_for_storage_bus, 1);
    rb_define_method(c, "get_max_instances_of_storage_bus", SystemProperties__get_max_instances_of_storage_bus, 2);
    rb_define_method(c, "get_device_types_for_storage_bus", SystemProperties__get_device_types_for_storage_bus, 1);
    rb_define_method(c, "get_default_io_cache_setting_for_storage_controller", SystemProperties__get_default_io_cache_setting_for_storage_controller, 1);
  }
  {
    iid_t iid  = {0x6d968f9a, 0x858b, 0x4c50, {0xbf, 0x17, 0x24, 0x1f, 0x06, 0x9e, 0x94, 0xc2}};
    VALUE c    = cGuestOSType
      = rb_define_class_under(under, "GuestOSType", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "family_id", GuestOSType__get_family_id, 0);
    rb_define_method(c, "family_description", GuestOSType__get_family_description, 0);
    rb_define_method(c, "id", GuestOSType__get_id, 0);
    rb_define_method(c, "description", GuestOSType__get_description, 0);
    rb_define_method(c, "is64_bit", GuestOSType__get_is64_bit, 0);
    rb_define_method(c, "recommended_io_apic", GuestOSType__get_recommended_io_apic, 0);
    rb_define_method(c, "recommended_virt_ex", GuestOSType__get_recommended_virt_ex, 0);
    rb_define_method(c, "recommended_ram", GuestOSType__get_recommended_ram, 0);
    rb_define_method(c, "recommended_vram", GuestOSType__get_recommended_vram, 0);
    rb_define_method(c, "recommended2d_video_acceleration", GuestOSType__get_recommended2d_video_acceleration, 0);
    rb_define_method(c, "recommended3d_acceleration", GuestOSType__get_recommended3d_acceleration, 0);
    rb_define_method(c, "recommended_hdd", GuestOSType__get_recommended_hdd, 0);
    rb_define_method(c, "adapter_type", GuestOSType__get_adapter_type, 0);
    rb_define_method(c, "recommended_pae", GuestOSType__get_recommended_pae, 0);
    rb_define_method(c, "recommended_dvd_storage_controller", GuestOSType__get_recommended_dvd_storage_controller, 0);
    rb_define_method(c, "recommended_dvd_storage_bus", GuestOSType__get_recommended_dvd_storage_bus, 0);
    rb_define_method(c, "recommended_hd_storage_controller", GuestOSType__get_recommended_hd_storage_controller, 0);
    rb_define_method(c, "recommended_hd_storage_bus", GuestOSType__get_recommended_hd_storage_bus, 0);
    rb_define_method(c, "recommended_firmware", GuestOSType__get_recommended_firmware, 0);
    rb_define_method(c, "recommended_usb_hid", GuestOSType__get_recommended_usb_hid, 0);
    rb_define_method(c, "recommended_hpet", GuestOSType__get_recommended_hpet, 0);
    rb_define_method(c, "recommended_usb_tablet", GuestOSType__get_recommended_usb_tablet, 0);
    rb_define_method(c, "recommended_rtc_use_utc", GuestOSType__get_recommended_rtc_use_utc, 0);
    rb_define_method(c, "recommended_chipset", GuestOSType__get_recommended_chipset, 0);
    rb_define_method(c, "recommended_audio_controller", GuestOSType__get_recommended_audio_controller, 0);
    rb_define_method(c, "recommended_floppy", GuestOSType__get_recommended_floppy, 0);
    rb_define_method(c, "recommended_usb", GuestOSType__get_recommended_usb, 0);
  }
  {
    iid_t iid  = {0x54992946, 0x6af1, 0x4e49, {0x98, 0xec, 0x58, 0xb5, 0x58, 0xb7, 0x29, 0x1e}};
    VALUE c    = cAdditionsFacility
      = rb_define_class_under(under, "AdditionsFacility", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "class_type", AdditionsFacility__get_class_type, 0);
    rb_define_method(c, "last_updated", AdditionsFacility__get_last_updated, 0);
    rb_define_method(c, "name", AdditionsFacility__get_name, 0);
    rb_define_method(c, "status", AdditionsFacility__get_status, 0);
    rb_define_method(c, "type", AdditionsFacility__get_type, 0);
  }
  {
    iid_t iid  = {0x57eb82a8, 0x822b, 0x42c1, {0x9d, 0x1c, 0x5c, 0x54, 0xbc, 0x3d, 0x32, 0x50}};
    VALUE c    = cGuestSession
      = rb_define_class_under(under, "GuestSession", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "user", GuestSession__get_user, 0);
    rb_define_method(c, "domain", GuestSession__get_domain, 0);
    rb_define_method(c, "name", GuestSession__get_name, 0);
    rb_define_method(c, "id", GuestSession__get_id, 0);
    rb_define_method(c, "timeout", GuestSession__get_timeout, 0);
    rb_define_method(c, "environment", GuestSession__get_environment, 0);
    rb_define_method(c, "processes", GuestSession__get_processes, 0);
    rb_define_method(c, "directories", GuestSession__get_directories, 0);
    rb_define_method(c, "files", GuestSession__get_files, 0);
    rb_define_method(c, "close", GuestSession__close, 0);
    rb_define_method(c, "copy_from", GuestSession__copy_from, 3);
    rb_define_method(c, "copy_to", GuestSession__copy_to, 3);
    rb_define_method(c, "directory_create", GuestSession__directory_create, 3);
    rb_define_method(c, "directory_create_temp", GuestSession__directory_create_temp, 4);
    rb_define_method(c, "directory_exists", GuestSession__directory_exists, 1);
    rb_define_method(c, "directory_open", GuestSession__directory_open, 3);
    rb_define_method(c, "directory_query_info", GuestSession__directory_query_info, 1);
    rb_define_method(c, "directory_remove", GuestSession__directory_remove, 1);
    rb_define_method(c, "directory_remove_recursive", GuestSession__directory_remove_recursive, 2);
    rb_define_method(c, "directory_rename", GuestSession__directory_rename, 3);
    rb_define_method(c, "directory_set_acl", GuestSession__directory_set_acl, 2);
    rb_define_method(c, "environment_clear", GuestSession__environment_clear, 0);
    rb_define_method(c, "environment_get", GuestSession__environment_get, 1);
    rb_define_method(c, "environment_set", GuestSession__environment_set, 2);
    rb_define_method(c, "environment_unset", GuestSession__environment_unset, 1);
    rb_define_method(c, "file_create_temp", GuestSession__file_create_temp, 4);
    rb_define_method(c, "file_exists", GuestSession__file_exists, 1);
    rb_define_method(c, "file_remove", GuestSession__file_remove, 1);
    rb_define_method(c, "file_open", GuestSession__file_open, 5);
    rb_define_method(c, "file_query_info", GuestSession__file_query_info, 1);
    rb_define_method(c, "file_query_size", GuestSession__file_query_size, 1);
    rb_define_method(c, "file_rename", GuestSession__file_rename, 3);
    rb_define_method(c, "file_set_acl", GuestSession__file_set_acl, 2);
    rb_define_method(c, "process_create", GuestSession__process_create, 5);
    rb_define_method(c, "process_create_ex", GuestSession__process_create_ex, 7);
    rb_define_method(c, "process_get", GuestSession__process_get, 1);
    rb_define_method(c, "symlink_create", GuestSession__symlink_create, 3);
    rb_define_method(c, "symlink_exists", GuestSession__symlink_exists, 1);
    rb_define_method(c, "symlink_read", GuestSession__symlink_read, 2);
    rb_define_method(c, "symlink_remove_directory", GuestSession__symlink_remove_directory, 1);
    rb_define_method(c, "symlink_remove_file", GuestSession__symlink_remove_file, 1);
  }
  {
    iid_t iid  = {0x08864d56, 0x96ab, 0x418b, {0xad, 0xbc, 0x5a, 0x67, 0x95, 0x32, 0xae, 0xb0}};
    VALUE c    = cProcess
      = rb_define_class_under(under, "Process", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "pid", Process__get_pid, 0);
    rb_define_method(c, "status", Process__get_status, 0);
    rb_define_method(c, "exit_code", Process__get_exit_code, 0);
    rb_define_method(c, "environment", Process__get_environment, 0);
    rb_define_method(c, "arguments", Process__get_arguments, 0);
    rb_define_method(c, "executable_path", Process__get_executable_path, 0);
    rb_define_method(c, "name", Process__get_name, 0);
    rb_define_method(c, "wait_for", Process__wait_for, 2);
    rb_define_method(c, "wait_for_array", Process__wait_for_array, 2);
    rb_define_method(c, "read", Process__read, 3);
    rb_define_method(c, "write", Process__write, 4);
    rb_define_method(c, "write_array", Process__write_array, 4);
    rb_define_method(c, "terminate", Process__terminate, 0);
  }
  {
    iid_t iid  = {0xdfa39a36, 0x5d43, 0x4840, {0xa0, 0x25, 0x67, 0xea, 0x95, 0x6b, 0x31, 0x11}};
    VALUE c    = cGuestProcess
      = rb_define_class_under(under, "GuestProcess", cProcess);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
  }
  {
    iid_t iid  = {0x1b70dd03, 0x26d7, 0x483a, {0x88, 0x77, 0x89, 0xbb, 0xb0, 0xf8, 0x7b, 0x70}};
    VALUE c    = cDirectory
      = rb_define_class_under(under, "Directory", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "directory_name", Directory__get_directory_name, 0);
    rb_define_method(c, "filter", Directory__get_filter, 0);
    rb_define_method(c, "close", Directory__close, 0);
    rb_define_method(c, "read", Directory__read, 0);
  }
  {
    iid_t iid  = {0xaf4a8ce0, 0x0725, 0x42b7, {0x88, 0x26, 0x46, 0xe3, 0xc7, 0xba, 0x73, 0x57}};
    VALUE c    = cGuestDirectory
      = rb_define_class_under(under, "GuestDirectory", cDirectory);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
  }
  {
    iid_t iid  = {0xb702a560, 0x6139, 0x4a8e, {0xa8, 0x92, 0xbb, 0xf1, 0x4b, 0x97, 0xbf, 0x97}};
    VALUE c    = cFile
      = rb_define_class_under(under, "File", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "creation_mode", File__get_creation_mode, 0);
    rb_define_method(c, "disposition", File__get_disposition, 0);
    rb_define_method(c, "file_name", File__get_file_name, 0);
    rb_define_method(c, "initial_size", File__get_initial_size, 0);
    rb_define_method(c, "open_mode", File__get_open_mode, 0);
    rb_define_method(c, "offset", File__get_offset, 0);
    rb_define_method(c, "close", File__close, 0);
    rb_define_method(c, "query_info", File__query_info, 0);
    rb_define_method(c, "read", File__read, 2);
    rb_define_method(c, "read_at", File__read_at, 3);
    rb_define_method(c, "seek", File__seek, 2);
    rb_define_method(c, "set_acl", File__set_acl, 1);
    rb_define_method(c, "write", File__write, 2);
    rb_define_method(c, "write_at", File__write_at, 3);
  }
  {
    iid_t iid  = {0x60661aec, 0x145f, 0x4d11, {0xb8, 0x0e, 0x8e, 0xa1, 0x51, 0x59, 0x80, 0x93}};
    VALUE c    = cGuestFile
      = rb_define_class_under(under, "GuestFile", cFile);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
  }
  {
    iid_t iid  = {0x4047ba30, 0x7006, 0x4966, {0xae, 0x86, 0x94, 0x16, 0x4e, 0x5e, 0x20, 0xeb}};
    VALUE c    = cFsObjInfo
      = rb_define_class_under(under, "FsObjInfo", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "access_time", FsObjInfo__get_access_time, 0);
    rb_define_method(c, "allocated_size", FsObjInfo__get_allocated_size, 0);
    rb_define_method(c, "birth_time", FsObjInfo__get_birth_time, 0);
    rb_define_method(c, "change_time", FsObjInfo__get_change_time, 0);
    rb_define_method(c, "device_number", FsObjInfo__get_device_number, 0);
    rb_define_method(c, "file_attributes", FsObjInfo__get_file_attributes, 0);
    rb_define_method(c, "generation_id", FsObjInfo__get_generation_id, 0);
    rb_define_method(c, "gid", FsObjInfo__get_gid, 0);
    rb_define_method(c, "group_name", FsObjInfo__get_group_name, 0);
    rb_define_method(c, "hard_links", FsObjInfo__get_hard_links, 0);
    rb_define_method(c, "modification_time", FsObjInfo__get_modification_time, 0);
    rb_define_method(c, "name", FsObjInfo__get_name, 0);
    rb_define_method(c, "node_id", FsObjInfo__get_node_id, 0);
    rb_define_method(c, "node_id_device", FsObjInfo__get_node_id_device, 0);
    rb_define_method(c, "object_size", FsObjInfo__get_object_size, 0);
    rb_define_method(c, "type", FsObjInfo__get_type, 0);
    rb_define_method(c, "uid", FsObjInfo__get_uid, 0);
    rb_define_method(c, "user_flags", FsObjInfo__get_user_flags, 0);
    rb_define_method(c, "user_name", FsObjInfo__get_user_name, 0);
  }
  {
    iid_t iid  = {0xd5cf678e, 0x3484, 0x4e4a, {0xac, 0x55, 0x32, 0x9e, 0x15, 0x46, 0x2e, 0x18}};
    VALUE c    = cGuestFsObjInfo
      = rb_define_class_under(under, "GuestFsObjInfo", cFsObjInfo);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
  }
  {
    iid_t iid  = {0x19c32350, 0x0618, 0x4ede, {0xb0, 0xc3, 0x2b, 0x43, 0x11, 0xbf, 0x0d, 0x9b}};
    VALUE c    = cGuest
      = rb_define_class_under(under, "Guest", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "os_type_id", Guest__get_os_type_id, 0);
    rb_define_method(c, "additions_run_level", Guest__get_additions_run_level, 0);
    rb_define_method(c, "additions_version", Guest__get_additions_version, 0);
    rb_define_method(c, "additions_revision", Guest__get_additions_revision, 0);
    rb_define_method(c, "facilities", Guest__get_facilities, 0);
    rb_define_method(c, "sessions", Guest__get_sessions, 0);
    rb_define_method(c, "memory_balloon_size", Guest__get_memory_balloon_size, 0);
    rb_define_method(c, "statistics_update_interval", Guest__get_statistics_update_interval, 0);
    rb_define_method(c, "internal_get_statistics", Guest__internal_get_statistics, 0);
    rb_define_method(c, "get_facility_status", Guest__get_facility_status, 1);
    rb_define_method(c, "get_additions_status", Guest__get_additions_status, 1);
    rb_define_method(c, "set_credentials", Guest__set_credentials, 4);
    rb_define_method(c, "drag_hg_enter", Guest__drag_hg_enter, 6);
    rb_define_method(c, "drag_hg_move", Guest__drag_hg_move, 6);
    rb_define_method(c, "drag_hg_leave", Guest__drag_hg_leave, 1);
    rb_define_method(c, "drag_hg_drop", Guest__drag_hg_drop, 6);
    rb_define_method(c, "drag_hg_put_data", Guest__drag_hg_put_data, 3);
    rb_define_method(c, "drag_gh_pending", Guest__drag_gh_pending, 1);
    rb_define_method(c, "drag_gh_dropped", Guest__drag_gh_dropped, 2);
    rb_define_method(c, "drag_gh_get_data", Guest__drag_gh_get_data, 0);
    rb_define_method(c, "create_session", Guest__create_session, 4);
    rb_define_method(c, "find_session", Guest__find_session, 1);
    rb_define_method(c, "update_guest_additions", Guest__update_guest_additions, 2);
  }
  {
    iid_t iid  = {0xc20238e4, 0x3221, 0x4d3f, {0x88, 0x91, 0x81, 0xce, 0x92, 0xd9, 0xf9, 0x13}};
    VALUE c    = cProgress
      = rb_define_class_under(under, "Progress", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "id", Progress__get_id, 0);
    rb_define_method(c, "description", Progress__get_description, 0);
    rb_define_method(c, "initiator", Progress__get_initiator, 0);
    rb_define_method(c, "cancelable", Progress__get_cancelable, 0);
    rb_define_method(c, "percent", Progress__get_percent, 0);
    rb_define_method(c, "time_remaining", Progress__get_time_remaining, 0);
    rb_define_method(c, "completed", Progress__get_completed, 0);
    rb_define_method(c, "canceled", Progress__get_canceled, 0);
    rb_define_method(c, "result_code", Progress__get_result_code, 0);
    rb_define_method(c, "error_info", Progress__get_error_info, 0);
    rb_define_method(c, "operation_count", Progress__get_operation_count, 0);
    rb_define_method(c, "operation", Progress__get_operation, 0);
    rb_define_method(c, "operation_description", Progress__get_operation_description, 0);
    rb_define_method(c, "operation_percent", Progress__get_operation_percent, 0);
    rb_define_method(c, "operation_weight", Progress__get_operation_weight, 0);
    rb_define_method(c, "timeout", Progress__get_timeout, 0);
    rb_define_method(c, "set_current_operation_progress", Progress__set_current_operation_progress, 1);
    rb_define_method(c, "set_next_operation", Progress__set_next_operation, 2);
    rb_define_method(c, "wait_for_completion", Progress__wait_for_completion, 1);
    rb_define_method(c, "wait_for_operation_completion", Progress__wait_for_operation_completion, 2);
    rb_define_method(c, "wait_for_async_progress_completion", Progress__wait_for_async_progress_completion, 1);
    rb_define_method(c, "cancel", Progress__cancel, 0);
  }
  {
    iid_t iid  = {0x0472823b, 0xc6e7, 0x472a, {0x8e, 0x9f, 0xd7, 0x32, 0xe8, 0x6b, 0x84, 0x63}};
    VALUE c    = cSnapshot
      = rb_define_class_under(under, "Snapshot", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "id", Snapshot__get_id, 0);
    rb_define_method(c, "name", Snapshot__get_name, 0);
    rb_define_method(c, "description", Snapshot__get_description, 0);
    rb_define_method(c, "time_stamp", Snapshot__get_time_stamp, 0);
    rb_define_method(c, "online", Snapshot__get_online, 0);
    rb_define_method(c, "machine", Snapshot__get_machine, 0);
    rb_define_method(c, "parent", Snapshot__get_parent, 0);
    rb_define_method(c, "children", Snapshot__get_children, 0);
    rb_define_method(c, "get_children_count", Snapshot__get_children_count, 0);
  }
  {
    iid_t iid  = {0x5ee464d6, 0x0613, 0x4331, {0xb1, 0x54, 0x7c, 0xe1, 0x21, 0x70, 0xef, 0x9f}};
    VALUE c    = cMediumAttachment
      = rb_define_class_under(under, "MediumAttachment", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "medium", MediumAttachment__get_medium, 0);
    rb_define_method(c, "controller", MediumAttachment__get_controller, 0);
    rb_define_method(c, "port", MediumAttachment__get_port, 0);
    rb_define_method(c, "device", MediumAttachment__get_device, 0);
    rb_define_method(c, "type", MediumAttachment__get_type, 0);
    rb_define_method(c, "passthrough", MediumAttachment__get_passthrough, 0);
    rb_define_method(c, "temporary_eject", MediumAttachment__get_temporary_eject, 0);
    rb_define_method(c, "is_ejected", MediumAttachment__get_is_ejected, 0);
    rb_define_method(c, "non_rotational", MediumAttachment__get_non_rotational, 0);
    rb_define_method(c, "discard", MediumAttachment__get_discard, 0);
    rb_define_method(c, "bandwidth_group", MediumAttachment__get_bandwidth_group, 0);
  }
  {
    iid_t iid  = {0x29989373, 0xb111, 0x4654, {0x84, 0x93, 0x2e, 0x11, 0x76, 0xcb, 0xa8, 0x90}};
    VALUE c    = cMedium
      = rb_define_class_under(under, "Medium", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "id", Medium__get_id, 0);
    rb_define_method(c, "description", Medium__get_description, 0);
    rb_define_method(c, "state", Medium__get_state, 0);
    rb_define_method(c, "variant", Medium__get_variant, 0);
    rb_define_method(c, "location", Medium__get_location, 0);
    rb_define_method(c, "name", Medium__get_name, 0);
    rb_define_method(c, "device_type", Medium__get_device_type, 0);
    rb_define_method(c, "host_drive", Medium__get_host_drive, 0);
    rb_define_method(c, "size", Medium__get_size, 0);
    rb_define_method(c, "format", Medium__get_format, 0);
    rb_define_method(c, "medium_format", Medium__get_medium_format, 0);
    rb_define_method(c, "type", Medium__get_type, 0);
    rb_define_method(c, "allowed_types", Medium__get_allowed_types, 0);
    rb_define_method(c, "parent", Medium__get_parent, 0);
    rb_define_method(c, "children", Medium__get_children, 0);
    rb_define_method(c, "base", Medium__get_base, 0);
    rb_define_method(c, "read_only", Medium__get_read_only, 0);
    rb_define_method(c, "logical_size", Medium__get_logical_size, 0);
    rb_define_method(c, "auto_reset", Medium__get_auto_reset, 0);
    rb_define_method(c, "last_access_error", Medium__get_last_access_error, 0);
    rb_define_method(c, "machine_ids", Medium__get_machine_ids, 0);
    rb_define_method(c, "set_ids", Medium__set_ids, 4);
    rb_define_method(c, "refresh_state", Medium__refresh_state, 0);
    rb_define_method(c, "get_snapshot_ids", Medium__get_snapshot_ids, 1);
    rb_define_method(c, "lock_read", Medium__lock_read, 0);
    rb_define_method(c, "unlock_read", Medium__unlock_read, 0);
    rb_define_method(c, "lock_write", Medium__lock_write, 0);
    rb_define_method(c, "unlock_write", Medium__unlock_write, 0);
    rb_define_method(c, "close", Medium__close, 0);
    rb_define_method(c, "get_property", Medium__get_property, 1);
    rb_define_method(c, "set_property", Medium__set_property, 2);
    rb_define_method(c, "get_properties", Medium__get_properties, 1);
    rb_define_method(c, "set_properties", Medium__set_properties, 2);
    rb_define_method(c, "create_base_storage", Medium__create_base_storage, 2);
    rb_define_method(c, "delete_storage", Medium__delete_storage, 0);
    rb_define_method(c, "create_diff_storage", Medium__create_diff_storage, 2);
    rb_define_method(c, "merge_to", Medium__merge_to, 1);
    rb_define_method(c, "clone_to", Medium__clone_to, 3);
    rb_define_method(c, "clone_to_base", Medium__clone_to_base, 2);
    rb_define_method(c, "compact", Medium__compact, 0);
    rb_define_method(c, "resize", Medium__resize, 1);
    rb_define_method(c, "reset", Medium__reset, 0);
  }
  {
    iid_t iid  = {0x9bd5b655, 0xea47, 0x4637, {0x99, 0xf3, 0xaa, 0xd0, 0x94, 0x8b, 0xe3, 0x5b}};
    VALUE c    = cMediumFormat
      = rb_define_class_under(under, "MediumFormat", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "id", MediumFormat__get_id, 0);
    rb_define_method(c, "name", MediumFormat__get_name, 0);
    rb_define_method(c, "capabilities", MediumFormat__get_capabilities, 0);
    rb_define_method(c, "describe_file_extensions", MediumFormat__describe_file_extensions, 0);
    rb_define_method(c, "describe_properties", MediumFormat__describe_properties, 0);
  }
  {
    iid_t iid  = {0xf6916ec5, 0xa881, 0x4237, {0x89, 0x8f, 0x7d, 0xe5, 0x8c, 0xf8, 0x86, 0x72}};
    VALUE c    = cKeyboard
      = rb_define_class_under(under, "Keyboard", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "event_source", Keyboard__get_event_source, 0);
    rb_define_method(c, "put_scancode", Keyboard__put_scancode, 1);
    rb_define_method(c, "put_scancodes", Keyboard__put_scancodes, 1);
    rb_define_method(c, "put_cad", Keyboard__put_cad, 0);
  }
  {
    iid_t iid  = {0x05044a52, 0x7811, 0x4f00, {0xae, 0x3a, 0x0a, 0xb7, 0xff, 0x70, 0x7b, 0x10}};
    VALUE c    = cMouse
      = rb_define_class_under(under, "Mouse", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "absolute_supported", Mouse__get_absolute_supported, 0);
    rb_define_method(c, "relative_supported", Mouse__get_relative_supported, 0);
    rb_define_method(c, "needs_host_cursor", Mouse__get_needs_host_cursor, 0);
    rb_define_method(c, "event_source", Mouse__get_event_source, 0);
    rb_define_method(c, "put_mouse_event", Mouse__put_mouse_event, 5);
    rb_define_method(c, "put_mouse_event_absolute", Mouse__put_mouse_event_absolute, 5);
  }
  {
    iid_t iid  = {0xb7ed347a, 0x5765, 0x40a0, {0xae, 0x1c, 0xf5, 0x43, 0xeb, 0x4d, 0xde, 0xaf}};
    VALUE c    = cFramebuffer
      = rb_define_class_under(under, "Framebuffer", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "address", Framebuffer__get_address, 0);
    rb_define_method(c, "width", Framebuffer__get_width, 0);
    rb_define_method(c, "height", Framebuffer__get_height, 0);
    rb_define_method(c, "bits_per_pixel", Framebuffer__get_bits_per_pixel, 0);
    rb_define_method(c, "bytes_per_line", Framebuffer__get_bytes_per_line, 0);
    rb_define_method(c, "pixel_format", Framebuffer__get_pixel_format, 0);
    rb_define_method(c, "uses_guest_vram", Framebuffer__get_uses_guest_vram, 0);
    rb_define_method(c, "height_reduction", Framebuffer__get_height_reduction, 0);
    rb_define_method(c, "overlay", Framebuffer__get_overlay, 0);
    rb_define_method(c, "win_id", Framebuffer__get_win_id, 0);
    rb_define_method(c, "lock", Framebuffer__lock, 0);
    rb_define_method(c, "unlock", Framebuffer__unlock, 0);
    rb_define_method(c, "notify_update", Framebuffer__notify_update, 4);
    rb_define_method(c, "request_resize", Framebuffer__request_resize, 7);
    rb_define_method(c, "video_mode_supported", Framebuffer__video_mode_supported, 3);
    rb_define_method(c, "get_visible_region", Framebuffer__get_visible_region, 2);
    rb_define_method(c, "set_visible_region", Framebuffer__set_visible_region, 2);
    rb_define_method(c, "process_vhwa_command", Framebuffer__process_vhwa_command, 1);
  }
  {
    iid_t iid  = {0x0bcc1c7e, 0xe415, 0x47d2, {0xbf, 0xdb, 0xe4, 0xc7, 0x05, 0xfb, 0x0f, 0x47}};
    VALUE c    = cFramebufferOverlay
      = rb_define_class_under(under, "FramebufferOverlay", cFramebuffer);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "x", FramebufferOverlay__get_x, 0);
    rb_define_method(c, "y", FramebufferOverlay__get_y, 0);
    rb_define_method(c, "visible", FramebufferOverlay__get_visible, 0);
    rb_define_method(c, "alpha", FramebufferOverlay__get_alpha, 0);
    rb_define_method(c, "move", FramebufferOverlay__move, 2);
  }
  {
    iid_t iid  = {0xb83ee395, 0x8679, 0x40ca, {0x8d, 0x60, 0x1a, 0x0c, 0xbe, 0x72, 0x49, 0x30}};
    VALUE c    = cDisplay
      = rb_define_class_under(under, "Display", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "get_screen_resolution", Display__get_screen_resolution, 1);
    rb_define_method(c, "set_framebuffer", Display__set_framebuffer, 2);
    rb_define_method(c, "get_framebuffer", Display__get_framebuffer, 1);
    rb_define_method(c, "set_video_mode_hint", Display__set_video_mode_hint, 8);
    rb_define_method(c, "set_seamless_mode", Display__set_seamless_mode, 1);
    rb_define_method(c, "take_screenshot", Display__take_screenshot, 4);
    rb_define_method(c, "take_screenshot_to_array", Display__take_screenshot_to_array, 3);
    rb_define_method(c, "take_screenshot_png_to_array", Display__take_screenshot_png_to_array, 3);
    rb_define_method(c, "draw_to_screen", Display__draw_to_screen, 6);
    rb_define_method(c, "invalidate_and_update", Display__invalidate_and_update, 0);
    rb_define_method(c, "resize_completed", Display__resize_completed, 1);
    rb_define_method(c, "complete_vhwa_command", Display__complete_vhwa_command, 1);
    rb_define_method(c, "viewport_changed", Display__viewport_changed, 5);
  }
  {
    iid_t iid  = {0xefa0f965, 0x63c7, 0x4c60, {0xaf, 0xdf, 0xb1, 0xcc, 0x99, 0x43, 0xb9, 0xc0}};
    VALUE c    = cNetworkAdapter
      = rb_define_class_under(under, "NetworkAdapter", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "adapter_type", NetworkAdapter__get_adapter_type, 0);
    rb_define_method(c, "slot", NetworkAdapter__get_slot, 0);
    rb_define_method(c, "enabled", NetworkAdapter__get_enabled, 0);
    rb_define_method(c, "mac_address", NetworkAdapter__get_mac_address, 0);
    rb_define_method(c, "attachment_type", NetworkAdapter__get_attachment_type, 0);
    rb_define_method(c, "bridged_interface", NetworkAdapter__get_bridged_interface, 0);
    rb_define_method(c, "host_only_interface", NetworkAdapter__get_host_only_interface, 0);
    rb_define_method(c, "internal_network", NetworkAdapter__get_internal_network, 0);
    rb_define_method(c, "nat_network", NetworkAdapter__get_nat_network, 0);
    rb_define_method(c, "generic_driver", NetworkAdapter__get_generic_driver, 0);
    rb_define_method(c, "cable_connected", NetworkAdapter__get_cable_connected, 0);
    rb_define_method(c, "line_speed", NetworkAdapter__get_line_speed, 0);
    rb_define_method(c, "promisc_mode_policy", NetworkAdapter__get_promisc_mode_policy, 0);
    rb_define_method(c, "trace_enabled", NetworkAdapter__get_trace_enabled, 0);
    rb_define_method(c, "trace_file", NetworkAdapter__get_trace_file, 0);
    rb_define_method(c, "nat_engine", NetworkAdapter__get_nat_engine, 0);
    rb_define_method(c, "boot_priority", NetworkAdapter__get_boot_priority, 0);
    rb_define_method(c, "bandwidth_group", NetworkAdapter__get_bandwidth_group, 0);
    rb_define_method(c, "get_property", NetworkAdapter__get_property, 1);
    rb_define_method(c, "set_property", NetworkAdapter__set_property, 2);
    rb_define_method(c, "get_properties", NetworkAdapter__get_properties, 1);
  }
  {
    iid_t iid  = {0x937f6970, 0x5103, 0x4745, {0xb7, 0x8e, 0xd2, 0x8d, 0xcf, 0x14, 0x79, 0xa8}};
    VALUE c    = cSerialPort
      = rb_define_class_under(under, "SerialPort", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "slot", SerialPort__get_slot, 0);
    rb_define_method(c, "enabled", SerialPort__get_enabled, 0);
    rb_define_method(c, "io_base", SerialPort__get_io_base, 0);
    rb_define_method(c, "irq", SerialPort__get_irq, 0);
    rb_define_method(c, "host_mode", SerialPort__get_host_mode, 0);
    rb_define_method(c, "server", SerialPort__get_server, 0);
    rb_define_method(c, "path", SerialPort__get_path, 0);
  }
  {
    iid_t iid  = {0x0c925f06, 0xdd10, 0x4b77, {0x8d, 0xe8, 0x29, 0x4d, 0x73, 0x8c, 0x32, 0x14}};
    VALUE c    = cParallelPort
      = rb_define_class_under(under, "ParallelPort", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "slot", ParallelPort__get_slot, 0);
    rb_define_method(c, "enabled", ParallelPort__get_enabled, 0);
    rb_define_method(c, "io_base", ParallelPort__get_io_base, 0);
    rb_define_method(c, "irq", ParallelPort__get_irq, 0);
    rb_define_method(c, "path", ParallelPort__get_path, 0);
  }
  {
    iid_t iid  = {0xa9abbb7c, 0xd678, 0x43b2, {0xbe, 0xd2, 0x19, 0xec, 0x0e, 0x32, 0x30, 0x3d}};
    VALUE c    = cMachineDebugger
      = rb_define_class_under(under, "MachineDebugger", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "single_step", MachineDebugger__get_single_step, 0);
    rb_define_method(c, "recompile_user", MachineDebugger__get_recompile_user, 0);
    rb_define_method(c, "recompile_supervisor", MachineDebugger__get_recompile_supervisor, 0);
    rb_define_method(c, "patm_enabled", MachineDebugger__get_patm_enabled, 0);
    rb_define_method(c, "csam_enabled", MachineDebugger__get_csam_enabled, 0);
    rb_define_method(c, "log_enabled", MachineDebugger__get_log_enabled, 0);
    rb_define_method(c, "log_dbg_flags", MachineDebugger__get_log_dbg_flags, 0);
    rb_define_method(c, "log_dbg_groups", MachineDebugger__get_log_dbg_groups, 0);
    rb_define_method(c, "log_dbg_destinations", MachineDebugger__get_log_dbg_destinations, 0);
    rb_define_method(c, "log_rel_flags", MachineDebugger__get_log_rel_flags, 0);
    rb_define_method(c, "log_rel_groups", MachineDebugger__get_log_rel_groups, 0);
    rb_define_method(c, "log_rel_destinations", MachineDebugger__get_log_rel_destinations, 0);
    rb_define_method(c, "hw_virt_ex_enabled", MachineDebugger__get_hw_virt_ex_enabled, 0);
    rb_define_method(c, "hw_virt_ex_nested_paging_enabled", MachineDebugger__get_hw_virt_ex_nested_paging_enabled, 0);
    rb_define_method(c, "hw_virt_ex_vpid_enabled", MachineDebugger__get_hw_virt_ex_vpid_enabled, 0);
    rb_define_method(c, "os_name", MachineDebugger__get_os_name, 0);
    rb_define_method(c, "os_version", MachineDebugger__get_os_version, 0);
    rb_define_method(c, "pae_enabled", MachineDebugger__get_pae_enabled, 0);
    rb_define_method(c, "virtual_time_rate", MachineDebugger__get_virtual_time_rate, 0);
    rb_define_method(c, "vm", MachineDebugger__get_vm, 0);
    rb_define_method(c, "dump_guest_core", MachineDebugger__dump_guest_core, 2);
    rb_define_method(c, "dump_host_process_core", MachineDebugger__dump_host_process_core, 2);
    rb_define_method(c, "info", MachineDebugger__info, 2);
    rb_define_method(c, "inject_n_m_i", MachineDebugger__inject_n_m_i, 0);
    rb_define_method(c, "modify_log_groups", MachineDebugger__modify_log_groups, 1);
    rb_define_method(c, "modify_log_flags", MachineDebugger__modify_log_flags, 1);
    rb_define_method(c, "modify_log_destinations", MachineDebugger__modify_log_destinations, 1);
    rb_define_method(c, "read_physical_memory", MachineDebugger__read_physical_memory, 2);
    rb_define_method(c, "write_physical_memory", MachineDebugger__write_physical_memory, 3);
    rb_define_method(c, "read_virtual_memory", MachineDebugger__read_virtual_memory, 3);
    rb_define_method(c, "write_virtual_memory", MachineDebugger__write_virtual_memory, 4);
    rb_define_method(c, "detect_os", MachineDebugger__detect_os, 0);
    rb_define_method(c, "get_register", MachineDebugger__get_register, 2);
    rb_define_method(c, "get_registers", MachineDebugger__get_registers, 1);
    rb_define_method(c, "set_register", MachineDebugger__set_register, 3);
    rb_define_method(c, "set_registers", MachineDebugger__set_registers, 3);
    rb_define_method(c, "dump_guest_stack", MachineDebugger__dump_guest_stack, 1);
    rb_define_method(c, "reset_stats", MachineDebugger__reset_stats, 1);
    rb_define_method(c, "dump_stats", MachineDebugger__dump_stats, 1);
    rb_define_method(c, "get_stats", MachineDebugger__get_stats, 2);
  }
  {
    iid_t iid  = {0x01e6f13a, 0x0580, 0x452f, {0xa4, 0x0f, 0x74, 0xe3, 0x2a, 0x5e, 0x49, 0x21}};
    VALUE c    = cUSBController
      = rb_define_class_under(under, "USBController", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "enabled", USBController__get_enabled, 0);
    rb_define_method(c, "enabled_ehci", USBController__get_enabled_ehci, 0);
    rb_define_method(c, "proxy_available", USBController__get_proxy_available, 0);
    rb_define_method(c, "usb_standard", USBController__get_usb_standard, 0);
    rb_define_method(c, "device_filters", USBController__get_device_filters, 0);
    rb_define_method(c, "create_device_filter", USBController__create_device_filter, 1);
    rb_define_method(c, "insert_device_filter", USBController__insert_device_filter, 2);
    rb_define_method(c, "remove_device_filter", USBController__remove_device_filter, 1);
  }
  {
    iid_t iid  = {0xf8967b0b, 0x4483, 0x400f, {0x92, 0xb5, 0x8b, 0x67, 0x5d, 0x98, 0xa8, 0x5b}};
    VALUE c    = cUSBDevice
      = rb_define_class_under(under, "USBDevice", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "id", USBDevice__get_id, 0);
    rb_define_method(c, "vendor_id", USBDevice__get_vendor_id, 0);
    rb_define_method(c, "product_id", USBDevice__get_product_id, 0);
    rb_define_method(c, "revision", USBDevice__get_revision, 0);
    rb_define_method(c, "manufacturer", USBDevice__get_manufacturer, 0);
    rb_define_method(c, "product", USBDevice__get_product, 0);
    rb_define_method(c, "serial_number", USBDevice__get_serial_number, 0);
    rb_define_method(c, "address", USBDevice__get_address, 0);
    rb_define_method(c, "port", USBDevice__get_port, 0);
    rb_define_method(c, "version", USBDevice__get_version, 0);
    rb_define_method(c, "port_version", USBDevice__get_port_version, 0);
    rb_define_method(c, "remote", USBDevice__get_remote, 0);
  }
  {
    iid_t iid  = {0xd6831fb4, 0x1a94, 0x4c2c, {0x96, 0xef, 0x8d, 0x0d, 0x61, 0x92, 0x06, 0x6d}};
    VALUE c    = cUSBDeviceFilter
      = rb_define_class_under(under, "USBDeviceFilter", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "name", USBDeviceFilter__get_name, 0);
    rb_define_method(c, "active", USBDeviceFilter__get_active, 0);
    rb_define_method(c, "vendor_id", USBDeviceFilter__get_vendor_id, 0);
    rb_define_method(c, "product_id", USBDeviceFilter__get_product_id, 0);
    rb_define_method(c, "revision", USBDeviceFilter__get_revision, 0);
    rb_define_method(c, "manufacturer", USBDeviceFilter__get_manufacturer, 0);
    rb_define_method(c, "product", USBDeviceFilter__get_product, 0);
    rb_define_method(c, "serial_number", USBDeviceFilter__get_serial_number, 0);
    rb_define_method(c, "port", USBDeviceFilter__get_port, 0);
    rb_define_method(c, "remote", USBDeviceFilter__get_remote, 0);
    rb_define_method(c, "masked_interfaces", USBDeviceFilter__get_masked_interfaces, 0);
  }
  {
    iid_t iid  = {0x173b4b44, 0xd268, 0x4334, {0xa0, 0x0d, 0xb6, 0x52, 0x1c, 0x9a, 0x74, 0x0a}};
    VALUE c    = cHostUSBDevice
      = rb_define_class_under(under, "HostUSBDevice", cUSBDevice);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "state", HostUSBDevice__get_state, 0);
  }
  {
    iid_t iid  = {0x4cc70246, 0xd74a, 0x400f, {0x82, 0x22, 0x39, 0x00, 0x48, 0x9c, 0x03, 0x74}};
    VALUE c    = cHostUSBDeviceFilter
      = rb_define_class_under(under, "HostUSBDeviceFilter", cUSBDeviceFilter);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "action", HostUSBDeviceFilter__get_action, 0);
  }
  {
    iid_t iid  = {0x921873db, 0x5f3f, 0x4b69, {0x91, 0xf9, 0x7b, 0xe9, 0xe5, 0x35, 0xa2, 0xcb}};
    VALUE c    = cAudioAdapter
      = rb_define_class_under(under, "AudioAdapter", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "enabled", AudioAdapter__get_enabled, 0);
    rb_define_method(c, "audio_controller", AudioAdapter__get_audio_controller, 0);
    rb_define_method(c, "audio_driver", AudioAdapter__get_audio_driver, 0);
  }
  {
    iid_t iid  = {0xd38de40a, 0xc2c1, 0x4e95, {0xb5, 0xa4, 0x16, 0x7b, 0x05, 0xf5, 0x69, 0x4c}};
    VALUE c    = cVRDEServer
      = rb_define_class_under(under, "VRDEServer", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "enabled", VRDEServer__get_enabled, 0);
    rb_define_method(c, "auth_type", VRDEServer__get_auth_type, 0);
    rb_define_method(c, "auth_timeout", VRDEServer__get_auth_timeout, 0);
    rb_define_method(c, "allow_multi_connection", VRDEServer__get_allow_multi_connection, 0);
    rb_define_method(c, "reuse_single_connection", VRDEServer__get_reuse_single_connection, 0);
    rb_define_method(c, "vrde_ext_pack", VRDEServer__get_vrde_ext_pack, 0);
    rb_define_method(c, "auth_library", VRDEServer__get_auth_library, 0);
    rb_define_method(c, "vrde_properties", VRDEServer__get_vrde_properties, 0);
    rb_define_method(c, "set_vrde_property", VRDEServer__set_vrde_property, 2);
    rb_define_method(c, "get_vrde_property", VRDEServer__get_vrde_property, 1);
  }
  {
    iid_t iid  = {0x8388da11, 0xb559, 0x4574, {0xa5, 0xb7, 0x2b, 0xd7, 0xac, 0xd5, 0xce, 0xf8}};
    VALUE c    = cSharedFolder
      = rb_define_class_under(under, "SharedFolder", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "name", SharedFolder__get_name, 0);
    rb_define_method(c, "host_path", SharedFolder__get_host_path, 0);
    rb_define_method(c, "accessible", SharedFolder__get_accessible, 0);
    rb_define_method(c, "writable", SharedFolder__get_writable, 0);
    rb_define_method(c, "auto_mount", SharedFolder__get_auto_mount, 0);
    rb_define_method(c, "last_access_error", SharedFolder__get_last_access_error, 0);
  }
  {
    iid_t iid  = {0x3e83963a, 0x1c3b, 0x400d, {0x8c, 0x5f, 0xf2, 0xd0, 0x77, 0xb0, 0xa5, 0x97}};
    VALUE c    = cInternalSessionControl
      = rb_define_class_under(under, "InternalSessionControl", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "get_pid", InternalSessionControl__get_pid, 0);
    rb_define_method(c, "get_remote_console", InternalSessionControl__get_remote_console, 0);
    rb_define_method(c, "assign_machine", InternalSessionControl__assign_machine, 2);
    rb_define_method(c, "assign_remote_machine", InternalSessionControl__assign_remote_machine, 2);
    rb_define_method(c, "update_machine_state", InternalSessionControl__update_machine_state, 1);
    rb_define_method(c, "uninitialize", InternalSessionControl__uninitialize, 0);
    rb_define_method(c, "on_network_adapter_change", InternalSessionControl__on_network_adapter_change, 2);
    rb_define_method(c, "on_serial_port_change", InternalSessionControl__on_serial_port_change, 1);
    rb_define_method(c, "on_parallel_port_change", InternalSessionControl__on_parallel_port_change, 1);
    rb_define_method(c, "on_storage_controller_change", InternalSessionControl__on_storage_controller_change, 0);
    rb_define_method(c, "on_medium_change", InternalSessionControl__on_medium_change, 2);
    rb_define_method(c, "on_storage_device_change", InternalSessionControl__on_storage_device_change, 2);
    rb_define_method(c, "on_clipboard_mode_change", InternalSessionControl__on_clipboard_mode_change, 1);
    rb_define_method(c, "on_drag_and_drop_mode_change", InternalSessionControl__on_drag_and_drop_mode_change, 1);
    rb_define_method(c, "on_cpu_change", InternalSessionControl__on_cpu_change, 2);
    rb_define_method(c, "on_cpu_execution_cap_change", InternalSessionControl__on_cpu_execution_cap_change, 1);
    rb_define_method(c, "on_vrde_server_change", InternalSessionControl__on_vrde_server_change, 1);
    rb_define_method(c, "on_usb_controller_change", InternalSessionControl__on_usb_controller_change, 0);
    rb_define_method(c, "on_shared_folder_change", InternalSessionControl__on_shared_folder_change, 1);
    rb_define_method(c, "on_usb_device_attach", InternalSessionControl__on_usb_device_attach, 3);
    rb_define_method(c, "on_usb_device_detach", InternalSessionControl__on_usb_device_detach, 2);
    rb_define_method(c, "on_show_window", InternalSessionControl__on_show_window, 1);
    rb_define_method(c, "on_bandwidth_group_change", InternalSessionControl__on_bandwidth_group_change, 1);
    rb_define_method(c, "access_guest_property", InternalSessionControl__access_guest_property, 4);
    rb_define_method(c, "enumerate_guest_properties", InternalSessionControl__enumerate_guest_properties, 1);
    rb_define_method(c, "online_merge_medium", InternalSessionControl__online_merge_medium, 9);
    rb_define_method(c, "enable_vm_m_statistics", InternalSessionControl__enable_vm_m_statistics, 1);
  }
  {
    iid_t iid  = {0x12F4DCDB, 0x12B2, 0x4EC1, {0xB7, 0xCD, 0xDD, 0xD9, 0xF6, 0xC5, 0xBF, 0x4D}};
    VALUE c    = cSession
      = rb_define_class_under(under, "Session", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "state", Session__get_state, 0);
    rb_define_method(c, "type", Session__get_type, 0);
    rb_define_method(c, "machine", Session__get_machine, 0);
    rb_define_method(c, "console", Session__get_console, 0);
    rb_define_method(c, "unlock_machine", Session__unlock_machine, 0);
  }
  {
    iid_t iid  = {0xa1556333, 0x09b6, 0x46d9, {0xbf, 0xb7, 0xfc, 0x23, 0x9b, 0x7f, 0xbe, 0x1e}};
    VALUE c    = cStorageController
      = rb_define_class_under(under, "StorageController", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "name", StorageController__get_name, 0);
    rb_define_method(c, "max_devices_per_port_count", StorageController__get_max_devices_per_port_count, 0);
    rb_define_method(c, "min_port_count", StorageController__get_min_port_count, 0);
    rb_define_method(c, "max_port_count", StorageController__get_max_port_count, 0);
    rb_define_method(c, "instance", StorageController__get_instance, 0);
    rb_define_method(c, "port_count", StorageController__get_port_count, 0);
    rb_define_method(c, "bus", StorageController__get_bus, 0);
    rb_define_method(c, "controller_type", StorageController__get_controller_type, 0);
    rb_define_method(c, "use_host_io_cache", StorageController__get_use_host_io_cache, 0);
    rb_define_method(c, "bootable", StorageController__get_bootable, 0);
  }
  {
    iid_t iid  = {0x2a1a60ae, 0x9345, 0x4019, {0xad, 0x53, 0xd3, 0x4b, 0xa4, 0x1c, 0xbf, 0xe9}};
    VALUE c    = cPerformanceMetric
      = rb_define_class_under(under, "PerformanceMetric", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "metric_name", PerformanceMetric__get_metric_name, 0);
    rb_define_method(c, "object", PerformanceMetric__get_object, 0);
    rb_define_method(c, "description", PerformanceMetric__get_description, 0);
    rb_define_method(c, "period", PerformanceMetric__get_period, 0);
    rb_define_method(c, "count", PerformanceMetric__get_count, 0);
    rb_define_method(c, "unit", PerformanceMetric__get_unit, 0);
    rb_define_method(c, "minimum_value", PerformanceMetric__get_minimum_value, 0);
    rb_define_method(c, "maximum_value", PerformanceMetric__get_maximum_value, 0);
  }
  {
    iid_t iid  = {0xe22e1acb, 0xac4a, 0x43bb, {0xa3, 0x1c, 0x17, 0x32, 0x16, 0x59, 0xb0, 0xc6}};
    VALUE c    = cPerformanceCollector
      = rb_define_class_under(under, "PerformanceCollector", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "metric_names", PerformanceCollector__get_metric_names, 0);
    rb_define_method(c, "get_metrics", PerformanceCollector__get_metrics, 2);
    rb_define_method(c, "setup_metrics", PerformanceCollector__setup_metrics, 4);
    rb_define_method(c, "enable_metrics", PerformanceCollector__enable_metrics, 2);
    rb_define_method(c, "disable_metrics", PerformanceCollector__disable_metrics, 2);
    rb_define_method(c, "query_metrics_data", PerformanceCollector__query_metrics_data, 2);
  }
  {
    iid_t iid  = {0x26451b99, 0x3b2d, 0x4dcb, {0x8e, 0x4b, 0xd6, 0x36, 0x54, 0x21, 0x81, 0x75}};
    VALUE c    = cNATEngine
      = rb_define_class_under(under, "NATEngine", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "network", NATEngine__get_network, 0);
    rb_define_method(c, "host_ip", NATEngine__get_host_ip, 0);
    rb_define_method(c, "tftp_prefix", NATEngine__get_tftp_prefix, 0);
    rb_define_method(c, "tftp_boot_file", NATEngine__get_tftp_boot_file, 0);
    rb_define_method(c, "tftp_next_server", NATEngine__get_tftp_next_server, 0);
    rb_define_method(c, "alias_mode", NATEngine__get_alias_mode, 0);
    rb_define_method(c, "dns_pass_domain", NATEngine__get_dns_pass_domain, 0);
    rb_define_method(c, "dns_proxy", NATEngine__get_dns_proxy, 0);
    rb_define_method(c, "dns_use_host_resolver", NATEngine__get_dns_use_host_resolver, 0);
    rb_define_method(c, "redirects", NATEngine__get_redirects, 0);
    rb_define_method(c, "set_network_settings", NATEngine__set_network_settings, 5);
    rb_define_method(c, "get_network_settings", NATEngine__get_network_settings, 0);
    rb_define_method(c, "add_redirect", NATEngine__add_redirect, 6);
    rb_define_method(c, "remove_redirect", NATEngine__remove_redirect, 1);
  }
  {
    iid_t iid  = {0x58000040, 0xe718, 0x4746, {0xbb, 0xce, 0x4b, 0x86, 0xd9, 0x6d, 0xa4, 0x61}};
    VALUE c    = cExtPackPlugIn
      = rb_define_class_under(under, "ExtPackPlugIn", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "name", ExtPackPlugIn__get_name, 0);
    rb_define_method(c, "description", ExtPackPlugIn__get_description, 0);
    rb_define_method(c, "frontend", ExtPackPlugIn__get_frontend, 0);
    rb_define_method(c, "module_path", ExtPackPlugIn__get_module_path, 0);
  }
  {
    iid_t iid  = {0xf79b75d8, 0x2890, 0x4f34, {0xff, 0xff, 0xff, 0xff, 0xa1, 0x44, 0xe8, 0x2c}};
    VALUE c    = cExtPackBase
      = rb_define_class_under(under, "ExtPackBase", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "name", ExtPackBase__get_name, 0);
    rb_define_method(c, "description", ExtPackBase__get_description, 0);
    rb_define_method(c, "version", ExtPackBase__get_version, 0);
    rb_define_method(c, "revision", ExtPackBase__get_revision, 0);
    rb_define_method(c, "edition", ExtPackBase__get_edition, 0);
    rb_define_method(c, "vrde_module", ExtPackBase__get_vrde_module, 0);
    rb_define_method(c, "plug_ins", ExtPackBase__get_plug_ins, 0);
    rb_define_method(c, "usable", ExtPackBase__get_usable, 0);
    rb_define_method(c, "why_unusable", ExtPackBase__get_why_unusable, 0);
    rb_define_method(c, "show_license", ExtPackBase__get_show_license, 0);
    rb_define_method(c, "license", ExtPackBase__get_license, 0);
    rb_define_method(c, "query_license", ExtPackBase__query_license, 3);
  }
  {
    iid_t iid  = {0x431685da, 0x3618, 0x4ebc, {0xb0, 0x38, 0x83, 0x3b, 0xa8, 0x29, 0xb4, 0xb2}};
    VALUE c    = cExtPack
      = rb_define_class_under(under, "ExtPack", cExtPackBase);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "query_object", ExtPack__query_object, 1);
  }
  {
    iid_t iid  = {0xb6b49f55, 0xefcc, 0x4f08, {0xb4, 0x86, 0x56, 0xe8, 0xd8, 0xaf, 0xb1, 0x0b}};
    VALUE c    = cExtPackFile
      = rb_define_class_under(under, "ExtPackFile", cExtPackBase);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "file_path", ExtPackFile__get_file_path, 0);
    rb_define_method(c, "install", ExtPackFile__install, 2);
  }
  {
    iid_t iid  = {0x3295e6ce, 0xb051, 0x47b2, {0x95, 0x14, 0x2c, 0x58, 0x8b, 0xfe, 0x75, 0x54}};
    VALUE c    = cExtPackManager
      = rb_define_class_under(under, "ExtPackManager", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "installed_ext_packs", ExtPackManager__get_installed_ext_packs, 0);
    rb_define_method(c, "find", ExtPackManager__find, 1);
    rb_define_method(c, "open_ext_pack_file", ExtPackManager__open_ext_pack_file, 1);
    rb_define_method(c, "uninstall", ExtPackManager__uninstall, 3);
    rb_define_method(c, "cleanup", ExtPackManager__cleanup, 0);
    rb_define_method(c, "query_all_plug_ins_for_frontend", ExtPackManager__query_all_plug_ins_for_frontend, 1);
    rb_define_method(c, "is_ext_pack_usable", ExtPackManager__is_ext_pack_usable, 1);
  }
  {
    iid_t iid  = {0xbadea2d7, 0x0261, 0x4146, {0x89, 0xf0, 0x6a, 0x57, 0xcc, 0x34, 0x83, 0x3d}};
    VALUE c    = cBandwidthGroup
      = rb_define_class_under(under, "BandwidthGroup", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "name", BandwidthGroup__get_name, 0);
    rb_define_method(c, "type", BandwidthGroup__get_type, 0);
    rb_define_method(c, "reference", BandwidthGroup__get_reference, 0);
    rb_define_method(c, "max_bytes_per_sec", BandwidthGroup__get_max_bytes_per_sec, 0);
  }
  {
    iid_t iid  = {0xe2eb3930, 0xd2f4, 0x4f87, {0xbe, 0x17, 0x07, 0x07, 0xe3, 0x0f, 0x01, 0x9f}};
    VALUE c    = cBandwidthControl
      = rb_define_class_under(under, "BandwidthControl", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "num_groups", BandwidthControl__get_num_groups, 0);
    rb_define_method(c, "create_bandwidth_group", BandwidthControl__create_bandwidth_group, 3);
    rb_define_method(c, "delete_bandwidth_group", BandwidthControl__delete_bandwidth_group, 1);
    rb_define_method(c, "get_bandwidth_group", BandwidthControl__get_bandwidth_group, 1);
    rb_define_method(c, "get_all_bandwidth_groups", BandwidthControl__get_all_bandwidth_groups, 0);
  }
  {
    iid_t iid  = {0x5fe0bd48, 0x1181, 0x40d1, {0x99, 0x1f, 0x3b, 0x02, 0xf2, 0x69, 0xa8, 0x23}};
    VALUE c    = cVirtualBoxClient
      = rb_define_class_under(under, "VirtualBoxClient", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "virtual_box", VirtualBoxClient__get_virtual_box, 0);
    rb_define_method(c, "session", VirtualBoxClient__get_session, 0);
    rb_define_method(c, "event_source", VirtualBoxClient__get_event_source, 0);
  }
  {
    iid_t iid  = {0x9b6e1aee, 0x35f3, 0x4f4d, {0xb5, 0xbb, 0xed, 0x0e, 0xce, 0xfd, 0x85, 0x38}};
    VALUE c    = cEventSource
      = rb_define_class_under(under, "EventSource", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "create_listener", EventSource__create_listener, 0);
    rb_define_method(c, "create_aggregator", EventSource__create_aggregator, 1);
    rb_define_method(c, "register_listener", EventSource__register_listener, 3);
    rb_define_method(c, "unregister_listener", EventSource__unregister_listener, 1);
    rb_define_method(c, "fire_event", EventSource__fire_event, 2);
    rb_define_method(c, "get_event", EventSource__get_event, 2);
    rb_define_method(c, "event_processed", EventSource__event_processed, 2);
  }
  {
    iid_t iid  = {0x67099191, 0x32e7, 0x4f6c, {0x85, 0xee, 0x42, 0x23, 0x04, 0xc7, 0x1b, 0x90}};
    VALUE c    = cEventListener
      = rb_define_class_under(under, "EventListener", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "handle_event", EventListener__handle_event, 1);
  }
  {
    iid_t iid  = {0x0ca2adba, 0x8f30, 0x401b, {0xa8, 0xcd, 0xfe, 0x31, 0xdb, 0xe8, 0x39, 0xc0}};
    VALUE c    = cEvent
      = rb_define_class_under(under, "Event", cNSISupports);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "type", Event__get_type, 0);
    rb_define_method(c, "source", Event__get_source, 0);
    rb_define_method(c, "waitable", Event__get_waitable, 0);
    rb_define_method(c, "set_processed", Event__set_processed, 0);
    rb_define_method(c, "wait_processed", Event__wait_processed, 1);
  }
  {
    iid_t iid  = {0x69bfb134, 0x80f6, 0x4266, {0x8e, 0x20, 0x16, 0x37, 0x1f, 0x68, 0xfa, 0x25}};
    VALUE c    = cReusableEvent
      = rb_define_class_under(under, "ReusableEvent", cEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "generation", ReusableEvent__get_generation, 0);
    rb_define_method(c, "reuse", ReusableEvent__reuse, 0);
  }
  {
    iid_t iid  = {0x92ed7b1a, 0x0d96, 0x40ed, {0xae, 0x46, 0xa5, 0x64, 0xd4, 0x84, 0x32, 0x5e}};
    VALUE c    = cMachineEvent
      = rb_define_class_under(under, "MachineEvent", cEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "machine_id", MachineEvent__get_machine_id, 0);
  }
  {
    iid_t iid  = {0x5748F794, 0x48DF, 0x438D, {0x85, 0xEB, 0x98, 0xFF, 0xD7, 0x0D, 0x18, 0xC9}};
    VALUE c    = cMachineStateChangedEvent
      = rb_define_class_under(under, "MachineStateChangedEvent", cMachineEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "state", MachineStateChangedEvent__get_state, 0);
  }
  {
    iid_t iid  = {0xabe94809, 0x2e88, 0x4436, {0x83, 0xd7, 0x50, 0xf3, 0xe6, 0x4d, 0x05, 0x03}};
    VALUE c    = cMachineDataChangedEvent
      = rb_define_class_under(under, "MachineDataChangedEvent", cMachineEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "temporary", MachineDataChangedEvent__get_temporary, 0);
  }
  {
    iid_t iid  = {0x53fac49a, 0xb7f1, 0x4a5a, {0xa4, 0xef, 0xa1, 0x1d, 0xd9, 0xc2, 0xa4, 0x58}};
    VALUE c    = cMediumRegisteredEvent
      = rb_define_class_under(under, "MediumRegisteredEvent", cEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "medium_id", MediumRegisteredEvent__get_medium_id, 0);
    rb_define_method(c, "medium_type", MediumRegisteredEvent__get_medium_type, 0);
    rb_define_method(c, "registered", MediumRegisteredEvent__get_registered, 0);
  }
  {
    iid_t iid  = {0xc354a762, 0x3ff2, 0x4f2e, {0x8f, 0x09, 0x07, 0x38, 0x2e, 0xe2, 0x50, 0x88}};
    VALUE c    = cMachineRegisteredEvent
      = rb_define_class_under(under, "MachineRegisteredEvent", cMachineEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "registered", MachineRegisteredEvent__get_registered, 0);
  }
  {
    iid_t iid  = {0x714a3eef, 0x799a, 0x4489, {0x86, 0xcd, 0xfe, 0x8e, 0x45, 0xb2, 0xff, 0x8e}};
    VALUE c    = cSessionStateChangedEvent
      = rb_define_class_under(under, "SessionStateChangedEvent", cMachineEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "state", SessionStateChangedEvent__get_state, 0);
  }
  {
    iid_t iid  = {0x3f63597a, 0x26f1, 0x4edb, {0x8d, 0xd2, 0x6b, 0xdd, 0xd0, 0x91, 0x23, 0x68}};
    VALUE c    = cGuestPropertyChangedEvent
      = rb_define_class_under(under, "GuestPropertyChangedEvent", cMachineEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "name", GuestPropertyChangedEvent__get_name, 0);
    rb_define_method(c, "value", GuestPropertyChangedEvent__get_value, 0);
    rb_define_method(c, "flags", GuestPropertyChangedEvent__get_flags, 0);
  }
  {
    iid_t iid  = {0x21637b0e, 0x34b8, 0x42d3, {0xac, 0xfb, 0x7e, 0x96, 0xda, 0xf7, 0x7c, 0x22}};
    VALUE c    = cSnapshotEvent
      = rb_define_class_under(under, "SnapshotEvent", cMachineEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "snapshot_id", SnapshotEvent__get_snapshot_id, 0);
  }
  {
    iid_t iid  = {0xd27c0b3d, 0x6038, 0x422c, {0xb4, 0x5e, 0x6d, 0x4a, 0x05, 0x03, 0xd9, 0xf1}};
    VALUE c    = cSnapshotTakenEvent
      = rb_define_class_under(under, "SnapshotTakenEvent", cSnapshotEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
  }
  {
    iid_t iid  = {0xc48f3401, 0x4a9e, 0x43f4, {0xb7, 0xa7, 0x54, 0xbd, 0x28, 0x5e, 0x22, 0xf4}};
    VALUE c    = cSnapshotDeletedEvent
      = rb_define_class_under(under, "SnapshotDeletedEvent", cSnapshotEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
  }
  {
    iid_t iid  = {0x07541941, 0x8079, 0x447a, {0xa3, 0x3e, 0x47, 0xa6, 0x9c, 0x79, 0x80, 0xdb}};
    VALUE c    = cSnapshotChangedEvent
      = rb_define_class_under(under, "SnapshotChangedEvent", cSnapshotEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
  }
  {
    iid_t iid  = {0xa6dcf6e8, 0x416b, 0x4181, {0x8c, 0x4a, 0x45, 0xec, 0x95, 0x17, 0x7a, 0xef}};
    VALUE c    = cMousePointerShapeChangedEvent
      = rb_define_class_under(under, "MousePointerShapeChangedEvent", cEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "visible", MousePointerShapeChangedEvent__get_visible, 0);
    rb_define_method(c, "alpha", MousePointerShapeChangedEvent__get_alpha, 0);
    rb_define_method(c, "xhot", MousePointerShapeChangedEvent__get_xhot, 0);
    rb_define_method(c, "yhot", MousePointerShapeChangedEvent__get_yhot, 0);
    rb_define_method(c, "width", MousePointerShapeChangedEvent__get_width, 0);
    rb_define_method(c, "height", MousePointerShapeChangedEvent__get_height, 0);
    rb_define_method(c, "shape", MousePointerShapeChangedEvent__get_shape, 0);
  }
  {
    iid_t iid  = {0xd633ad48, 0x820c, 0x4207, {0xb4, 0x6c, 0x6b, 0xd3, 0x59, 0x66, 0x40, 0xd5}};
    VALUE c    = cMouseCapabilityChangedEvent
      = rb_define_class_under(under, "MouseCapabilityChangedEvent", cEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "supports_absolute", MouseCapabilityChangedEvent__get_supports_absolute, 0);
    rb_define_method(c, "supports_relative", MouseCapabilityChangedEvent__get_supports_relative, 0);
    rb_define_method(c, "needs_host_cursor", MouseCapabilityChangedEvent__get_needs_host_cursor, 0);
  }
  {
    iid_t iid  = {0x6DDEF35E, 0x4737, 0x457B, {0x99, 0xFC, 0xBC, 0x52, 0xC8, 0x51, 0xA4, 0x4F}};
    VALUE c    = cKeyboardLedsChangedEvent
      = rb_define_class_under(under, "KeyboardLedsChangedEvent", cEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "num_lock", KeyboardLedsChangedEvent__get_num_lock, 0);
    rb_define_method(c, "caps_lock", KeyboardLedsChangedEvent__get_caps_lock, 0);
    rb_define_method(c, "scroll_lock", KeyboardLedsChangedEvent__get_scroll_lock, 0);
  }
  {
    iid_t iid  = {0x4376693C, 0xCF37, 0x453B, {0x92, 0x89, 0x3B, 0x0F, 0x52, 0x1C, 0xAF, 0x27}};
    VALUE c    = cStateChangedEvent
      = rb_define_class_under(under, "StateChangedEvent", cEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "state", StateChangedEvent__get_state, 0);
  }
  {
    iid_t iid  = {0xD70F7915, 0xDA7C, 0x44C8, {0xA7, 0xAC, 0x9F, 0x17, 0x34, 0x90, 0x44, 0x6A}};
    VALUE c    = cAdditionsStateChangedEvent
      = rb_define_class_under(under, "AdditionsStateChangedEvent", cEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
  }
  {
    iid_t iid  = {0x08889892, 0x1EC6, 0x4883, {0x80, 0x1D, 0x77, 0xF5, 0x6C, 0xFD, 0x01, 0x03}};
    VALUE c    = cNetworkAdapterChangedEvent
      = rb_define_class_under(under, "NetworkAdapterChangedEvent", cEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "network_adapter", NetworkAdapterChangedEvent__get_network_adapter, 0);
  }
  {
    iid_t iid  = {0x3BA329DC, 0x659C, 0x488B, {0x83, 0x5C, 0x4E, 0xCA, 0x7A, 0xE7, 0x1C, 0x6C}};
    VALUE c    = cSerialPortChangedEvent
      = rb_define_class_under(under, "SerialPortChangedEvent", cEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "serial_port", SerialPortChangedEvent__get_serial_port, 0);
  }
  {
    iid_t iid  = {0x813C99FC, 0x9849, 0x4F47, {0x81, 0x3E, 0x24, 0xA7, 0x5D, 0xC8, 0x56, 0x15}};
    VALUE c    = cParallelPortChangedEvent
      = rb_define_class_under(under, "ParallelPortChangedEvent", cEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "parallel_port", ParallelPortChangedEvent__get_parallel_port, 0);
  }
  {
    iid_t iid  = {0x715212BF, 0xDA59, 0x426E, {0x82, 0x30, 0x38, 0x31, 0xFA, 0xA5, 0x2C, 0x56}};
    VALUE c    = cStorageControllerChangedEvent
      = rb_define_class_under(under, "StorageControllerChangedEvent", cEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
  }
  {
    iid_t iid  = {0x0FE2DA40, 0x5637, 0x472A, {0x97, 0x36, 0x72, 0x01, 0x9E, 0xAB, 0xD7, 0xDE}};
    VALUE c    = cMediumChangedEvent
      = rb_define_class_under(under, "MediumChangedEvent", cEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "medium_attachment", MediumChangedEvent__get_medium_attachment, 0);
  }
  {
    iid_t iid  = {0xcac21692, 0x7997, 0x4595, {0xa7, 0x31, 0x3a, 0x50, 0x9d, 0xb6, 0x04, 0xe5}};
    VALUE c    = cClipboardModeChangedEvent
      = rb_define_class_under(under, "ClipboardModeChangedEvent", cEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "clipboard_mode", ClipboardModeChangedEvent__get_clipboard_mode, 0);
  }
  {
    iid_t iid  = {0xe90b8850, 0xac8e, 0x4dff, {0x80, 0x59, 0x41, 0x00, 0xae, 0x2c, 0x3c, 0x3d}};
    VALUE c    = cDragAndDropModeChangedEvent
      = rb_define_class_under(under, "DragAndDropModeChangedEvent", cEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "drag_and_drop_mode", DragAndDropModeChangedEvent__get_drag_and_drop_mode, 0);
  }
  {
    iid_t iid  = {0x4da2dec7, 0x71b2, 0x4817, {0x9a, 0x64, 0x4e, 0xd1, 0x2c, 0x17, 0x38, 0x8e}};
    VALUE c    = cCPUChangedEvent
      = rb_define_class_under(under, "CPUChangedEvent", cEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "cpu", CPUChangedEvent__get_cpu, 0);
    rb_define_method(c, "add", CPUChangedEvent__get_add, 0);
  }
  {
    iid_t iid  = {0xdfa7e4f5, 0xb4a4, 0x44ce, {0x85, 0xa8, 0x12, 0x7a, 0xc5, 0xeb, 0x59, 0xdc}};
    VALUE c    = cCPUExecutionCapChangedEvent
      = rb_define_class_under(under, "CPUExecutionCapChangedEvent", cEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "execution_cap", CPUExecutionCapChangedEvent__get_execution_cap, 0);
  }
  {
    iid_t iid  = {0x88394258, 0x7006, 0x40d4, {0xb3, 0x39, 0x47, 0x2e, 0xe3, 0x80, 0x18, 0x44}};
    VALUE c    = cGuestKeyboardEvent
      = rb_define_class_under(under, "GuestKeyboardEvent", cEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "scancodes", GuestKeyboardEvent__get_scancodes, 0);
  }
  {
    iid_t iid  = {0x1f85d35c, 0xc524, 0x40ff, {0x8e, 0x98, 0x30, 0x70, 0x00, 0xdf, 0x09, 0x92}};
    VALUE c    = cGuestMouseEvent
      = rb_define_class_under(under, "GuestMouseEvent", cReusableEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "absolute", GuestMouseEvent__get_absolute, 0);
    rb_define_method(c, "x", GuestMouseEvent__get_x, 0);
    rb_define_method(c, "y", GuestMouseEvent__get_y, 0);
    rb_define_method(c, "z", GuestMouseEvent__get_z, 0);
    rb_define_method(c, "w", GuestMouseEvent__get_w, 0);
    rb_define_method(c, "buttons", GuestMouseEvent__get_buttons, 0);
  }
  {
    iid_t iid  = {0xa06fd66a, 0x3188, 0x4c8c, {0x87, 0x56, 0x13, 0x95, 0xe8, 0xcb, 0x69, 0x1c}};
    VALUE c    = cVRDEServerChangedEvent
      = rb_define_class_under(under, "VRDEServerChangedEvent", cEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
  }
  {
    iid_t iid  = {0xdd6a1080, 0xe1b7, 0x4339, {0xa5, 0x49, 0xf0, 0x87, 0x81, 0x15, 0x59, 0x6e}};
    VALUE c    = cVRDEServerInfoChangedEvent
      = rb_define_class_under(under, "VRDEServerInfoChangedEvent", cEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
  }
  {
    iid_t iid  = {0x93BADC0C, 0x61D9, 0x4940, {0xA0, 0x84, 0xE6, 0xBB, 0x29, 0xAF, 0x3D, 0x83}};
    VALUE c    = cUSBControllerChangedEvent
      = rb_define_class_under(under, "USBControllerChangedEvent", cEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
  }
  {
    iid_t iid  = {0x806da61b, 0x6679, 0x422a, {0xb6, 0x29, 0x51, 0xb0, 0x6b, 0x0c, 0x6d, 0x93}};
    VALUE c    = cUSBDeviceStateChangedEvent
      = rb_define_class_under(under, "USBDeviceStateChangedEvent", cEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "device", USBDeviceStateChangedEvent__get_device, 0);
    rb_define_method(c, "attached", USBDeviceStateChangedEvent__get_attached, 0);
    rb_define_method(c, "error", USBDeviceStateChangedEvent__get_error, 0);
  }
  {
    iid_t iid  = {0xB66349B5, 0x3534, 0x4239, {0xB2, 0xDE, 0x8E, 0x15, 0x35, 0xD9, 0x4C, 0x0B}};
    VALUE c    = cSharedFolderChangedEvent
      = rb_define_class_under(under, "SharedFolderChangedEvent", cEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "scope", SharedFolderChangedEvent__get_scope, 0);
  }
  {
    iid_t iid  = {0x883DD18B, 0x0721, 0x4CDE, {0x86, 0x7C, 0x1A, 0x82, 0xAB, 0xAF, 0x91, 0x4C}};
    VALUE c    = cRuntimeErrorEvent
      = rb_define_class_under(under, "RuntimeErrorEvent", cEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "fatal", RuntimeErrorEvent__get_fatal, 0);
    rb_define_method(c, "id", RuntimeErrorEvent__get_id, 0);
    rb_define_method(c, "message", RuntimeErrorEvent__get_message, 0);
  }
  {
    iid_t iid  = {0xe7932cb8, 0xf6d4, 0x4ab6, {0x9c, 0xbf, 0x55, 0x8e, 0xb8, 0x95, 0x9a, 0x6a}};
    VALUE c    = cEventSourceChangedEvent
      = rb_define_class_under(under, "EventSourceChangedEvent", cEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "listener", EventSourceChangedEvent__get_listener, 0);
    rb_define_method(c, "add", EventSourceChangedEvent__get_add, 0);
  }
  {
    iid_t iid  = {0x024F00CE, 0x6E0B, 0x492A, {0xA8, 0xD0, 0x96, 0x84, 0x72, 0xA9, 0x4D, 0xC7}};
    VALUE c    = cExtraDataChangedEvent
      = rb_define_class_under(under, "ExtraDataChangedEvent", cEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "machine_id", ExtraDataChangedEvent__get_machine_id, 0);
    rb_define_method(c, "key", ExtraDataChangedEvent__get_key, 0);
    rb_define_method(c, "value", ExtraDataChangedEvent__get_value, 0);
  }
  {
    iid_t iid  = {0x9a1a4130, 0x69fe, 0x472f, {0xac, 0x10, 0xc6, 0xfa, 0x25, 0xd7, 0x50, 0x07}};
    VALUE c    = cVetoEvent
      = rb_define_class_under(under, "VetoEvent", cEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "add_veto", VetoEvent__add_veto, 1);
    rb_define_method(c, "is_vetoed", VetoEvent__is_vetoed, 0);
    rb_define_method(c, "get_vetos", VetoEvent__get_vetos, 0);
  }
  {
    iid_t iid  = {0x245d88bd, 0x800a, 0x40f8, {0x87, 0xa6, 0x17, 0x0d, 0x02, 0x24, 0x9a, 0x55}};
    VALUE c    = cExtraDataCanChangeEvent
      = rb_define_class_under(under, "ExtraDataCanChangeEvent", cVetoEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "machine_id", ExtraDataCanChangeEvent__get_machine_id, 0);
    rb_define_method(c, "key", ExtraDataCanChangeEvent__get_key, 0);
    rb_define_method(c, "value", ExtraDataCanChangeEvent__get_value, 0);
  }
  {
    iid_t iid  = {0xadf292b0, 0x92c9, 0x4a77, {0x9d, 0x35, 0xe0, 0x58, 0xb3, 0x9f, 0xe0, 0xb9}};
    VALUE c    = cCanShowWindowEvent
      = rb_define_class_under(under, "CanShowWindowEvent", cVetoEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
  }
  {
    iid_t iid  = {0xB0A0904D, 0x2F05, 0x4D28, {0x85, 0x5F, 0x48, 0x8F, 0x96, 0xBA, 0xD2, 0xB2}};
    VALUE c    = cShowWindowEvent
      = rb_define_class_under(under, "ShowWindowEvent", cEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "win_id", ShowWindowEvent__get_win_id, 0);
  }
  {
    iid_t iid  = {0x24eef068, 0xc380, 0x4510, {0xbc, 0x7c, 0x19, 0x31, 0x4a, 0x73, 0x52, 0xf1}};
    VALUE c    = cNATRedirectEvent
      = rb_define_class_under(under, "NATRedirectEvent", cMachineEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "slot", NATRedirectEvent__get_slot, 0);
    rb_define_method(c, "remove", NATRedirectEvent__get_remove, 0);
    rb_define_method(c, "name", NATRedirectEvent__get_name, 0);
    rb_define_method(c, "proto", NATRedirectEvent__get_proto, 0);
    rb_define_method(c, "host_ip", NATRedirectEvent__get_host_ip, 0);
    rb_define_method(c, "host_port", NATRedirectEvent__get_host_port, 0);
    rb_define_method(c, "guest_ip", NATRedirectEvent__get_guest_ip, 0);
    rb_define_method(c, "guest_port", NATRedirectEvent__get_guest_port, 0);
  }
  {
    iid_t iid  = {0xa0bad6df, 0xd612, 0x47d3, {0x89, 0xd4, 0xdb, 0x39, 0x92, 0x53, 0x39, 0x48}};
    VALUE c    = cHostPCIDevicePlugEvent
      = rb_define_class_under(under, "HostPCIDevicePlugEvent", cMachineEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "plugged", HostPCIDevicePlugEvent__get_plugged, 0);
    rb_define_method(c, "success", HostPCIDevicePlugEvent__get_success, 0);
    rb_define_method(c, "attachment", HostPCIDevicePlugEvent__get_attachment, 0);
    rb_define_method(c, "message", HostPCIDevicePlugEvent__get_message, 0);
  }
  {
    iid_t iid  = {0x97c78fcd, 0xd4fc, 0x485f, {0x86, 0x13, 0x5a, 0xf8, 0x8b, 0xfc, 0xfc, 0xdc}};
    VALUE c    = cVBoxSVCAvailabilityChangedEvent
      = rb_define_class_under(under, "VBoxSVCAvailabilityChangedEvent", cEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "available", VBoxSVCAvailabilityChangedEvent__get_available, 0);
  }
  {
    iid_t iid  = {0x334df94a, 0x7556, 0x4cbc, {0x8c, 0x04, 0x04, 0x30, 0x96, 0xb0, 0x2d, 0x82}};
    VALUE c    = cBandwidthGroupChangedEvent
      = rb_define_class_under(under, "BandwidthGroupChangedEvent", cEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "bandwidth_group", BandwidthGroupChangedEvent__get_bandwidth_group, 0);
  }
  {
    iid_t iid  = {0x0f7b8a22, 0xc71f, 0x4a36, {0x8e, 0x5f, 0xa7, 0x7d, 0x01, 0xd7, 0x60, 0x90}};
    VALUE c    = cGuestMonitorChangedEvent
      = rb_define_class_under(under, "GuestMonitorChangedEvent", cEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "change_type", GuestMonitorChangedEvent__get_change_type, 0);
    rb_define_method(c, "screen_id", GuestMonitorChangedEvent__get_screen_id, 0);
    rb_define_method(c, "origin_x", GuestMonitorChangedEvent__get_origin_x, 0);
    rb_define_method(c, "origin_y", GuestMonitorChangedEvent__get_origin_y, 0);
    rb_define_method(c, "width", GuestMonitorChangedEvent__get_width, 0);
    rb_define_method(c, "height", GuestMonitorChangedEvent__get_height, 0);
  }
  {
    iid_t iid  = {0x8a5c2dce, 0xe341, 0x49d4, {0xaf, 0xce, 0xc9, 0x59, 0x79, 0xf7, 0xd7, 0x0c}};
    VALUE c    = cStorageDeviceChangedEvent
      = rb_define_class_under(under, "StorageDeviceChangedEvent", cEvent);
    no_instantiation(c);
    rb_const_set(c, _IID, iid__new(&iid));
    rb_define_method(c, "storage_device", StorageDeviceChangedEvent__get_storage_device, 0);
    rb_define_method(c, "removed", StorageDeviceChangedEvent__get_removed, 0);
  }
}
