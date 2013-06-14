require_relative '4.2-generated'
require 'set'

module VirtualBox
module COM
module Model


class Machine < AbstractInterface
    ONLINE_STATES = Set.new [ :running, 
                              :paused, 
                              :stuck,
                              :teleporting,
                              :live_snapshotting,
                              :starting,
                              :stopping,
                              :saving,
                              :restoring,
                              :teleporting_paused_vm,
                              :teleporting_in,
                              :fault_tolerant_syncing,
                              :deleting_snapshot_online,
                              :deleting_snapshot_paused,
                            ]

    def is_online?
        ONLINE_STATES.include?(state)
    end
end



class Progress < AbstractInterface
    # This method blocks the execution while the operations represented
    # by this {Progress} object execute, but yields a block every `x`
    # percent (interval given in parameters).
    def wait(interval_percent=1)
        # If no block is given we just wait until completion, not worrying
        # about tracking percentages.
        if !block_given?
            wait_for_completion(-1)
            return
        end

        # Initial value forces the 0% yield
        last_reported = -100

        while true
            delta = percent - last_reported
            last_reported += delta
            yield self if delta >= interval_percent
            
            # This either sleeps for half a second or returns on completion
            wait_for_completion(500)
            
            break if completed || canceled
            
            # Pass off execution so other threads can run
            Thread.pass
        end
    end
end


class EventSource < AbstractInterface
    MODEL_MAP = {
        :machine_event                    => :MachineEvent,
        :snapshot_event                   => :SnapshotEvent,
        :on_machine_state_changed         => :MachineStateChangedEvent,
        :on_machine_data_changed          => :MachineDataChangedEvent,
        :on_extra_data_changed            => :ExtraDataChangedEvent,
        :on_extra_data_can_change         => :ExtraDataCanChangeEvent,
        :on_medium_registered             => :MediumRegisteredEvent,
        :on_machine_registered            => :MachineRegisteredEvent,
        :on_session_state_changed         => :SessionStateChangedEvent,
        :on_snapshot_taken                => :SnapshotTakenEvent,
        :on_snapshot_deleted              => :SnapshotDeletedEvent,
        :on_snapshot_changed              => :SnapshotChangedEvent,
        :on_guest_property_changed        => :GuestPropertyChangedEvent,
        :on_mouse_pointer_shape_changed   => :MousePointerShapEvent,
        :on_mouse_capability_changed      => :MouseCapabilityChangedEvent,
        :on_keyboard_leds_changed         => :KeyboardLedsChangedEvent,
        :on_state_changed                 => :StateChangedEvent,
        :on_additions_state_changed       => :AdditionsStateChangedEvent,
        :on_network_adapter_changed       => :NetworkAdapterChangedEvent,
        :on_serial_port_changed           => :SerialPortChangedEvent,
        :on_parallel_port_changed         => :ParallelPortChangedEvent,
        :on_storage_controller_changed    => :StorageControllerChangedEvent,
        :on_medium_changed                => :MediumChangedEvent,
        :on_vrde_server_changed           => :VRDEServerChangedEvent,
        :on_usb_controller_changed        => :USBControllerChangedEvent,
        :on_usb_device_state_changed      => :USBDeviceStateChangedEvent,
        :on_shared_folder_changed         => :SharedFolderChangedEvent,
        :on_runtime_error                 => :RuntimeErrorEvent,
        :on_can_show_window               => :CanShowWindowEvent,
        :on_show_window                   => :ShowWindowEvent,
        :on_cpu_changed                   => :CPUChangedEvent,
        :on_vrde_server_info_changed      => :VRDEServerInfoChangedEvent,
        :on_event_source_changed          => :EventSourceChangedEvent,
        :on_cpu_execution_cap_changed     => :CPUExecutionCapChangedEvent,
        :on_guest_keyboard                => :GuestKeyboardEvent,
        :on_guest_mouse                   => :GuestMouseEvent,
        :on_nat_redirect                  => :NATRedirectEvent,
        :on_host_pci_device_plug          => :HostPCIDevicePlugEvent,
        :on_vbox_svc_availability_changed => :VBoxSVCAvailabilityChangedEvent,
        :on_bandwidth_group_changed       => :BandwidthGroupChangedEvent,
        :on_guest_monitor_changed         => :GuestMonitorChangedEvent,
        :on_storage_device_changed        => :StorageDeviceChangedEvent,
        :on_clipboard_mode_changed        => :ClipboardModeChangedEvent,
        :on_drag_and_drop_mode_changed    => :DragAndDropModeChangedEvent,
    }

    def get_casted_event(*args)
        if e = get_event(*args)
            (model = MODEL_MAP[e.type]) ? e.cast(model) : e
        end
    end
end


end
end
end
