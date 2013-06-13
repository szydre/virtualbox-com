#
# This file has been automatically generated from the VirtualBox.xidl
#

module VirtualBox
module COM

MODEL_VERSION = "4.2"

module Model

class NSISupports < AbstractInterface
  iid      "00000000-0000-0000-c000-000000000046"
  function :QueryInterface, :pointer, [ :pointer ], :hide => true
  function :AddRef,  nil, [],                       :hide => true
  function :Release, nil, [],                       :hide => true
end

class SettingsVersion < AbstractEnum
  iid "52bd6f5f-1adb-4493-975d-581a9c4b803f"
  map({
    :null                                     => 0,
    :v1_0                                     => 1,
    :v1_1                                     => 2,
    :v1_2                                     => 3,
    :v1_3pre                                  => 4,
    :v1_3                                     => 5,
    :v1_4                                     => 6,
    :v1_5                                     => 7,
    :v1_6                                     => 8,
    :v1_7                                     => 9,
    :v1_8                                     => 10,
    :v1_9                                     => 11,
    :v1_10                                    => 12,
    :v1_11                                    => 13,
    :v1_12                                    => 14,
    :v1_13                                    => 15,
    :future                                   => 99999,
  })
  setup
end

class AccessMode < AbstractEnum
  iid "1da0007c-ddf7-4be8-bcac-d84a1558785f"
  map({
    :read_only                                => 1,
    :read_write                               => 2,
  })
  setup
end

class MachineState < AbstractEnum
  iid "ec6c6a9e-113d-4ff4-b44f-0b69f21c97fe"
  map({
    :null                                     => 0,
    :powered_off                              => 1,
    :saved                                    => 2,
    :teleported                               => 3,
    :aborted                                  => 4,
    :running                                  => 5,
    :paused                                   => 6,
    :stuck                                    => 7,
    :teleporting                              => 8,
    :live_snapshotting                        => 9,
    :starting                                 => 10,
    :stopping                                 => 11,
    :saving                                   => 12,
    :restoring                                => 13,
    :teleporting_paused_vm                    => 14,
    :teleporting_in                           => 15,
    :fault_tolerant_syncing                   => 16,
    :deleting_snapshot_online                 => 17,
    :deleting_snapshot_paused                 => 18,
    :restoring_snapshot                       => 19,
    :deleting_snapshot                        => 20,
    :setting_up                               => 21,
    :first_online                             => 5,
    :last_online                              => 18,
    :first_transient                          => 8,
    :last_transient                           => 21,
  })
  setup
end

class SessionState < AbstractEnum
  iid "cf2700c0-ea4b-47ae-9725-7810114b94d8"
  map({
    :null                                     => 0,
    :unlocked                                 => 1,
    :locked                                   => 2,
    :spawning                                 => 3,
    :unlocking                                => 4,
  })
  setup
end

class CPUPropertyType < AbstractEnum
  iid "24d356a6-2f45-4abd-b977-1cbe9c4701f5"
  map({
    :null                                     => 0,
    :pae                                      => 1,
    :synthetic                                => 2,
  })
  setup
end

class HWVirtExPropertyType < AbstractEnum
  iid "ce81dfdd-d2b8-4a90-bbea-40ee8b7ffcee"
  map({
    :null                                     => 0,
    :enabled                                  => 1,
    :exclusive                                => 2,
    :vpid                                     => 3,
    :nested_paging                            => 4,
    :large_pages                              => 5,
    :force                                    => 6,
  })
  setup
end

class FaultToleranceState < AbstractEnum
  iid "5124f7ec-6b67-493c-9dee-ee45a44114e1"
  map({
    :inactive                                 => 1,
    :master                                   => 2,
    :standby                                  => 3,
  })
  setup
end

class LockType < AbstractEnum
  iid "168a6a8e-12fd-4878-a1f9-38a750a56089"
  map({
    :write                                    => 2,
    :shared                                   => 1,
    :vm                                       => 3,
  })
  setup
end

class SessionType < AbstractEnum
  iid "A13C02CB-0C2C-421E-8317-AC0E8AAA153A"
  map({
    :null                                     => 0,
    :write_lock                               => 1,
    :remote                                   => 2,
    :shared                                   => 3,
  })
  setup
end

class DeviceType < AbstractEnum
  iid "6d9420f7-0b56-4636-99f9-7346f1b01e57"
  map({
    :null                                     => 0,
    :floppy                                   => 1,
    :dvd                                      => 2,
    :hard_disk                                => 3,
    :network                                  => 4,
    :usb                                      => 5,
    :shared_folder                            => 6,
  })
  setup
end

class DeviceActivity < AbstractEnum
  iid "6FC8AEAA-130A-4eb5-8954-3F921422D707"
  map({
    :null                                     => 0,
    :idle                                     => 1,
    :reading                                  => 2,
    :writing                                  => 3,
  })
  setup
end

class ClipboardMode < AbstractEnum
  iid "33364716-4008-4701-8f14-be0fa3d62950"
  map({
    :disabled                                 => 0,
    :host_to_guest                            => 1,
    :guest_to_host                            => 2,
    :bidirectional                            => 3,
  })
  setup
end

class DragAndDropMode < AbstractEnum
  iid "b618ea0e-b6fb-4f8d-97f7-5e237e49b547"
  map({
    :disabled                                 => 0,
    :host_to_guest                            => 1,
    :guest_to_host                            => 2,
    :bidirectional                            => 3,
  })
  setup
end

class Scope < AbstractEnum
  iid "7c91096e-499e-4eca-9f9b-9001438d7855"
  map({
    :global                                   => 0,
    :machine                                  => 1,
    :session                                  => 2,
  })
  setup
end

class BIOSBootMenuMode < AbstractEnum
  iid "ae4fb9f7-29d2-45b4-b2c7-d579603135d5"
  map({
    :disabled                                 => 0,
    :menu_only                                => 1,
    :message_and_menu                         => 2,
  })
  setup
end

class ProcessorFeature < AbstractEnum
  iid "64c38e6b-8bcf-45ad-ac03-9b406287c5bf"
  map({
    :hw_virt_ex                               => 0,
    :pae                                      => 1,
    :long_mode                                => 2,
    :nested_paging                            => 3,
  })
  setup
end

class FirmwareType < AbstractEnum
  iid "b903f264-c230-483e-ac74-2b37ce60d371"
  map({
    :bios                                     => 1,
    :efi                                      => 2,
    :efi32                                    => 3,
    :efi64                                    => 4,
    :efidual                                  => 5,
  })
  setup
end

class PointingHIDType < AbstractEnum
  iid "e44b2f7b-72ba-44fb-9e53-2186014f0d17"
  map({
    :none                                     => 1,
    :ps2_mouse                                => 2,
    :usb_mouse                                => 3,
    :usb_tablet                               => 4,
    :combo_mouse                              => 5,
  })
  setup
end

class KeyboardHIDType < AbstractEnum
  iid "383e43d7-5c7c-4ec8-9cb8-eda1bccd6699"
  map({
    :none                                     => 1,
    :ps2_keyboard                             => 2,
    :usb_keyboard                             => 3,
    :combo_keyboard                           => 4,
  })
  setup
end

class VFSType < AbstractEnum
  iid "813999ba-b949-48a8-9230-aadc6285e2f2"
  map({
    :file                                     => 1,
    :cloud                                    => 2,
    :s3                                       => 3,
    :web_dav                                  => 4,
  })
  setup
end

class VFSFileType < AbstractEnum
  iid "714333cd-44e2-415f-a245-d378fa9b1242"
  map({
    :unknown                                  => 1,
    :fifo                                     => 2,
    :dev_char                                 => 3,
    :directory                                => 4,
    :dev_block                                => 5,
    :file                                     => 6,
    :sym_link                                 => 7,
    :socket                                   => 8,
    :white_out                                => 9,
  })
  setup
end

class ImportOptions < AbstractEnum
  iid "0a981523-3b20-4004-8ee3-dfd322202ace"
  map({
    :keep_all_macs                            => 1,
    :keep_nat_macs                            => 2,
  })
  setup
end

class VirtualSystemDescriptionType < AbstractEnum
  iid "303c0900-a746-4612-8c67-79003e91f459"
  map({
    :ignore                                   => 1,
    :os                                       => 2,
    :name                                     => 3,
    :product                                  => 4,
    :vendor                                   => 5,
    :version                                  => 6,
    :product_url                              => 7,
    :vendor_url                               => 8,
    :description                              => 9,
    :license                                  => 10,
    :miscellaneous                            => 11,
    :cpu                                      => 12,
    :memory                                   => 13,
    :hard_disk_controller_ide                 => 14,
    :hard_disk_controller_sata                => 15,
    :hard_disk_controller_scsi                => 16,
    :hard_disk_controller_sas                 => 17,
    :hard_disk_image                          => 18,
    :floppy                                   => 19,
    :cdrom                                    => 20,
    :network_adapter                          => 21,
    :usb_controller                           => 22,
    :sound_card                               => 23,
    :settings_file                            => 24,
  })
  setup
end

class VirtualSystemDescriptionValueType < AbstractEnum
  iid "56d9403f-3425-4118-9919-36f2a9b8c77c"
  map({
    :reference                                => 1,
    :original                                 => 2,
    :auto                                     => 3,
    :extra_config                             => 4,
  })
  setup
end

class CleanupMode < AbstractEnum
  iid "67897c50-7cca-47a9-83f6-ce8fd8eb5441"
  map({
    :unregister_only                          => 1,
    :detach_all_return_none                   => 2,
    :detach_all_return_hard_disks_only        => 3,
    :full                                     => 4,
  })
  setup
end

class CloneMode < AbstractEnum
  iid "A7A159FE-5096-4B8D-8C3C-D033CB0B35A8"
  map({
    :machine_state                            => 1,
    :machine_and_child_states                 => 2,
    :all_states                               => 3,
  })
  setup
end

class CloneOptions < AbstractEnum
  iid "22243f8e-96ab-497c-8cf0-f40a566c630b"
  map({
    :link                                     => 1,
    :keep_all_macs                            => 2,
    :keep_nat_macs                            => 3,
    :keep_disk_names                          => 4,
  })
  setup
end

class AutostopType < AbstractEnum
  iid "6bb96740-cf34-470d-aab2-2cd48ea2e10e"
  map({
    :disabled                                 => 1,
    :save_state                               => 2,
    :power_off                                => 3,
    :acpi_shutdown                            => 4,
  })
  setup
end

class HostNetworkInterfaceMediumType < AbstractEnum
  iid "1aa54aaf-2497-45a2-bfb1-8eb225e93d5b"
  map({
    :unknown                                  => 0,
    :ethernet                                 => 1,
    :ppp                                      => 2,
    :slip                                     => 3,
  })
  setup
end

class HostNetworkInterfaceStatus < AbstractEnum
  iid "CC474A69-2710-434B-8D99-C38E5D5A6F41"
  map({
    :unknown                                  => 0,
    :up                                       => 1,
    :down                                     => 2,
  })
  setup
end

class HostNetworkInterfaceType < AbstractEnum
  iid "67431b00-9946-48a2-bc02-b25c5919f4f3"
  map({
    :bridged                                  => 1,
    :host_only                                => 2,
  })
  setup
end

class AdditionsFacilityType < AbstractEnum
  iid "98f7f957-89fb-49b6-a3b1-31e3285eb1d8"
  map({
    :none                                     => 0,
    :vbox_guest_driver                        => 20,
    :auto_logon                               => 90,
    :vbox_service                             => 100,
    :vbox_tray_client                         => 101,
    :seamless                                 => 1000,
    :graphics                                 => 1100,
    :all                                      => 2147483646,
  })
  setup
end

class AdditionsFacilityClass < AbstractEnum
  iid "446451b2-c88d-4e5d-84c9-91bc7f533f5f"
  map({
    :none                                     => 0,
    :driver                                   => 10,
    :service                                  => 30,
    :program                                  => 50,
    :feature                                  => 100,
    :third_party                              => 999,
    :all                                      => 2147483646,
  })
  setup
end

class AdditionsFacilityStatus < AbstractEnum
  iid "ce06f9e1-394e-4fe9-9368-5a88c567dbde"
  map({
    :inactive                                 => 0,
    :paused                                   => 1,
    :pre_init                                 => 20,
    :init                                     => 30,
    :active                                   => 50,
    :terminating                              => 100,
    :terminated                               => 101,
    :failed                                   => 800,
    :unknown                                  => 999,
  })
  setup
end

class AdditionsRunLevelType < AbstractEnum
  iid "a25417ee-a9dd-4f5b-b0dc-377860087754"
  map({
    :none                                     => 0,
    :system                                   => 1,
    :userland                                 => 2,
    :desktop                                  => 3,
  })
  setup
end

class AdditionsUpdateFlag < AbstractEnum
  iid "726a818d-18d6-4389-94e8-3e9e6826171a"
  map({
    :none                                     => 0,
    :wait_for_update_start_only               => 1,
  })
  setup
end

class FileSeekType < AbstractEnum
  iid "1b73f4f3-3515-4073-a506-76878d9e2541"
  map({
    :set                                      => 0,
    :current                                  => 1,
  })
  setup
end

class ProcessInputFlag < AbstractEnum
  iid "5d38c1dd-2604-4ddf-92e5-0c0cdd3bdbd5"
  map({
    :none                                     => 0,
    :end_of_file                              => 1,
  })
  setup
end

class ProcessOutputFlag < AbstractEnum
  iid "9979e85a-52bb-40b7-870c-57115e27e0f1"
  map({
    :none                                     => 0,
    :std_err                                  => 1,
  })
  setup
end

class ProcessWaitForFlag < AbstractEnum
  iid "23b550c7-78e1-437e-98f0-65fd9757bcd2"
  map({
    :none                                     => 0,
    :start                                    => 1,
    :terminate                                => 2,
    :std_in                                   => 4,
    :std_out                                  => 8,
    :std_err                                  => 16,
  })
  setup
end

class ProcessWaitResult < AbstractEnum
  iid "40719cbe-f192-4fe9-a231-6697b3c8e2b4"
  map({
    :none                                     => 0,
    :start                                    => 1,
    :terminate                                => 2,
    :status                                   => 3,
    :error                                    => 4,
    :timeout                                  => 5,
    :std_in                                   => 6,
    :std_out                                  => 7,
    :std_err                                  => 8,
    :wait_flag_not_supported                  => 9,
  })
  setup
end

class CopyFileFlag < AbstractEnum
  iid "23f79fdf-738a-493d-b80b-42d607c9b916"
  map({
    :none                                     => 0,
    :recursive                                => 1,
    :update                                   => 2,
    :follow_links                             => 4,
  })
  setup
end

class DirectoryCreateFlag < AbstractEnum
  iid "bd721b0e-ced5-4f79-b368-249897c32a36"
  map({
    :none                                     => 0,
    :parents                                  => 1,
  })
  setup
end

class DirectoryRemoveRecFlag < AbstractEnum
  iid "455aabf0-7692-48f6-9061-f21579b65769"
  map({
    :none                                     => 0,
    :content_and_dir                          => 1,
    :content_only                             => 2,
  })
  setup
end

class PathRenameFlag < AbstractEnum
  iid "f3baa09f-c758-453d-b91c-c7787d76351d"
  map({
    :none                                     => 0,
    :no_replace                               => 1,
    :replace                                  => 2,
    :no_symlinks                              => 4,
  })
  setup
end

class ProcessCreateFlag < AbstractEnum
  iid "35192799-bfde-405d-9bea-c735ab9998e4"
  map({
    :none                                     => 0,
    :wait_for_process_start_only              => 1,
    :ignore_orphaned_processes                => 2,
    :hidden                                   => 4,
    :no_profile                               => 8,
    :wait_for_std_out                         => 16,
    :wait_for_std_err                         => 32,
    :expand_arguments                         => 64,
  })
  setup
end

class ProcessPriority < AbstractEnum
  iid "ee8cac50-e232-49fe-806b-d1214d9c2e49"
  map({
    :invalid                                  => 0,
    :default                                  => 1,
  })
  setup
end

class SymlinkType < AbstractEnum
  iid "37794668-f8f1-4714-98a5-6f8fa2ed0118"
  map({
    :unknown                                  => 0,
    :directory                                => 1,
    :file                                     => 2,
  })
  setup
end

class SymlinkReadFlag < AbstractEnum
  iid "b7fe2b9d-790e-4b25-8adf-1ca33026931f"
  map({
    :none                                     => 0,
    :no_symlinks                              => 1,
  })
  setup
end

class ProcessStatus < AbstractEnum
  iid "4d52368f-5b48-4bfe-b486-acf89139b52f"
  map({
    :undefined                                => 0,
    :starting                                 => 10,
    :started                                  => 100,
    :paused                                   => 110,
    :terminating                              => 480,
    :terminated_normally                      => 500,
    :terminated_signal                        => 510,
    :terminated_abnormally                    => 511,
    :timed_out_killed                         => 512,
    :timed_out_abnormally                     => 513,
    :down                                     => 600,
    :error                                    => 800,
  })
  setup
end

class FsObjType < AbstractEnum
  iid "a1ed437c-b3c3-4ca2-b19c-4239d658d5e8"
  map({
    :undefined                                => 0,
    :fifo                                     => 1,
    :dev_char                                 => 10,
    :dev_block                                => 11,
    :directory                                => 50,
    :file                                     => 80,
    :symlink                                  => 100,
    :socket                                   => 200,
    :whiteout                                 => 400,
  })
  setup
end

class DragAndDropAction < AbstractEnum
  iid "47f3b162-c107-4fcd-bfa7-54b8135c441e"
  map({
    :ignore                                   => 0,
    :copy                                     => 1,
    :move                                     => 2,
    :link                                     => 3,
  })
  setup
end

class DirectoryOpenFlag < AbstractEnum
  iid "5138837a-8fd2-4194-a1b0-08f7bc3949d0"
  map({
    :none                                     => 0,
    :no_symlinks                              => 1,
  })
  setup
end

class MediumState < AbstractEnum
  iid "ef41e980-e012-43cd-9dea-479d4ef14d13"
  map({
    :not_created                              => 0,
    :created                                  => 1,
    :locked_read                              => 2,
    :locked_write                             => 3,
    :inaccessible                             => 4,
    :creating                                 => 5,
    :deleting                                 => 6,
  })
  setup
end

class MediumType < AbstractEnum
  iid "fe663fb5-c244-4e1b-9d81-c628b417dd04"
  map({
    :normal                                   => 0,
    :immutable                                => 1,
    :writethrough                             => 2,
    :shareable                                => 3,
    :readonly                                 => 4,
    :multi_attach                             => 5,
  })
  setup
end

class MediumVariant < AbstractEnum
  iid "80685b6b-e42f-497d-8271-e77bf3c61ada"
  map({
    :standard                                 => 0,
    :vmdk_split2g                             => 0x01,
    :vmdk_raw_disk                            => 0x02,
    :vmdk_stream_optimized                    => 0x04,
    :vmdk_esx                                 => 0x08,
    :fixed                                    => 0x10000,
    :diff                                     => 0x20000,
    :no_create_dir                            => 0x40000000,
  })
  setup
end

class DataType < AbstractEnum
  iid "d90ea51e-a3f1-4a01-beb1-c1723c0d3ba7"
  map({
    :int32                                    => 0,
    :int8                                     => 1,
    :string                                   => 2,
  })
  setup
end

class DataFlags < AbstractEnum
  iid "86884dcf-1d6b-4f1b-b4bf-f5aa44959d60"
  map({
    :none                                     => 0x00,
    :mandatory                                => 0x01,
    :expert                                   => 0x02,
    :array                                    => 0x04,
    :flag_mask                                => 0x07,
  })
  setup
end

class MediumFormatCapabilities < AbstractEnum
  iid "7342ba79-7ce0-4d94-8f86-5ed5a185d9bd"
  map({
    :uuid                                     => 0x01,
    :create_fixed                             => 0x02,
    :create_dynamic                           => 0x04,
    :create_split2g                           => 0x08,
    :differencing                             => 0x10,
    :asynchronous                             => 0x20,
    :file                                     => 0x40,
    :properties                               => 0x80,
    :tcp_networking                           => 0x100,
    :vfs                                      => 0x200,
    :capability_mask                          => 0x3FF,
  })
  setup
end

class MouseButtonState < AbstractEnum
  iid "9ee094b8-b28a-4d56-a166-973cb588d7f8"
  map({
    :left_button                              => 0x01,
    :right_button                             => 0x02,
    :middle_button                            => 0x04,
    :wheel_up                                 => 0x08,
    :wheel_down                               => 0x10,
    :x_button1                                => 0x20,
    :x_button2                                => 0x40,
    :mouse_state_mask                         => 0x7F,
  })
  setup
end

class FramebufferPixelFormat < AbstractEnum
  iid "7acfd5ed-29e3-45e3-8136-73c9224f3d2d"
  map({
    :opaque                                   => 0,
    :fourcc_rgb                               => 0x32424752,
  })
  setup
end

class NetworkAttachmentType < AbstractEnum
  iid "2ac4bc71-6b82-417a-acd1-f7426d2570d6"
  map({
    :null                                     => 0,
    :nat                                      => 1,
    :bridged                                  => 2,
    :internal                                 => 3,
    :host_only                                => 4,
    :generic                                  => 5,
  })
  setup
end

class NetworkAdapterType < AbstractEnum
  iid "3c2281e4-d952-4e87-8c7d-24379cb6a81c"
  map({
    :null                                     => 0,
    :am79c970a                                => 1,
    :am79c973                                 => 2,
    :i82540em                                 => 3,
    :i82543gc                                 => 4,
    :i82545em                                 => 5,
    :virtio                                   => 6,
  })
  setup
end

class NetworkAdapterPromiscModePolicy < AbstractEnum
  iid "c963768a-376f-4c85-8d84-d8ced4b7269e"
  map({
    :deny                                     => 1,
    :allow_network                            => 2,
    :allow_all                                => 3,
  })
  setup
end

class PortMode < AbstractEnum
  iid "533b5fe3-0185-4197-86a7-17e37dd39d76"
  map({
    :disconnected                             => 0,
    :host_pipe                                => 1,
    :host_device                              => 2,
    :raw_file                                 => 3,
  })
  setup
end

class USBDeviceState < AbstractEnum
  iid "b99a2e65-67fb-4882-82fd-f3e5e8193ab4"
  map({
    :not_supported                            => 0,
    :unavailable                              => 1,
    :busy                                     => 2,
    :available                                => 3,
    :held                                     => 4,
    :captured                                 => 5,
  })
  setup
end

class USBDeviceFilterAction < AbstractEnum
  iid "cbc30a49-2f4e-43b5-9da6-121320475933"
  map({
    :null                                     => 0,
    :ignore                                   => 1,
    :hold                                     => 2,
  })
  setup
end

class AudioDriverType < AbstractEnum
  iid "4bcc3d73-c2fe-40db-b72f-0c2ca9d68496"
  map({
    :null                                     => 0,
    :winmm                                    => 1,
    :oss                                      => 2,
    :alsa                                     => 3,
    :direct_sound                             => 4,
    :core_audio                               => 5,
    :mmpm                                     => 6,
    :pulse                                    => 7,
    :sol_audio                                => 8,
  })
  setup
end

class AudioControllerType < AbstractEnum
  iid "7afd395c-42c3-444e-8788-3ce80292f36c"
  map({
    :ac97                                     => 0,
    :sb16                                     => 1,
    :hda                                      => 2,
  })
  setup
end

class AuthType < AbstractEnum
  iid "7eef6ef6-98c2-4dc2-ab35-10d2b292028d"
  map({
    :null                                     => 0,
    :external                                 => 1,
    :guest                                    => 2,
  })
  setup
end

class StorageBus < AbstractEnum
  iid "eee67ab3-668d-4ef5-91e0-7025fe4a0d7a"
  map({
    :null                                     => 0,
    :ide                                      => 1,
    :sata                                     => 2,
    :scsi                                     => 3,
    :floppy                                   => 4,
    :sas                                      => 5,
  })
  setup
end

class StorageControllerType < AbstractEnum
  iid "8a412b8a-f43e-4456-bd37-b474f0879a58"
  map({
    :null                                     => 0,
    :lsi_logic                                => 1,
    :bus_logic                                => 2,
    :intel_ahci                               => 3,
    :piix3                                    => 4,
    :piix4                                    => 5,
    :ich6                                     => 6,
    :i82078                                   => 7,
    :lsi_logic_sas                            => 8,
  })
  setup
end

class ChipsetType < AbstractEnum
  iid "8b4096a8-a7c3-4d3b-bbb1-05a0a51ec394"
  map({
    :null                                     => 0,
    :piix3                                    => 1,
    :ich9                                     => 2,
  })
  setup
end

class NATAliasMode < AbstractEnum
  iid "67772168-50d9-11df-9669-7fb714ee4fa1"
  map({
    :alias_log                                => 0x1,
    :alias_proxy_only                         => 0x02,
    :alias_use_same_ports                     => 0x04,
  })
  setup
end

class NATProtocol < AbstractEnum
  iid "e90164be-eb03-11de-94af-fff9b1c1b19f"
  map({
    :udp                                      => 0,
    :tcp                                      => 1,
  })
  setup
end

class BandwidthGroupType < AbstractEnum
  iid "1d92b67d-dc69-4be9-ad4c-93a01e1e0c8e"
  map({
    :null                                     => 0,
    :disk                                     => 1,
    :network                                  => 2,
  })
  setup
end

class VBoxEventType < AbstractEnum
  iid "0d67e79e-b7b1-4919-aab3-b36866075515"
  map({
    :invalid                                  => 0,
    :any                                      => 1,
    :vetoable                                 => 2,
    :machine_event                            => 3,
    :snapshot_event                           => 4,
    :input_event                              => 5,
    :last_wildcard                            => 31,
    :on_machine_state_changed                 => 32,
    :on_machine_data_changed                  => 33,
    :on_extra_data_changed                    => 34,
    :on_extra_data_can_change                 => 35,
    :on_medium_registered                     => 36,
    :on_machine_registered                    => 37,
    :on_session_state_changed                 => 38,
    :on_snapshot_taken                        => 39,
    :on_snapshot_deleted                      => 40,
    :on_snapshot_changed                      => 41,
    :on_guest_property_changed                => 42,
    :on_mouse_pointer_shape_changed           => 43,
    :on_mouse_capability_changed              => 44,
    :on_keyboard_leds_changed                 => 45,
    :on_state_changed                         => 46,
    :on_additions_state_changed               => 47,
    :on_network_adapter_changed               => 48,
    :on_serial_port_changed                   => 49,
    :on_parallel_port_changed                 => 50,
    :on_storage_controller_changed            => 51,
    :on_medium_changed                        => 52,
    :on_vrde_server_changed                   => 53,
    :on_usb_controller_changed                => 54,
    :on_usb_device_state_changed              => 55,
    :on_shared_folder_changed                 => 56,
    :on_runtime_error                         => 57,
    :on_can_show_window                       => 58,
    :on_show_window                           => 59,
    :on_cpu_changed                           => 60,
    :on_vrde_server_info_changed              => 61,
    :on_event_source_changed                  => 62,
    :on_cpu_execution_cap_changed             => 63,
    :on_guest_keyboard                        => 64,
    :on_guest_mouse                           => 65,
    :on_nat_redirect                          => 66,
    :on_host_pci_device_plug                  => 67,
    :on_vbox_svc_availability_changed         => 68,
    :on_bandwidth_group_changed               => 69,
    :on_guest_monitor_changed                 => 70,
    :on_storage_device_changed                => 71,
    :on_clipboard_mode_changed                => 72,
    :on_drag_and_drop_mode_changed            => 73,
    :last                                     => 74,
  })
  setup
end

class GuestMonitorChangedEventType < AbstractEnum
  iid "ef172985-7e36-4297-95be-e46396968d66"
  map({
    :enabled                                  => 0,
    :disabled                                 => 1,
    :new_origin                               => 2,
  })
  setup
end

class VirtualBoxErrorInfo < AbstractInterface
  iid      "f91e6e91-49e1-4fd2-b21e-269003350d06"
  property :result_code, INT32, :readonly => true
  property :interface_i_d, WSTRING, :readonly => true
  property :component, WSTRING, :readonly => true
  property :text, WSTRING, :readonly => true
  property :next, :VirtualBoxErrorInfo, :readonly => true
  setup
end

class DHCPServer < AbstractInterface
  iid      "6cfe387c-74fb-4ca7-bff6-973bec8af7a3"
  extends  :NSISupports
  property :enabled, BOOL
  property :ip_address, WSTRING, :readonly => true
  property :network_mask, WSTRING, :readonly => true
  property :network_name, WSTRING, :readonly => true
  property :lower_ip, WSTRING, :readonly => true
  property :upper_ip, WSTRING, :readonly => true
  function :set_configuration, nil, [WSTRING, WSTRING, WSTRING, WSTRING]
  function :start, nil, [WSTRING, WSTRING, WSTRING]
  function :stop, nil, []
  setup
end

class VirtualBox < AbstractInterface
  iid      "3b2f08eb-b810-4715-bee0-bb06b9880ad2"
  extends  :NSISupports
  property :version, WSTRING, :readonly => true
  property :version_normalized, WSTRING, :readonly => true
  property :revision, UINT32, :readonly => true
  property :package_type, WSTRING, :readonly => true
  property :api_version, WSTRING, :readonly => true
  property :home_folder, WSTRING, :readonly => true
  property :settings_file_path, WSTRING, :readonly => true
  property :host, :Host, :readonly => true
  property :system_properties, :SystemProperties, :readonly => true
  property :machines, [:Machine], :readonly => true
  property :machine_groups, [WSTRING], :readonly => true
  property :hard_disks, [:Medium], :readonly => true
  property :dvd_images, [:Medium], :readonly => true
  property :floppy_images, [:Medium], :readonly => true
  property :progress_operations, [:Progress], :readonly => true
  property :guest_os_types, [:GuestOSType], :readonly => true
  property :shared_folders, [:SharedFolder], :readonly => true
  property :performance_collector, :PerformanceCollector, :readonly => true
  property :dhcp_servers, [:DHCPServer], :readonly => true
  property :event_source, :EventSource, :readonly => true
  property :extension_pack_manager, :ExtPackManager, :readonly => true
  property :internal_networks, [WSTRING], :readonly => true
  property :generic_network_drivers, [WSTRING], :readonly => true
  function :compose_machine_filename, WSTRING, [WSTRING, WSTRING, WSTRING, WSTRING]
  function :create_machine, :Machine, [WSTRING, WSTRING, [WSTRING], WSTRING, WSTRING]
  function :open_machine, :Machine, [WSTRING]
  function :register_machine, nil, [:Machine]
  function :find_machine, :Machine, [WSTRING]
  function :get_machines_by_groups, [:Machine], [[WSTRING]]
  function :get_machine_states, [:MachineState], [[:Machine]]
  function :create_appliance, :Appliance, []
  function :create_hard_disk, :Medium, [WSTRING, WSTRING]
  function :open_medium, :Medium, [WSTRING, :DeviceType, :AccessMode, BOOL]
  function :get_guest_os_type, :GuestOSType, [WSTRING]
  function :create_shared_folder, nil, [WSTRING, WSTRING, BOOL, BOOL]
  function :remove_shared_folder, nil, [WSTRING]
  function :get_extra_data_keys, [WSTRING], []
  function :get_extra_data, WSTRING, [WSTRING]
  function :set_extra_data, nil, [WSTRING, WSTRING]
  function :set_settings_secret, nil, [WSTRING]
  function :create_dhcp_server, :DHCPServer, [WSTRING]
  function :find_dhcp_server_by_network_name, :DHCPServer, [WSTRING]
  function :remove_dhcp_server, nil, [:DHCPServer]
  function :check_firmware_present, BOOL, [:FirmwareType, WSTRING, [:out, WSTRING], [:out, WSTRING]]
  setup
end

class VFSExplorer < AbstractInterface
  iid      "003d7f92-d38e-487f-b790-8c5e8631cb2f"
  extends  :NSISupports
  property :path, WSTRING, :readonly => true
  property :type, :VFSType, :readonly => true
  function :update, :Progress, []
  function :cd, :Progress, [WSTRING]
  function :cd_up, :Progress, []
  function :entry_list, nil, [[:out, [WSTRING]], [:out, [UINT32]], [:out, [UINT32]], [:out, [UINT32]]]
  function :exists, [WSTRING], [[WSTRING]]
  function :remove, :Progress, [[WSTRING]]
  setup
end

class Appliance < AbstractInterface
  iid      "3059cf9e-25c7-4f0b-9fa5-3c42e441670b"
  extends  :NSISupports
  property :path, WSTRING, :readonly => true
  property :disks, [WSTRING], :readonly => true
  property :virtual_system_descriptions, [:VirtualSystemDescription], :readonly => true
  property :machines, [WSTRING], :readonly => true
  function :read, :Progress, [WSTRING]
  function :interpret, nil, []
  function :import_machines, :Progress, [[:mportOptions]]
  function :create_vfs_explorer, :VFSExplorer, [WSTRING]
  function :write, :Progress, [WSTRING, BOOL, WSTRING]
  function :get_warnings, [WSTRING], []
  setup
end

class VirtualSystemDescription < AbstractInterface
  iid      "d7525e6c-531a-4c51-8e04-41235083a3d8"
  extends  :NSISupports
  property :count, UINT32, :readonly => true
  function :get_description, nil, [[:out, [:VirtualSystemDescriptionType]], [:out, [WSTRING]], [:out, [WSTRING]], [:out, [WSTRING]], [:out, [WSTRING]]]
  function :get_description_by_type, nil, [:VirtualSystemDescriptionType, [:out, [:VirtualSystemDescriptionType]], [:out, [WSTRING]], [:out, [WSTRING]], [:out, [WSTRING]], [:out, [WSTRING]]]
  function :get_values_by_type, [WSTRING], [:VirtualSystemDescriptionType, :VirtualSystemDescriptionValueType]
  function :set_final_values, nil, [[BOOL], [WSTRING], [WSTRING]]
  function :add_description, nil, [:VirtualSystemDescriptionType, WSTRING, WSTRING]
  setup
end

class InternalMachineControl < AbstractInterface
  iid      "dca36a92-703c-4649-98a4-f40c1ef0c336"
  extends  :NSISupports
  function :set_remove_saved_state_file, nil, [BOOL]
  function :update_state, nil, [:MachineState]
  function :get_ipcid, WSTRING, []
  function :begin_power_up, nil, [:Progress]
  function :end_power_up, nil, [INT32]
  function :begin_powering_down, nil, [[:out, :Progress]]
  function :end_powering_down, nil, [INT32, WSTRING]
  function :run_usb_device_filters, nil, [:USBDevice, [:out, BOOL], [:out, UINT32]]
  function :capture_usb_device, nil, [WSTRING]
  function :detach_usb_device, nil, [WSTRING, BOOL]
  function :auto_capture_usb_devices, nil, []
  function :detach_all_usb_devices, nil, [BOOL]
  function :on_session_end, :Progress, [:Session]
  function :begin_saving_state, nil, [[:out, :Progress], [:out, WSTRING]]
  function :end_saving_state, nil, [INT32, WSTRING]
  function :adopt_saved_state, nil, [WSTRING]
  function :begin_taking_snapshot, nil, [:Console, WSTRING, WSTRING, :Progress, BOOL, [:out, WSTRING]]
  function :end_taking_snapshot, nil, [BOOL]
  function :delete_snapshot, :Progress, [:Console, WSTRING, WSTRING, BOOL, [:out, :MachineState]]
  function :finish_online_merge_medium, nil, [:MediumAttachment, :Medium, :Medium, BOOL, :Medium, [:Medium]]
  function :restore_snapshot, :Progress, [:Console, :Snapshot, [:out, :MachineState]]
  function :pull_guest_properties, nil, [[:out, [WSTRING]], [:out, [WSTRING]], [:out, [INT64]], [:out, [WSTRING]]]
  function :push_guest_property, nil, [WSTRING, WSTRING, INT64, WSTRING]
  function :lock_media, nil, []
  function :unlock_media, nil, []
  function :eject_medium, :MediumAttachment, [:MediumAttachment]
  function :report_vm_statistics, nil, [UINT32, UINT32, UINT32, UINT32, UINT32, UINT32, UINT32, UINT32, UINT32, UINT32, UINT32, UINT32, UINT32, UINT32, UINT32, UINT32]
  setup
end

class BIOSSettings < AbstractInterface
  iid      "38b54279-dc35-4f5e-a431-835b867c6b5e"
  extends  :NSISupports
  property :logo_fade_in, BOOL
  property :logo_fade_out, BOOL
  property :logo_display_time, UINT32
  property :logo_image_path, WSTRING
  property :boot_menu_mode, :BIOSBootMenuMode
  property :acpi_enabled, BOOL
  property :io_apic_enabled, BOOL
  property :time_offset, INT64
  property :pxe_debug_enabled, BOOL
  setup
end

class PCIAddress < AbstractInterface
  iid      "D88B324F-DB19-4D3B-A1A9-BF5B127199A8"
  extends  :NSISupports
  property :bus, INT16
  property :device, INT16
  property :dev_function, INT16
  function :as_long, INT32, []
  function :from_long, nil, [INT32]
  setup
end

class PCIDeviceAttachment < AbstractInterface
  iid      "91f33d6f-e621-4f70-a77e-15f0e3c714d5"
  extends  :NSISupports
  property :name, WSTRING, :readonly => true
  property :is_physical_device, BOOL, :readonly => true
  property :host_address, INT32, :readonly => true
  property :guest_address, INT32, :readonly => true
  setup
end

class Machine < AbstractInterface
  iid      "22781af3-1c96-4126-9edf-67a020e0e858"
  extends  :NSISupports
  property :parent, :VirtualBox, :readonly => true
  property :accessible, BOOL, :readonly => true
  property :access_error, :VirtualBoxErrorInfo, :readonly => true
  property :name, WSTRING
  property :description, WSTRING
  property :id, WSTRING, :readonly => true
  property :groups, [WSTRING]
  property :os_type_id, WSTRING
  property :hardware_version, WSTRING
  property :hardware_uuid, WSTRING
  property :cpu_count, UINT32
  property :cpu_hot_plug_enabled, BOOL
  property :cpu_execution_cap, UINT32
  property :memory_size, UINT32
  property :memory_balloon_size, UINT32
  property :page_fusion_enabled, BOOL
  property :vram_size, UINT32
  property :accelerate3d_enabled, BOOL
  property :accelerate2d_video_enabled, BOOL
  property :monitor_count, UINT32
  property :video_capture_enabled, BOOL
  property :video_capture_file, WSTRING
  property :video_capture_width, UINT32
  property :video_capture_height, UINT32
  property :bios_settings, :BIOSSettings, :readonly => true
  property :firmware_type, :FirmwareType
  property :pointing_hid_type, :PointingHIDType
  property :keyboard_hid_type, :KeyboardHIDType
  property :hpet_enabled, BOOL
  property :chipset_type, :ChipsetType
  property :snapshot_folder, WSTRING
  property :vrde_server, :VRDEServer, :readonly => true
  property :emulated_usb_webcamera_enabled, BOOL
  property :emulated_usb_card_reader_enabled, BOOL
  property :medium_attachments, [:MediumAttachment], :readonly => true
  property :usb_controller, :USBController, :readonly => true
  property :audio_adapter, :AudioAdapter, :readonly => true
  property :storage_controllers, [:StorageController], :readonly => true
  property :settings_file_path, WSTRING, :readonly => true
  property :settings_modified, BOOL, :readonly => true
  property :session_state, :SessionState, :readonly => true
  property :session_type, WSTRING, :readonly => true
  property :session_pid, UINT32, :readonly => true
  property :state, :MachineState, :readonly => true
  property :last_state_change, INT64, :readonly => true
  property :state_file_path, WSTRING, :readonly => true
  property :log_folder, WSTRING, :readonly => true
  property :current_snapshot, :Snapshot, :readonly => true
  property :snapshot_count, UINT32, :readonly => true
  property :current_state_modified, BOOL, :readonly => true
  property :shared_folders, [:SharedFolder], :readonly => true
  property :clipboard_mode, :ClipboardMode
  property :drag_and_drop_mode, :DragAndDropMode
  property :guest_property_notification_patterns, WSTRING
  property :teleporter_enabled, BOOL
  property :teleporter_port, UINT32
  property :teleporter_address, WSTRING
  property :teleporter_password, WSTRING
  property :fault_tolerance_state, :FaultToleranceState
  property :fault_tolerance_port, UINT32
  property :fault_tolerance_address, WSTRING
  property :fault_tolerance_password, WSTRING
  property :fault_tolerance_sync_interval, UINT32
  property :rtc_use_utc, BOOL
  property :io_cache_enabled, BOOL
  property :io_cache_size, UINT32
  property :pci_device_assignments, [:PCIDeviceAttachment], :readonly => true
  property :bandwidth_control, :BandwidthControl, :readonly => true
  property :tracing_enabled, BOOL
  property :tracing_config, WSTRING
  property :allow_tracing_to_access_vm, BOOL
  property :autostart_enabled, BOOL
  property :autostart_delay, UINT32
  property :autostop_type, :AutostopType
  function :lock_machine, nil, [:Session, :LockType]
  function :launch_vm_process, :Progress, [:Session, WSTRING, WSTRING]
  function :set_boot_order, nil, [UINT32, :DeviceType]
  function :get_boot_order, :DeviceType, [UINT32]
  function :attach_device, nil, [WSTRING, INT32, INT32, :DeviceType, :Medium]
  function :attach_device_without_medium, nil, [WSTRING, INT32, INT32, :DeviceType]
  function :detach_device, nil, [WSTRING, INT32, INT32]
  function :passthrough_device, nil, [WSTRING, INT32, INT32, BOOL]
  function :temporary_eject_device, nil, [WSTRING, INT32, INT32, BOOL]
  function :non_rotational_device, nil, [WSTRING, INT32, INT32, BOOL]
  function :set_auto_discard_for_device, nil, [WSTRING, INT32, INT32, BOOL]
  function :set_bandwidth_group_for_device, nil, [WSTRING, INT32, INT32, :BandwidthGroup]
  function :set_no_bandwidth_group_for_device, nil, [WSTRING, INT32, INT32]
  function :unmount_medium, nil, [WSTRING, INT32, INT32, BOOL]
  function :mount_medium, nil, [WSTRING, INT32, INT32, :Medium, BOOL]
  function :get_medium, :Medium, [WSTRING, INT32, INT32]
  function :get_medium_attachments_of_controller, [:MediumAttachment], [WSTRING]
  function :get_medium_attachment, :MediumAttachment, [WSTRING, INT32, INT32]
  function :attach_host_pci_device, nil, [INT32, INT32, BOOL]
  function :detach_host_pci_device, nil, [INT32]
  function :get_network_adapter, :NetworkAdapter, [UINT32]
  function :add_storage_controller, :StorageController, [WSTRING, :StorageBus]
  function :get_storage_controller_by_name, :StorageController, [WSTRING]
  function :get_storage_controller_by_instance, :StorageController, [UINT32]
  function :remove_storage_controller, nil, [WSTRING]
  function :set_storage_controller_bootable, nil, [WSTRING, BOOL]
  function :get_serial_port, :SerialPort, [UINT32]
  function :get_parallel_port, :ParallelPort, [UINT32]
  function :get_extra_data_keys, [WSTRING], []
  function :get_extra_data, WSTRING, [WSTRING]
  function :set_extra_data, nil, [WSTRING, WSTRING]
  function :get_cpu_property, BOOL, [:CPUPropertyType]
  function :set_cpu_property, nil, [:CPUPropertyType, BOOL]
  function :get_cpuid_leaf, nil, [UINT32, [:out, UINT32], [:out, UINT32], [:out, UINT32], [:out, UINT32]]
  function :set_cpuid_leaf, nil, [UINT32, UINT32, UINT32, UINT32, UINT32]
  function :remove_cpuid_leaf, nil, [UINT32]
  function :remove_all_cpuid_leaves, nil, []
  function :get_hw_virt_ex_property, BOOL, [:HWVirtExPropertyType]
  function :set_hw_virt_ex_property, nil, [:HWVirtExPropertyType, BOOL]
  function :save_settings, nil, []
  function :discard_settings, nil, []
  function :unregister, [:Medium], [:CleanupMode]
  function :delete, :Progress, [[:Medium]]
  function :export, :VirtualSystemDescription, [:Appliance, WSTRING]
  function :find_snapshot, :Snapshot, [WSTRING]
  function :create_shared_folder, nil, [WSTRING, WSTRING, BOOL, BOOL]
  function :remove_shared_folder, nil, [WSTRING]
  function :can_show_console_window, BOOL, []
  function :show_console_window, INT64, []
  function :get_guest_property, nil, [WSTRING, [:out, WSTRING], [:out, INT64], [:out, WSTRING]]
  function :get_guest_property_value, WSTRING, [WSTRING]
  function :get_guest_property_timestamp, INT64, [WSTRING]
  function :set_guest_property, nil, [WSTRING, WSTRING, WSTRING]
  function :set_guest_property_value, nil, [WSTRING, WSTRING]
  function :delete_guest_property, nil, [WSTRING]
  function :enumerate_guest_properties, nil, [WSTRING, [:out, [WSTRING]], [:out, [WSTRING]], [:out, [INT64]], [:out, [WSTRING]]]
  function :query_saved_guest_screen_info, nil, [UINT32, [:out, UINT32], [:out, UINT32], [:out, UINT32], [:out, UINT32], [:out, BOOL]]
  function :query_saved_thumbnail_size, nil, [UINT32, [:out, UINT32], [:out, UINT32], [:out, UINT32]]
  function :read_saved_thumbnail_to_array, [OCTET], [UINT32, BOOL, [:out, UINT32], [:out, UINT32]]
  function :read_saved_thumbnail_png_to_array, [OCTET], [UINT32, [:out, UINT32], [:out, UINT32]]
  function :query_saved_screenshot_png_size, nil, [UINT32, [:out, UINT32], [:out, UINT32], [:out, UINT32]]
  function :read_saved_screenshot_png_to_array, [OCTET], [UINT32, [:out, UINT32], [:out, UINT32]]
  function :hot_plug_cpu, nil, [UINT32]
  function :hot_unplug_cpu, nil, [UINT32]
  function :get_cpu_status, BOOL, [UINT32]
  function :query_log_filename, WSTRING, [UINT32]
  function :read_log, [OCTET], [UINT32, INT64, INT64]
  function :clone_to, :Progress, [:Machine, :CloneMode, [:CloneOptions]]
  setup
end

class VRDEServerInfo < AbstractInterface
  iid      "714434a1-58c3-4aab-9049-7652c5df113b"
  extends  :NSISupports
  property :active, BOOL, :readonly => true
  property :port, INT32, :readonly => true
  property :number_of_clients, UINT32, :readonly => true
  property :begin_time, INT64, :readonly => true
  property :end_time, INT64, :readonly => true
  property :bytes_sent, INT64, :readonly => true
  property :bytes_sent_total, INT64, :readonly => true
  property :bytes_received, INT64, :readonly => true
  property :bytes_received_total, INT64, :readonly => true
  property :user, WSTRING, :readonly => true
  property :domain, WSTRING, :readonly => true
  property :client_name, WSTRING, :readonly => true
  property :client_ip, WSTRING, :readonly => true
  property :client_version, UINT32, :readonly => true
  property :encryption_style, UINT32, :readonly => true
  setup
end

class Console < AbstractInterface
  iid      "db7ab4ca-2a3f-4183-9243-c1208da92392"
  extends  :NSISupports
  property :machine, :Machine, :readonly => true
  property :state, :MachineState, :readonly => true
  property :guest, :Guest, :readonly => true
  property :keyboard, :Keyboard, :readonly => true
  property :mouse, :Mouse, :readonly => true
  property :display, :Display, :readonly => true
  property :debugger, :MachineDebugger, :readonly => true
  property :usb_devices, [:USBDevice], :readonly => true
  property :remote_usb_devices, [:HostUSBDevice], :readonly => true
  property :shared_folders, [:SharedFolder], :readonly => true
  property :vrde_server_info, :VRDEServerInfo, :readonly => true
  property :event_source, :EventSource, :readonly => true
  property :attached_pci_devices, [:PCIDeviceAttachment], :readonly => true
  property :use_host_clipboard, BOOL
  function :power_up, :Progress, []
  function :power_up_paused, :Progress, []
  function :power_down, :Progress, []
  function :reset, nil, []
  function :pause, nil, []
  function :resume, nil, []
  function :power_button, nil, []
  function :sleep_button, nil, []
  function :get_power_button_handled, BOOL, []
  function :get_guest_entered_acpi_mode, BOOL, []
  function :save_state, :Progress, []
  function :adopt_saved_state, nil, [WSTRING]
  function :discard_saved_state, nil, [BOOL]
  function :get_device_activity, :DeviceActivity, [:DeviceType]
  function :attach_usb_device, nil, [WSTRING]
  function :detach_usb_device, :USBDevice, [WSTRING]
  function :find_usb_device_by_address, :USBDevice, [WSTRING]
  function :find_usb_device_by_id, :USBDevice, [WSTRING]
  function :create_shared_folder, nil, [WSTRING, WSTRING, BOOL, BOOL]
  function :remove_shared_folder, nil, [WSTRING]
  function :take_snapshot, :Progress, [WSTRING, WSTRING]
  function :delete_snapshot, :Progress, [WSTRING]
  function :delete_snapshot_and_all_children, :Progress, [WSTRING]
  function :delete_snapshot_range, :Progress, [WSTRING, WSTRING]
  function :restore_snapshot, :Progress, [:Snapshot]
  function :teleport, :Progress, [WSTRING, UINT32, WSTRING, UINT32]
  setup
end

class HostNetworkInterface < AbstractInterface
  iid      "87a4153d-6889-4dd6-9654-2e9ff0ae8dec"
  extends  :NSISupports
  property :name, WSTRING, :readonly => true
  property :id, WSTRING, :readonly => true
  property :network_name, WSTRING, :readonly => true
  property :dhcp_enabled, BOOL, :readonly => true
  property :ip_address, WSTRING, :readonly => true
  property :network_mask, WSTRING, :readonly => true
  property :ipv6_supported, BOOL, :readonly => true
  property :ipv6_address, WSTRING, :readonly => true
  property :ipv6_network_mask_prefix_length, UINT32, :readonly => true
  property :hardware_address, WSTRING, :readonly => true
  property :medium_type, :HostNetworkInterfaceMediumType, :readonly => true
  property :status, :HostNetworkInterfaceStatus, :readonly => true
  property :interface_type, :HostNetworkInterfaceType, :readonly => true
  function :enable_static_ip_config, nil, [WSTRING, WSTRING]
  function :enable_static_ip_config_v6, nil, [WSTRING, UINT32]
  function :enable_dynamic_ip_config, nil, []
  function :dhcp_rediscover, nil, []
  setup
end

class Host < AbstractInterface
  iid      "30678943-32df-4830-b413-931b25ac86a0"
  extends  :NSISupports
  property :dvd_drives, [:Medium], :readonly => true
  property :floppy_drives, [:Medium], :readonly => true
  property :usb_devices, [:HostUSBDevice], :readonly => true
  property :usb_device_filters, [:HostUSBDeviceFilter], :readonly => true
  property :network_interfaces, [:HostNetworkInterface], :readonly => true
  property :processor_count, UINT32, :readonly => true
  property :processor_online_count, UINT32, :readonly => true
  property :processor_core_count, UINT32, :readonly => true
  property :memory_size, UINT32, :readonly => true
  property :memory_available, UINT32, :readonly => true
  property :operating_system, WSTRING, :readonly => true
  property :os_version, WSTRING, :readonly => true
  property :utc_time, INT64, :readonly => true
  property :acceleration3d_available, BOOL, :readonly => true
  function :get_processor_speed, UINT32, [UINT32]
  function :get_processor_feature, BOOL, [:ProcessorFeature]
  function :get_processor_description, WSTRING, [UINT32]
  function :get_processor_cpuid_leaf, nil, [UINT32, UINT32, UINT32, [:out, UINT32], [:out, UINT32], [:out, UINT32], [:out, UINT32]]
  function :create_host_only_network_interface, :Progress, [[:out, :HostNetworkInterface]]
  function :remove_host_only_network_interface, :Progress, [WSTRING]
  function :create_usb_device_filter, :HostUSBDeviceFilter, [WSTRING]
  function :insert_usb_device_filter, nil, [UINT32, :HostUSBDeviceFilter]
  function :remove_usb_device_filter, nil, [UINT32]
  function :find_host_dvd_drive, :Medium, [WSTRING]
  function :find_host_floppy_drive, :Medium, [WSTRING]
  function :find_host_network_interface_by_name, :HostNetworkInterface, [WSTRING]
  function :find_host_network_interface_by_id, :HostNetworkInterface, [WSTRING]
  function :find_host_network_interfaces_of_type, [:HostNetworkInterface], [:HostNetworkInterfaceType]
  function :find_usb_device_by_id, :HostUSBDevice, [WSTRING]
  function :find_usb_device_by_address, :HostUSBDevice, [WSTRING]
  function :generate_mac_address, WSTRING, []
  setup
end

class SystemProperties < AbstractInterface
  iid      "1d7aca29-97f0-4287-9874-a60ec4f80ea6"
  extends  :NSISupports
  property :min_guest_ram, UINT32, :readonly => true
  property :max_guest_ram, UINT32, :readonly => true
  property :min_guest_vram, UINT32, :readonly => true
  property :max_guest_vram, UINT32, :readonly => true
  property :min_guest_cpu_count, UINT32, :readonly => true
  property :max_guest_cpu_count, UINT32, :readonly => true
  property :max_guest_monitors, UINT32, :readonly => true
  property :info_vd_size, INT64, :readonly => true
  property :serial_port_count, UINT32, :readonly => true
  property :parallel_port_count, UINT32, :readonly => true
  property :max_boot_position, UINT32, :readonly => true
  property :default_machine_folder, WSTRING
  property :medium_formats, [:MediumFormat], :readonly => true
  property :default_hard_disk_format, WSTRING
  property :free_disk_space_warning, INT64
  property :free_disk_space_percent_warning, UINT32
  property :free_disk_space_error, INT64
  property :free_disk_space_percent_error, UINT32
  property :vrde_auth_library, WSTRING
  property :web_service_auth_library, WSTRING
  property :default_vrde_ext_pack, WSTRING
  property :log_history_count, UINT32
  property :default_audio_driver, :AudioDriverType, :readonly => true
  property :autostart_database_path, WSTRING
  property :default_additions_iso, WSTRING
  function :get_max_network_adapters, UINT32, [:ChipsetType]
  function :get_max_network_adapters_of_type, UINT32, [:ChipsetType, :NetworkAttachmentType]
  function :get_max_devices_per_port_for_storage_bus, UINT32, [:StorageBus]
  function :get_min_port_count_for_storage_bus, UINT32, [:StorageBus]
  function :get_max_port_count_for_storage_bus, UINT32, [:StorageBus]
  function :get_max_instances_of_storage_bus, UINT32, [:ChipsetType, :StorageBus]
  function :get_device_types_for_storage_bus, [:DeviceType], [:StorageBus]
  function :get_default_io_cache_setting_for_storage_controller, BOOL, [:StorageControllerType]
  setup
end

class GuestOSType < AbstractInterface
  iid      "6d968f9a-858b-4c50-bf17-241f069e94c2"
  extends  :NSISupports
  property :family_id, WSTRING, :readonly => true
  property :family_description, WSTRING, :readonly => true
  property :id, WSTRING, :readonly => true
  property :description, WSTRING, :readonly => true
  property :is64_bit, BOOL, :readonly => true
  property :recommended_io_apic, BOOL, :readonly => true
  property :recommended_virt_ex, BOOL, :readonly => true
  property :recommended_ram, UINT32, :readonly => true
  property :recommended_vram, UINT32, :readonly => true
  property :recommended2d_video_acceleration, BOOL, :readonly => true
  property :recommended3d_acceleration, BOOL, :readonly => true
  property :recommended_hdd, INT64, :readonly => true
  property :adapter_type, :NetworkAdapterType, :readonly => true
  property :recommended_pae, BOOL, :readonly => true
  property :recommended_dvd_storage_controller, :StorageControllerType, :readonly => true
  property :recommended_dvd_storage_bus, :StorageBus, :readonly => true
  property :recommended_hd_storage_controller, :StorageControllerType, :readonly => true
  property :recommended_hd_storage_bus, :StorageBus, :readonly => true
  property :recommended_firmware, :FirmwareType, :readonly => true
  property :recommended_usb_hid, BOOL, :readonly => true
  property :recommended_hpet, BOOL, :readonly => true
  property :recommended_usb_tablet, BOOL, :readonly => true
  property :recommended_rtc_use_utc, BOOL, :readonly => true
  property :recommended_chipset, :ChipsetType, :readonly => true
  property :recommended_audio_controller, :AudioControllerType, :readonly => true
  property :recommended_floppy, BOOL, :readonly => true
  property :recommended_usb, BOOL, :readonly => true
  setup
end

class AdditionsFacility < AbstractInterface
  iid      "54992946-6af1-4e49-98ec-58b558b7291e"
  extends  :NSISupports
  property :class_type, :AdditionsFacilityClass, :readonly => true
  property :last_updated, INT64, :readonly => true
  property :name, WSTRING, :readonly => true
  property :status, :AdditionsFacilityStatus, :readonly => true
  property :type, :AdditionsFacilityType, :readonly => true
  setup
end

class GuestSession < AbstractInterface
  iid      "57eb82a8-822b-42c1-9d1c-5c54bc3d3250"
  extends  :NSISupports
  property :user, WSTRING, :readonly => true
  property :domain, WSTRING, :readonly => true
  property :name, WSTRING, :readonly => true
  property :id, UINT32, :readonly => true
  property :timeout, UINT32, :readonly => true
  property :environment, [WSTRING]
  property :processes, [:GuestProcess], :readonly => true
  property :directories, [:GuestDirectory], :readonly => true
  property :files, [:GuestFile], :readonly => true
  function :close, nil, []
  function :copy_from, :Progress, [WSTRING, WSTRING, [:CopyFileFlag]]
  function :copy_to, :Progress, [WSTRING, WSTRING, [:CopyFileFlag]]
  function :directory_create, nil, [WSTRING, UINT32, [:DirectoryCreateFlag]]
  function :directory_create_temp, WSTRING, [WSTRING, UINT32, WSTRING, BOOL]
  function :directory_exists, BOOL, [WSTRING]
  function :directory_open, :GuestDirectory, [WSTRING, WSTRING, [:DirectoryOpenFlag]]
  function :directory_query_info, :GuestFsObjInfo, [WSTRING]
  function :directory_remove, nil, [WSTRING]
  function :directory_remove_recursive, :Progress, [WSTRING, [:DirectoryRemoveRecFlag]]
  function :directory_rename, nil, [WSTRING, WSTRING, [:PathRenameFlag]]
  function :directory_set_acl, nil, [WSTRING, WSTRING]
  function :environment_clear, nil, []
  function :environment_get, WSTRING, [WSTRING]
  function :environment_set, nil, [WSTRING, WSTRING]
  function :environment_unset, nil, [WSTRING]
  function :file_create_temp, :GuestFile, [WSTRING, UINT32, WSTRING, BOOL]
  function :file_exists, BOOL, [WSTRING]
  function :file_remove, nil, [WSTRING]
  function :file_open, :GuestFile, [WSTRING, WSTRING, WSTRING, UINT32, INT64]
  function :file_query_info, :GuestFsObjInfo, [WSTRING]
  function :file_query_size, INT64, [WSTRING]
  function :file_rename, nil, [WSTRING, WSTRING, [:PathRenameFlag]]
  function :file_set_acl, nil, [WSTRING, WSTRING]
  function :process_create, :GuestProcess, [WSTRING, [WSTRING], [WSTRING], [:ProcessCreateFlag], UINT32]
  function :process_create_ex, :GuestProcess, [WSTRING, [WSTRING], [WSTRING], [:ProcessCreateFlag], UINT32, :ProcessPriority, [INT32]]
  function :process_get, :GuestProcess, [UINT32]
  function :symlink_create, nil, [WSTRING, WSTRING, :SymlinkType]
  function :symlink_exists, BOOL, [WSTRING]
  function :symlink_read, WSTRING, [WSTRING, [:SymlinkReadFlag]]
  function :symlink_remove_directory, nil, [WSTRING]
  function :symlink_remove_file, nil, [WSTRING]
  setup
end

class Process < AbstractInterface
  iid      "08864d56-96ab-418b-adbc-5a679532aeb0"
  extends  :NSISupports
  property :pid, UINT32, :readonly => true
  property :status, :ProcessStatus, :readonly => true
  property :exit_code, INT32, :readonly => true
  property :environment, [WSTRING], :readonly => true
  property :arguments, [WSTRING], :readonly => true
  property :executable_path, WSTRING, :readonly => true
  property :name, WSTRING, :readonly => true
  function :wait_for, :ProcessWaitResult, [UINT32, UINT32]
  function :wait_for_array, :ProcessWaitResult, [[:ProcessWaitForFlag], UINT32]
  function :read, [OCTET], [UINT32, UINT32, UINT32]
  function :write, UINT32, [UINT32, UINT32, [OCTET], UINT32]
  function :write_array, UINT32, [UINT32, [:ProcessInputFlag], [OCTET], UINT32]
  function :terminate, nil, []
  setup
end

class GuestProcess < AbstractInterface
  iid      "dfa39a36-5d43-4840-a025-67ea956b3111"
  extends  :Process
  setup
end

class Directory < AbstractInterface
  iid      "1b70dd03-26d7-483a-8877-89bbb0f87b70"
  extends  :NSISupports
  property :directory_name, WSTRING, :readonly => true
  property :filter, WSTRING, :readonly => true
  function :close, nil, []
  function :read, :FsObjInfo, []
  setup
end

class GuestDirectory < AbstractInterface
  iid      "af4a8ce0-0725-42b7-8826-46e3c7ba7357"
  extends  :Directory
  setup
end

class File < AbstractInterface
  iid      "b702a560-6139-4a8e-a892-bbf14b97bf97"
  extends  :NSISupports
  property :creation_mode, UINT32, :readonly => true
  property :disposition, UINT32, :readonly => true
  property :file_name, WSTRING, :readonly => true
  property :initial_size, INT64, :readonly => true
  property :open_mode, UINT32, :readonly => true
  property :offset, INT64, :readonly => true
  function :close, nil, []
  function :query_info, :FsObjInfo, []
  function :read, [OCTET], [UINT32, UINT32]
  function :read_at, [OCTET], [INT64, UINT32, UINT32]
  function :seek, nil, [INT64, :FileSeekType]
  function :set_acl, nil, [WSTRING]
  function :write, UINT32, [[OCTET], UINT32]
  function :write_at, UINT32, [INT64, [OCTET], UINT32]
  setup
end

class GuestFile < AbstractInterface
  iid      "60661aec-145f-4d11-b80e-8ea151598093"
  extends  :File
  setup
end

class FsObjInfo < AbstractInterface
  iid      "4047ba30-7006-4966-ae86-94164e5e20eb"
  extends  :NSISupports
  property :access_time, INT64, :readonly => true
  property :allocated_size, INT64, :readonly => true
  property :birth_time, INT64, :readonly => true
  property :change_time, INT64, :readonly => true
  property :device_number, UINT32, :readonly => true
  property :file_attributes, WSTRING, :readonly => true
  property :generation_id, UINT32, :readonly => true
  property :gid, UINT32, :readonly => true
  property :group_name, WSTRING, :readonly => true
  property :hard_links, UINT32, :readonly => true
  property :modification_time, INT64, :readonly => true
  property :name, WSTRING, :readonly => true
  property :node_id, INT64, :readonly => true
  property :node_id_device, UINT32, :readonly => true
  property :object_size, INT64, :readonly => true
  property :type, :FsObjType, :readonly => true
  property :uid, UINT32, :readonly => true
  property :user_flags, UINT32, :readonly => true
  property :user_name, WSTRING, :readonly => true
  setup
end

class GuestFsObjInfo < AbstractInterface
  iid      "d5cf678e-3484-4e4a-ac55-329e15462e18"
  extends  :FsObjInfo
  setup
end

class Guest < AbstractInterface
  iid      "19c32350-0618-4ede-b0c3-2b4311bf0d9b"
  extends  :NSISupports
  property :os_type_id, WSTRING, :readonly => true
  property :additions_run_level, :AdditionsRunLevelType, :readonly => true
  property :additions_version, WSTRING, :readonly => true
  property :additions_revision, UINT32, :readonly => true
  property :facilities, [:AdditionsFacility], :readonly => true
  property :sessions, [:GuestSession], :readonly => true
  property :memory_balloon_size, UINT32
  property :statistics_update_interval, UINT32
  function :internal_get_statistics, nil, [[:out, UINT32], [:out, UINT32], [:out, UINT32], [:out, UINT32], [:out, UINT32], [:out, UINT32], [:out, UINT32], [:out, UINT32], [:out, UINT32], [:out, UINT32], [:out, UINT32], [:out, UINT32], [:out, UINT32]]
  function :get_facility_status, :AdditionsFacilityStatus, [:AdditionsFacilityType, [:out, INT64]]
  function :get_additions_status, BOOL, [:AdditionsRunLevelType]
  function :set_credentials, nil, [WSTRING, WSTRING, WSTRING, BOOL]
  function :drag_hg_enter, :DragAndDropAction, [UINT32, UINT32, UINT32, :DragAndDropAction, [:DragAndDropAction], [WSTRING]]
  function :drag_hg_move, :DragAndDropAction, [UINT32, UINT32, UINT32, :DragAndDropAction, [:DragAndDropAction], [WSTRING]]
  function :drag_hg_leave, nil, [UINT32]
  function :drag_hg_drop, :DragAndDropAction, [UINT32, UINT32, UINT32, :DragAndDropAction, [:DragAndDropAction], [WSTRING], [:out, WSTRING]]
  function :drag_hg_put_data, :Progress, [UINT32, WSTRING, [OCTET]]
  function :drag_gh_pending, :DragAndDropAction, [UINT32, [:out, [WSTRING]], [:out, [:DragAndDropAction]]]
  function :drag_gh_dropped, :Progress, [WSTRING, :DragAndDropAction]
  function :drag_gh_get_data, [OCTET], []
  function :create_session, :GuestSession, [WSTRING, WSTRING, WSTRING, WSTRING]
  function :find_session, [:GuestSession], [WSTRING]
  function :update_guest_additions, :Progress, [WSTRING, [:AdditionsUpdateFlag]]
  setup
end

class Progress < AbstractInterface
  iid      "c20238e4-3221-4d3f-8891-81ce92d9f913"
  extends  :NSISupports
  property :id, WSTRING, :readonly => true
  property :description, WSTRING, :readonly => true
  property :initiator, :NSISupports, :readonly => true
  property :cancelable, BOOL, :readonly => true
  property :percent, UINT32, :readonly => true
  property :time_remaining, INT32, :readonly => true
  property :completed, BOOL, :readonly => true
  property :canceled, BOOL, :readonly => true
  property :result_code, INT32, :readonly => true
  property :error_info, :VirtualBoxErrorInfo, :readonly => true
  property :operation_count, UINT32, :readonly => true
  property :operation, UINT32, :readonly => true
  property :operation_description, WSTRING, :readonly => true
  property :operation_percent, UINT32, :readonly => true
  property :operation_weight, UINT32, :readonly => true
  property :timeout, UINT32
  function :set_current_operation_progress, nil, [UINT32]
  function :set_next_operation, nil, [WSTRING, UINT32]
  function :wait_for_completion, nil, [INT32]
  function :wait_for_operation_completion, nil, [UINT32, INT32]
  function :wait_for_async_progress_completion, nil, [:Progress]
  function :cancel, nil, []
  setup
end

class Snapshot < AbstractInterface
  iid      "0472823b-c6e7-472a-8e9f-d732e86b8463"
  extends  :NSISupports
  property :id, WSTRING, :readonly => true
  property :name, WSTRING
  property :description, WSTRING
  property :time_stamp, INT64, :readonly => true
  property :online, BOOL, :readonly => true
  property :machine, :Machine, :readonly => true
  property :parent, :Snapshot, :readonly => true
  property :children, [:Snapshot], :readonly => true
  function :get_children_count, UINT32, []
  setup
end

class MediumAttachment < AbstractInterface
  iid      "5ee464d6-0613-4331-b154-7ce12170ef9f"
  extends  :NSISupports
  property :medium, :Medium, :readonly => true
  property :controller, WSTRING, :readonly => true
  property :port, INT32, :readonly => true
  property :device, INT32, :readonly => true
  property :type, :DeviceType, :readonly => true
  property :passthrough, BOOL, :readonly => true
  property :temporary_eject, BOOL, :readonly => true
  property :is_ejected, BOOL, :readonly => true
  property :non_rotational, BOOL, :readonly => true
  property :discard, BOOL, :readonly => true
  property :bandwidth_group, :BandwidthGroup, :readonly => true
  setup
end

class Medium < AbstractInterface
  iid      "29989373-b111-4654-8493-2e1176cba890"
  extends  :NSISupports
  property :id, WSTRING, :readonly => true
  property :description, WSTRING
  property :state, :MediumState, :readonly => true
  property :variant, UINT32, :readonly => true
  property :location, WSTRING
  property :name, WSTRING, :readonly => true
  property :device_type, :DeviceType, :readonly => true
  property :host_drive, BOOL, :readonly => true
  property :size, INT64, :readonly => true
  property :format, WSTRING, :readonly => true
  property :medium_format, :MediumFormat, :readonly => true
  property :type, :MediumType
  property :allowed_types, [:MediumType], :readonly => true
  property :parent, :Medium, :readonly => true
  property :children, [:Medium], :readonly => true
  property :base, :Medium, :readonly => true
  property :read_only, BOOL, :readonly => true
  property :logical_size, INT64, :readonly => true
  property :auto_reset, BOOL
  property :last_access_error, WSTRING, :readonly => true
  property :machine_ids, [WSTRING], :readonly => true
  function :set_ids, nil, [BOOL, WSTRING, BOOL, WSTRING]
  function :refresh_state, :MediumState, []
  function :get_snapshot_ids, [WSTRING], [WSTRING]
  function :lock_read, :MediumState, []
  function :unlock_read, :MediumState, []
  function :lock_write, :MediumState, []
  function :unlock_write, :MediumState, []
  function :close, nil, []
  function :get_property, WSTRING, [WSTRING]
  function :set_property, nil, [WSTRING, WSTRING]
  function :get_properties, [WSTRING], [WSTRING, [:out, [WSTRING]]]
  function :set_properties, nil, [[WSTRING], [WSTRING]]
  function :create_base_storage, :Progress, [INT64, UINT32]
  function :delete_storage, :Progress, []
  function :create_diff_storage, :Progress, [:Medium, UINT32]
  function :merge_to, :Progress, [:Medium]
  function :clone_to, :Progress, [:Medium, UINT32, :Medium]
  function :clone_to_base, :Progress, [:Medium, UINT32]
  function :compact, :Progress, []
  function :resize, :Progress, [INT64]
  function :reset, :Progress, []
  setup
end

class MediumFormat < AbstractInterface
  iid      "9bd5b655-ea47-4637-99f3-aad0948be35b"
  extends  :NSISupports
  property :id, WSTRING, :readonly => true
  property :name, WSTRING, :readonly => true
  property :capabilities, UINT32, :readonly => true
  function :describe_file_extensions, nil, [[:out, [WSTRING]], [:out, [:DeviceType]]]
  function :describe_properties, nil, [[:out, [WSTRING]], [:out, [WSTRING]], [:out, [:DataType]], [:out, [UINT32]], [:out, [WSTRING]]]
  setup
end

class Keyboard < AbstractInterface
  iid      "f6916ec5-a881-4237-898f-7de58cf88672"
  extends  :NSISupports
  property :event_source, :EventSource, :readonly => true
  function :put_scancode, nil, [INT32]
  function :put_scancodes, UINT32, [[INT32]]
  function :put_cad, nil, []
  setup
end

class Mouse < AbstractInterface
  iid      "05044a52-7811-4f00-ae3a-0ab7ff707b10"
  extends  :NSISupports
  property :absolute_supported, BOOL, :readonly => true
  property :relative_supported, BOOL, :readonly => true
  property :needs_host_cursor, BOOL, :readonly => true
  property :event_source, :EventSource, :readonly => true
  function :put_mouse_event, nil, [INT32, INT32, INT32, INT32, INT32]
  function :put_mouse_event_absolute, nil, [INT32, INT32, INT32, INT32, INT32]
  setup
end

class Framebuffer < AbstractInterface
  iid      "b7ed347a-5765-40a0-ae1c-f543eb4ddeaf"
  extends  :NSISupports
  property :address, OCTET, :readonly => true
  property :width, UINT32, :readonly => true
  property :height, UINT32, :readonly => true
  property :bits_per_pixel, UINT32, :readonly => true
  property :bytes_per_line, UINT32, :readonly => true
  property :pixel_format, UINT32, :readonly => true
  property :uses_guest_vram, BOOL, :readonly => true
  property :height_reduction, UINT32, :readonly => true
  property :overlay, :FramebufferOverlay, :readonly => true
  property :win_id, INT64, :readonly => true
  function :lock, nil, []
  function :unlock, nil, []
  function :notify_update, nil, [UINT32, UINT32, UINT32, UINT32]
  function :request_resize, BOOL, [UINT32, UINT32, :pointer, UINT32, UINT32, UINT32, UINT32]
  function :video_mode_supported, BOOL, [UINT32, UINT32, UINT32]
  function :get_visible_region, UINT32, [:pointer, UINT32]
  function :set_visible_region, nil, [:pointer, UINT32]
  function :process_v_hw_a_command, nil, [:pointer]
  setup
end

class FramebufferOverlay < AbstractInterface
  iid      "0bcc1c7e-e415-47d2-bfdb-e4c705fb0f47"
  extends  :Framebuffer
  property :x, UINT32, :readonly => true
  property :y, UINT32, :readonly => true
  property :visible, BOOL, :readonly => true
  property :alpha, UINT32, :readonly => true
  function :move, nil, [UINT32, UINT32]
  setup
end

class Display < AbstractInterface
  iid      "b83ee395-8679-40ca-8d60-1a0cbe724930"
  extends  :NSISupports
  function :get_screen_resolution, nil, [UINT32, [:out, UINT32], [:out, UINT32], [:out, UINT32]]
  function :set_framebuffer, nil, [UINT32, :Framebuffer]
  function :get_framebuffer, nil, [UINT32, [:out, :Framebuffer], [:out, INT32], [:out, INT32]]
  function :set_video_mode_hint, nil, [UINT32, BOOL, BOOL, INT32, INT32, UINT32, UINT32, UINT32]
  function :set_seamless_mode, nil, [BOOL]
  function :take_screenshot, nil, [UINT32, :pointer, UINT32, UINT32]
  function :take_screenshot_to_array, [OCTET], [UINT32, UINT32, UINT32]
  function :take_screenshot_png_to_array, [OCTET], [UINT32, UINT32, UINT32]
  function :draw_to_screen, nil, [UINT32, :pointer, UINT32, UINT32, UINT32, UINT32]
  function :invalidate_and_update, nil, []
  function :resize_completed, nil, [UINT32]
  function :complete_v_hw_a_command, nil, [:pointer]
  function :viewport_changed, nil, [UINT32, UINT32, UINT32, UINT32, UINT32]
  setup
end

class NetworkAdapter < AbstractInterface
  iid      "efa0f965-63c7-4c60-afdf-b1cc9943b9c0"
  extends  :NSISupports
  property :adapter_type, :NetworkAdapterType
  property :slot, UINT32, :readonly => true
  property :enabled, BOOL
  property :mac_address, WSTRING
  property :attachment_type, :NetworkAttachmentType
  property :bridged_interface, WSTRING
  property :host_only_interface, WSTRING
  property :internal_network, WSTRING
  property :nat_network, WSTRING
  property :generic_driver, WSTRING
  property :cable_connected, BOOL
  property :line_speed, UINT32
  property :promisc_mode_policy, :NetworkAdapterPromiscModePolicy
  property :trace_enabled, BOOL
  property :trace_file, WSTRING
  property :nat_engine, :NATEngine, :readonly => true
  property :boot_priority, UINT32
  property :bandwidth_group, :BandwidthGroup
  function :get_property, WSTRING, [WSTRING]
  function :set_property, nil, [WSTRING, WSTRING]
  function :get_properties, [WSTRING], [WSTRING, [:out, [WSTRING]]]
  setup
end

class SerialPort < AbstractInterface
  iid      "937f6970-5103-4745-b78e-d28dcf1479a8"
  extends  :NSISupports
  property :slot, UINT32, :readonly => true
  property :enabled, BOOL
  property :io_base, UINT32
  property :irq, UINT32
  property :host_mode, :PortMode
  property :server, BOOL
  property :path, WSTRING
  setup
end

class ParallelPort < AbstractInterface
  iid      "0c925f06-dd10-4b77-8de8-294d738c3214"
  extends  :NSISupports
  property :slot, UINT32, :readonly => true
  property :enabled, BOOL
  property :io_base, UINT32
  property :irq, UINT32
  property :path, WSTRING
  setup
end

class MachineDebugger < AbstractInterface
  iid      "a9abbb7c-d678-43b2-bed2-19ec0e32303d"
  extends  :NSISupports
  property :single_step, BOOL
  property :recompile_user, BOOL
  property :recompile_supervisor, BOOL
  property :patm_enabled, BOOL
  property :csam_enabled, BOOL
  property :log_enabled, BOOL
  property :log_dbg_flags, WSTRING, :readonly => true
  property :log_dbg_groups, WSTRING, :readonly => true
  property :log_dbg_destinations, WSTRING, :readonly => true
  property :log_rel_flags, WSTRING, :readonly => true
  property :log_rel_groups, WSTRING, :readonly => true
  property :log_rel_destinations, WSTRING, :readonly => true
  property :hw_virt_ex_enabled, BOOL, :readonly => true
  property :hw_virt_ex_nested_paging_enabled, BOOL, :readonly => true
  property :hw_virt_ex_vpid_enabled, BOOL, :readonly => true
  property :os_name, WSTRING, :readonly => true
  property :os_version, WSTRING, :readonly => true
  property :pae_enabled, BOOL, :readonly => true
  property :virtual_time_rate, UINT32
  property :vm, INT64, :readonly => true
  function :dump_guest_core, nil, [WSTRING, WSTRING]
  function :dump_host_process_core, nil, [WSTRING, WSTRING]
  function :info, WSTRING, [WSTRING, WSTRING]
  function :inject_n_m_i, nil, []
  function :modify_log_groups, nil, [WSTRING]
  function :modify_log_flags, nil, [WSTRING]
  function :modify_log_destinations, nil, [WSTRING]
  function :read_physical_memory, [OCTET], [INT64, UINT32]
  function :write_physical_memory, nil, [INT64, UINT32, [OCTET]]
  function :read_virtual_memory, [OCTET], [UINT32, INT64, UINT32]
  function :write_virtual_memory, nil, [UINT32, INT64, UINT32, [OCTET]]
  function :detect_os, WSTRING, []
  function :get_register, WSTRING, [UINT32, WSTRING]
  function :get_registers, nil, [UINT32, [:out, [WSTRING]], [:out, [WSTRING]]]
  function :set_register, nil, [UINT32, WSTRING, WSTRING]
  function :set_registers, nil, [UINT32, [WSTRING], [WSTRING]]
  function :dump_guest_stack, WSTRING, [UINT32]
  function :reset_stats, nil, [WSTRING]
  function :dump_stats, nil, [WSTRING]
  function :get_stats, nil, [WSTRING, BOOL, [:out, WSTRING]]
  setup
end

class USBController < AbstractInterface
  iid      "01e6f13a-0580-452f-a40f-74e32a5e4921"
  extends  :NSISupports
  property :enabled, BOOL
  property :enabled_e_h_c_i, BOOL
  property :proxy_available, BOOL, :readonly => true
  property :usb_standard, UINT16, :readonly => true
  property :device_filters, [:USBDeviceFilter], :readonly => true
  function :create_device_filter, :USBDeviceFilter, [WSTRING]
  function :insert_device_filter, nil, [UINT32, :USBDeviceFilter]
  function :remove_device_filter, :USBDeviceFilter, [UINT32]
  setup
end

class USBDevice < AbstractInterface
  iid      "f8967b0b-4483-400f-92b5-8b675d98a85b"
  extends  :NSISupports
  property :id, WSTRING, :readonly => true
  property :vendor_id, UINT16, :readonly => true
  property :product_id, UINT16, :readonly => true
  property :revision, UINT16, :readonly => true
  property :manufacturer, WSTRING, :readonly => true
  property :product, WSTRING, :readonly => true
  property :serial_number, WSTRING, :readonly => true
  property :address, WSTRING, :readonly => true
  property :port, UINT16, :readonly => true
  property :version, UINT16, :readonly => true
  property :port_version, UINT16, :readonly => true
  property :remote, BOOL, :readonly => true
  setup
end

class USBDeviceFilter < AbstractInterface
  iid      "d6831fb4-1a94-4c2c-96ef-8d0d6192066d"
  extends  :NSISupports
  property :name, WSTRING
  property :active, BOOL
  property :vendor_id, WSTRING
  property :product_id, WSTRING
  property :revision, WSTRING
  property :manufacturer, WSTRING
  property :product, WSTRING
  property :serial_number, WSTRING
  property :port, WSTRING
  property :remote, WSTRING
  property :masked_interfaces, UINT32
  setup
end

class HostUSBDevice < AbstractInterface
  iid      "173b4b44-d268-4334-a00d-b6521c9a740a"
  extends  :USBDevice
  property :state, :USBDeviceState, :readonly => true
  setup
end

class HostUSBDeviceFilter < AbstractInterface
  iid      "4cc70246-d74a-400f-8222-3900489c0374"
  extends  :USBDeviceFilter
  property :action, :USBDeviceFilterAction
  setup
end

class AudioAdapter < AbstractInterface
  iid      "921873db-5f3f-4b69-91f9-7be9e535a2cb"
  extends  :NSISupports
  property :enabled, BOOL
  property :audio_controller, :AudioControllerType
  property :audio_driver, :AudioDriverType
  setup
end

class VRDEServer < AbstractInterface
  iid      "d38de40a-c2c1-4e95-b5a4-167b05f5694c"
  extends  :NSISupports
  property :enabled, BOOL
  property :auth_type, :AuthType
  property :auth_timeout, UINT32
  property :allow_multi_connection, BOOL
  property :reuse_single_connection, BOOL
  property :vrde_ext_pack, WSTRING
  property :auth_library, WSTRING
  property :vrde_properties, [WSTRING], :readonly => true
  function :set_vrde_property, nil, [WSTRING, WSTRING]
  function :get_vrde_property, WSTRING, [WSTRING]
  setup
end

class SharedFolder < AbstractInterface
  iid      "8388da11-b559-4574-a5b7-2bd7acd5cef8"
  extends  :NSISupports
  property :name, WSTRING, :readonly => true
  property :host_path, WSTRING, :readonly => true
  property :accessible, BOOL, :readonly => true
  property :writable, BOOL, :readonly => true
  property :auto_mount, BOOL, :readonly => true
  property :last_access_error, WSTRING, :readonly => true
  setup
end

class InternalSessionControl < AbstractInterface
  iid      "3e83963a-1c3b-400d-8c5f-f2d077b0a597"
  extends  :NSISupports
  function :get_pid, UINT32, []
  function :get_remote_console, :Console, []
  function :assign_machine, nil, [:Machine, :LockType]
  function :assign_remote_machine, nil, [:Machine, :Console]
  function :update_machine_state, nil, [:MachineState]
  function :uninitialize, nil, []
  function :on_network_adapter_change, nil, [:NetworkAdapter, BOOL]
  function :on_serial_port_change, nil, [:SerialPort]
  function :on_parallel_port_change, nil, [:ParallelPort]
  function :on_storage_controller_change, nil, []
  function :on_medium_change, nil, [:MediumAttachment, BOOL]
  function :on_storage_device_change, nil, [:MediumAttachment, BOOL]
  function :on_clipboard_mode_change, nil, [:ClipboardMode]
  function :on_drag_and_drop_mode_change, nil, [:DragAndDropMode]
  function :on_cpu_change, nil, [UINT32, BOOL]
  function :on_cpu_execution_cap_change, nil, [UINT32]
  function :on_vrde_server_change, nil, [BOOL]
  function :on_usb_controller_change, nil, []
  function :on_shared_folder_change, nil, [BOOL]
  function :on_usb_device_attach, nil, [:USBDevice, :VirtualBoxErrorInfo, UINT32]
  function :on_usb_device_detach, nil, [WSTRING, :VirtualBoxErrorInfo]
  function :on_show_window, nil, [BOOL, [:out, BOOL], [:out, INT64]]
  function :on_bandwidth_group_change, nil, [:BandwidthGroup]
  function :access_guest_property, nil, [WSTRING, WSTRING, WSTRING, BOOL, [:out, WSTRING], [:out, INT64], [:out, WSTRING]]
  function :enumerate_guest_properties, nil, [WSTRING, [:out, [WSTRING]], [:out, [WSTRING]], [:out, [INT64]], [:out, [WSTRING]]]
  function :online_merge_medium, nil, [:MediumAttachment, UINT32, UINT32, :Medium, :Medium, BOOL, :Medium, [:Medium], :Progress]
  function :enable_vm_m_statistics, nil, [BOOL]
  setup
end

class Session < AbstractInterface
  iid      "12F4DCDB-12B2-4EC1-B7CD-DDD9F6C5BF4D"
  extends  :NSISupports
  property :state, :SessionState, :readonly => true
  property :type, :SessionType, :readonly => true
  property :machine, :Machine, :readonly => true
  property :console, :Console, :readonly => true
  function :unlock_machine, nil, []
  setup
end

class StorageController < AbstractInterface
  iid      "a1556333-09b6-46d9-bfb7-fc239b7fbe1e"
  extends  :NSISupports
  property :name, WSTRING, :readonly => true
  property :max_devices_per_port_count, UINT32, :readonly => true
  property :min_port_count, UINT32, :readonly => true
  property :max_port_count, UINT32, :readonly => true
  property :instance, UINT32
  property :port_count, UINT32
  property :bus, :StorageBus, :readonly => true
  property :controller_type, :StorageControllerType
  property :use_host_io_cache, BOOL
  property :bootable, BOOL, :readonly => true
  setup
end

class PerformanceMetric < AbstractInterface
  iid      "2a1a60ae-9345-4019-ad53-d34ba41cbfe9"
  extends  :NSISupports
  property :metric_name, WSTRING, :readonly => true
  property :object, :NSISupports, :readonly => true
  property :description, WSTRING, :readonly => true
  property :period, UINT32, :readonly => true
  property :count, UINT32, :readonly => true
  property :unit, WSTRING, :readonly => true
  property :minimum_value, INT32, :readonly => true
  property :maximum_value, INT32, :readonly => true
  setup
end

class PerformanceCollector < AbstractInterface
  iid      "e22e1acb-ac4a-43bb-a31c-17321659b0c6"
  extends  :NSISupports
  property :metric_names, [WSTRING], :readonly => true
  function :get_metrics, [:PerformanceMetric], [[WSTRING], [:NSISupports]]
  function :setup_metrics, [:PerformanceMetric], [[WSTRING], [:NSISupports], UINT32, UINT32]
  function :enable_metrics, [:PerformanceMetric], [[WSTRING], [:NSISupports]]
  function :disable_metrics, [:PerformanceMetric], [[WSTRING], [:NSISupports]]
  function :query_metrics_data, [INT32], [[WSTRING], [:NSISupports], [:out, [WSTRING]], [:out, [:NSISupports]], [:out, [WSTRING]], [:out, [UINT32]], [:out, [UINT32]], [:out, [UINT32]], [:out, [UINT32]]]
  setup
end

class NATEngine < AbstractInterface
  iid      "26451b99-3b2d-4dcb-8e4b-d63654218175"
  extends  :NSISupports
  property :network, WSTRING
  property :host_ip, WSTRING
  property :tftp_prefix, WSTRING
  property :tftp_boot_file, WSTRING
  property :tftp_next_server, WSTRING
  property :alias_mode, UINT32
  property :dns_pass_domain, BOOL
  property :dns_proxy, BOOL
  property :dns_use_host_resolver, BOOL
  property :redirects, [WSTRING], :readonly => true
  function :set_network_settings, nil, [UINT32, UINT32, UINT32, UINT32, UINT32]
  function :get_network_settings, nil, [[:out, UINT32], [:out, UINT32], [:out, UINT32], [:out, UINT32], [:out, UINT32]]
  function :add_redirect, nil, [WSTRING, :NATProtocol, WSTRING, UINT16, WSTRING, UINT16]
  function :remove_redirect, nil, [WSTRING]
  setup
end

class ExtPackPlugIn < AbstractInterface
  iid      "58000040-e718-4746-bbce-4b86d96da461"
  extends  :NSISupports
  property :name, WSTRING, :readonly => true
  property :description, WSTRING, :readonly => true
  property :frontend, WSTRING, :readonly => true
  property :module_path, WSTRING, :readonly => true
  setup
end

class ExtPackBase < AbstractInterface
  iid      "f79b75d8-2890-4f34-ffff-ffffa144e82c"
  extends  :NSISupports
  property :name, WSTRING, :readonly => true
  property :description, WSTRING, :readonly => true
  property :version, WSTRING, :readonly => true
  property :revision, UINT32, :readonly => true
  property :edition, WSTRING, :readonly => true
  property :vrde_module, WSTRING, :readonly => true
  property :plug_ins, [:ExtPackPlugIn], :readonly => true
  property :usable, BOOL, :readonly => true
  property :why_unusable, WSTRING, :readonly => true
  property :show_license, BOOL, :readonly => true
  property :license, WSTRING, :readonly => true
  function :query_license, WSTRING, [WSTRING, WSTRING, WSTRING]
  setup
end

class ExtPack < AbstractInterface
  iid      "431685da-3618-4ebc-b038-833ba829b4b2"
  extends  :ExtPackBase
  function :query_object, :NSISupports, [WSTRING]
  setup
end

class ExtPackFile < AbstractInterface
  iid      "b6b49f55-efcc-4f08-b486-56e8d8afb10b"
  extends  :ExtPackBase
  property :file_path, WSTRING, :readonly => true
  function :install, :Progress, [BOOL, WSTRING]
  setup
end

class ExtPackManager < AbstractInterface
  iid      "3295e6ce-b051-47b2-9514-2c588bfe7554"
  extends  :NSISupports
  property :installed_ext_packs, [:ExtPack], :readonly => true
  function :find, :ExtPack, [WSTRING]
  function :open_ext_pack_file, :ExtPackFile, [WSTRING]
  function :uninstall, :Progress, [WSTRING, BOOL, WSTRING]
  function :cleanup, nil, []
  function :query_all_plug_ins_for_frontend, [WSTRING], [WSTRING]
  function :is_ext_pack_usable, BOOL, [WSTRING]
  setup
end

class BandwidthGroup < AbstractInterface
  iid      "badea2d7-0261-4146-89f0-6a57cc34833d"
  extends  :NSISupports
  property :name, WSTRING, :readonly => true
  property :type, :BandwidthGroupType, :readonly => true
  property :reference, UINT32, :readonly => true
  property :max_bytes_per_sec, INT64
  setup
end

class BandwidthControl < AbstractInterface
  iid      "e2eb3930-d2f4-4f87-be17-0707e30f019f"
  extends  :NSISupports
  property :num_groups, UINT32, :readonly => true
  function :create_bandwidth_group, nil, [WSTRING, :BandwidthGroupType, INT64]
  function :delete_bandwidth_group, nil, [WSTRING]
  function :get_bandwidth_group, :BandwidthGroup, [WSTRING]
  function :get_all_bandwidth_groups, [:BandwidthGroup], []
  setup
end

class VirtualBoxClient < AbstractInterface
  iid      "5fe0bd48-1181-40d1-991f-3b02f269a823"
  extends  :NSISupports
  property :virtual_box, :VirtualBox, :readonly => true
  property :session, :Session, :readonly => true
  property :event_source, :EventSource, :readonly => true
  setup
end

class EventSource < AbstractInterface
  iid      "9b6e1aee-35f3-4f4d-b5bb-ed0ecefd8538"
  extends  :NSISupports
  function :create_listener, :EventListener, []
  function :create_aggregator, :EventSource, [[:EventSource]]
  function :register_listener, nil, [:EventListener, [:VBoxEventType], BOOL]
  function :unregister_listener, nil, [:EventListener]
  function :fire_event, BOOL, [:Event, INT32]
  function :get_event, :Event, [:EventListener, INT32]
  function :event_processed, nil, [:EventListener, :Event]
  setup
end

class EventListener < AbstractInterface
  iid      "67099191-32e7-4f6c-85ee-422304c71b90"
  extends  :NSISupports
  function :handle_event, nil, [:Event]
  setup
end

class Event < AbstractInterface
  iid      "0ca2adba-8f30-401b-a8cd-fe31dbe839c0"
  extends  :NSISupports
  property :type, :VBoxEventType, :readonly => true
  property :source, :EventSource, :readonly => true
  property :waitable, BOOL, :readonly => true
  function :set_processed, nil, []
  function :wait_processed, BOOL, [INT32]
  setup
end

class ReusableEvent < AbstractInterface
  iid      "69bfb134-80f6-4266-8e20-16371f68fa25"
  extends  :Event
  property :generation, UINT32, :readonly => true
  function :reuse, nil, []
  setup
end

class MachineEvent < AbstractInterface
  iid      "92ed7b1a-0d96-40ed-ae46-a564d484325e"
  extends  :Event
  property :machine_id, WSTRING, :readonly => true
  setup
end

class MachineStateChangedEvent < AbstractInterface
  iid      "5748F794-48DF-438D-85EB-98FFD70D18C9"
  extends  :MachineEvent
  property :state, :MachineState, :readonly => true
  setup
end

class MachineDataChangedEvent < AbstractInterface
  iid      "abe94809-2e88-4436-83d7-50f3e64d0503"
  extends  :MachineEvent
  property :temporary, BOOL, :readonly => true
  setup
end

class MediumRegisteredEvent < AbstractInterface
  iid      "53fac49a-b7f1-4a5a-a4ef-a11dd9c2a458"
  extends  :Event
  property :medium_id, WSTRING, :readonly => true
  property :medium_type, :DeviceType, :readonly => true
  property :registered, BOOL, :readonly => true
  setup
end

class MachineRegisteredEvent < AbstractInterface
  iid      "c354a762-3ff2-4f2e-8f09-07382ee25088"
  extends  :MachineEvent
  property :registered, BOOL, :readonly => true
  setup
end

class SessionStateChangedEvent < AbstractInterface
  iid      "714a3eef-799a-4489-86cd-fe8e45b2ff8e"
  extends  :MachineEvent
  property :state, :SessionState, :readonly => true
  setup
end

class GuestPropertyChangedEvent < AbstractInterface
  iid      "3f63597a-26f1-4edb-8dd2-6bddd0912368"
  extends  :MachineEvent
  property :name, WSTRING, :readonly => true
  property :value, WSTRING, :readonly => true
  property :flags, WSTRING, :readonly => true
  setup
end

class SnapshotEvent < AbstractInterface
  iid      "21637b0e-34b8-42d3-acfb-7e96daf77c22"
  extends  :MachineEvent
  property :snapshot_id, WSTRING, :readonly => true
  setup
end

class SnapshotTakenEvent < AbstractInterface
  iid      "d27c0b3d-6038-422c-b45e-6d4a0503d9f1"
  extends  :SnapshotEvent
  setup
end

class SnapshotDeletedEvent < AbstractInterface
  iid      "c48f3401-4a9e-43f4-b7a7-54bd285e22f4"
  extends  :SnapshotEvent
  setup
end

class SnapshotChangedEvent < AbstractInterface
  iid      "07541941-8079-447a-a33e-47a69c7980db"
  extends  :SnapshotEvent
  setup
end

class MousePointerShapeChangedEvent < AbstractInterface
  iid      "a6dcf6e8-416b-4181-8c4a-45ec95177aef"
  extends  :Event
  property :visible, BOOL, :readonly => true
  property :alpha, BOOL, :readonly => true
  property :xhot, UINT32, :readonly => true
  property :yhot, UINT32, :readonly => true
  property :width, UINT32, :readonly => true
  property :height, UINT32, :readonly => true
  property :shape, [OCTET], :readonly => true
  setup
end

class MouseCapabilityChangedEvent < AbstractInterface
  iid      "d633ad48-820c-4207-b46c-6bd3596640d5"
  extends  :Event
  property :supports_absolute, BOOL, :readonly => true
  property :supports_relative, BOOL, :readonly => true
  property :needs_host_cursor, BOOL, :readonly => true
  setup
end

class KeyboardLedsChangedEvent < AbstractInterface
  iid      "6DDEF35E-4737-457B-99FC-BC52C851A44F"
  extends  :Event
  property :num_lock, BOOL, :readonly => true
  property :caps_lock, BOOL, :readonly => true
  property :scroll_lock, BOOL, :readonly => true
  setup
end

class StateChangedEvent < AbstractInterface
  iid      "4376693C-CF37-453B-9289-3B0F521CAF27"
  extends  :Event
  property :state, :MachineState, :readonly => true
  setup
end

class AdditionsStateChangedEvent < AbstractInterface
  iid      "D70F7915-DA7C-44C8-A7AC-9F173490446A"
  extends  :Event
  setup
end

class NetworkAdapterChangedEvent < AbstractInterface
  iid      "08889892-1EC6-4883-801D-77F56CFD0103"
  extends  :Event
  property :network_adapter, :NetworkAdapter, :readonly => true
  setup
end

class SerialPortChangedEvent < AbstractInterface
  iid      "3BA329DC-659C-488B-835C-4ECA7AE71C6C"
  extends  :Event
  property :serial_port, :SerialPort, :readonly => true
  setup
end

class ParallelPortChangedEvent < AbstractInterface
  iid      "813C99FC-9849-4F47-813E-24A75DC85615"
  extends  :Event
  property :parallel_port, :ParallelPort, :readonly => true
  setup
end

class StorageControllerChangedEvent < AbstractInterface
  iid      "715212BF-DA59-426E-8230-3831FAA52C56"
  extends  :Event
  setup
end

class MediumChangedEvent < AbstractInterface
  iid      "0FE2DA40-5637-472A-9736-72019EABD7DE"
  extends  :Event
  property :medium_attachment, :MediumAttachment, :readonly => true
  setup
end

class ClipboardModeChangedEvent < AbstractInterface
  iid      "cac21692-7997-4595-a731-3a509db604e5"
  extends  :Event
  property :clipboard_mode, :ClipboardMode, :readonly => true
  setup
end

class DragAndDropModeChangedEvent < AbstractInterface
  iid      "e90b8850-ac8e-4dff-8059-4100ae2c3c3d"
  extends  :Event
  property :drag_and_drop_mode, :DragAndDropMode, :readonly => true
  setup
end

class CPUChangedEvent < AbstractInterface
  iid      "4da2dec7-71b2-4817-9a64-4ed12c17388e"
  extends  :Event
  property :cpu, UINT32, :readonly => true
  property :add, BOOL, :readonly => true
  setup
end

class CPUExecutionCapChangedEvent < AbstractInterface
  iid      "dfa7e4f5-b4a4-44ce-85a8-127ac5eb59dc"
  extends  :Event
  property :execution_cap, UINT32, :readonly => true
  setup
end

class GuestKeyboardEvent < AbstractInterface
  iid      "88394258-7006-40d4-b339-472ee3801844"
  extends  :Event
  property :scancodes, [INT32], :readonly => true
  setup
end

class GuestMouseEvent < AbstractInterface
  iid      "1f85d35c-c524-40ff-8e98-307000df0992"
  extends  :ReusableEvent
  property :absolute, BOOL, :readonly => true
  property :x, INT32, :readonly => true
  property :y, INT32, :readonly => true
  property :z, INT32, :readonly => true
  property :w, INT32, :readonly => true
  property :buttons, INT32, :readonly => true
  setup
end

class VRDEServerChangedEvent < AbstractInterface
  iid      "a06fd66a-3188-4c8c-8756-1395e8cb691c"
  extends  :Event
  setup
end

class VRDEServerInfoChangedEvent < AbstractInterface
  iid      "dd6a1080-e1b7-4339-a549-f0878115596e"
  extends  :Event
  setup
end

class USBControllerChangedEvent < AbstractInterface
  iid      "93BADC0C-61D9-4940-A084-E6BB29AF3D83"
  extends  :Event
  setup
end

class USBDeviceStateChangedEvent < AbstractInterface
  iid      "806da61b-6679-422a-b629-51b06b0c6d93"
  extends  :Event
  property :device, :USBDevice, :readonly => true
  property :attached, BOOL, :readonly => true
  property :error, :VirtualBoxErrorInfo, :readonly => true
  setup
end

class SharedFolderChangedEvent < AbstractInterface
  iid      "B66349B5-3534-4239-B2DE-8E1535D94C0B"
  extends  :Event
  property :scope, :Scope, :readonly => true
  setup
end

class RuntimeErrorEvent < AbstractInterface
  iid      "883DD18B-0721-4CDE-867C-1A82ABAF914C"
  extends  :Event
  property :fatal, BOOL, :readonly => true
  property :id, WSTRING, :readonly => true
  property :message, WSTRING, :readonly => true
  setup
end

class EventSourceChangedEvent < AbstractInterface
  iid      "e7932cb8-f6d4-4ab6-9cbf-558eb8959a6a"
  extends  :Event
  property :listener, :EventListener, :readonly => true
  property :add, BOOL, :readonly => true
  setup
end

class ExtraDataChangedEvent < AbstractInterface
  iid      "024F00CE-6E0B-492A-A8D0-968472A94DC7"
  extends  :Event
  property :machine_id, WSTRING, :readonly => true
  property :key, WSTRING, :readonly => true
  property :value, WSTRING, :readonly => true
  setup
end

class VetoEvent < AbstractInterface
  iid      "9a1a4130-69fe-472f-ac10-c6fa25d75007"
  extends  :Event
  function :add_veto, nil, [WSTRING]
  function :is_vetoed, BOOL, []
  function :get_vetos, [WSTRING], []
  setup
end

class ExtraDataCanChangeEvent < AbstractInterface
  iid      "245d88bd-800a-40f8-87a6-170d02249a55"
  extends  :VetoEvent
  property :machine_id, WSTRING, :readonly => true
  property :key, WSTRING, :readonly => true
  property :value, WSTRING, :readonly => true
  setup
end

class CanShowWindowEvent < AbstractInterface
  iid      "adf292b0-92c9-4a77-9d35-e058b39fe0b9"
  extends  :VetoEvent
  setup
end

class ShowWindowEvent < AbstractInterface
  iid      "B0A0904D-2F05-4D28-855F-488F96BAD2B2"
  extends  :Event
  property :win_id, INT64
  setup
end

class NATRedirectEvent < AbstractInterface
  iid      "24eef068-c380-4510-bc7c-19314a7352f1"
  extends  :MachineEvent
  property :slot, UINT32, :readonly => true
  property :remove, BOOL, :readonly => true
  property :name, WSTRING, :readonly => true
  property :proto, :NATProtocol, :readonly => true
  property :host_ip, WSTRING, :readonly => true
  property :host_port, INT32, :readonly => true
  property :guest_ip, WSTRING, :readonly => true
  property :guest_port, INT32, :readonly => true
  setup
end

class HostPCIDevicePlugEvent < AbstractInterface
  iid      "a0bad6df-d612-47d3-89d4-db3992533948"
  extends  :MachineEvent
  property :plugged, BOOL, :readonly => true
  property :success, BOOL, :readonly => true
  property :attachment, :PCIDeviceAttachment, :readonly => true
  property :message, WSTRING, :readonly => true
  setup
end

class VBoxSVCAvailabilityChangedEvent < AbstractInterface
  iid      "97c78fcd-d4fc-485f-8613-5af88bfcfcdc"
  extends  :Event
  property :available, BOOL, :readonly => true
  setup
end

class BandwidthGroupChangedEvent < AbstractInterface
  iid      "334df94a-7556-4cbc-8c04-043096b02d82"
  extends  :Event
  property :bandwidth_group, :BandwidthGroup, :readonly => true
  setup
end

class GuestMonitorChangedEvent < AbstractInterface
  iid      "0f7b8a22-c71f-4a36-8e5f-a77d01d76090"
  extends  :Event
  property :change_type, :GuestMonitorChangedEventType, :readonly => true
  property :screen_id, UINT32, :readonly => true
  property :origin_x, UINT32, :readonly => true
  property :origin_y, UINT32, :readonly => true
  property :width, UINT32, :readonly => true
  property :height, UINT32, :readonly => true
  setup
end

class StorageDeviceChangedEvent < AbstractInterface
  iid      "8a5c2dce-e341-49d4-afce-c95979f7d70c"
  extends  :Event
  property :storage_device, :MediumAttachment, :readonly => true
  property :removed, BOOL, :readonly => true
  setup
end

end
end
end
