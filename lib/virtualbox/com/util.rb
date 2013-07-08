module VirtualBox
module COM

module Util
    def self.platform
        case RbConfig::CONFIG["host_os"].downcase
        when /darwin/             then :mac
        when /mswin|mingw|cygwin/ then :windows
        when /linux/              then :linux
        when /solaris/            then :solaris
        when /freebsd/            then :freebsd
        else                           :unknown
        end
    end
    def self.jruby?
        RbConfig::CONFIG["ruby_install_name"] == "jruby"
    end


    # An "almost complete" camel-caser. Camel cases a string with a few
    # exceptions. For example: `get_foo` becomes `GetFoo`, but `get_os_type`
    # becomes `GetOSType` since `os` is a special case.
    #
    # @param [String] string The string to camel case
    # @return [String]
    def self.camelize(string)
        string.to_s.split(/_/).map {|part|
            CAMELCASE_SPECIALS[part] || part.capitalize }.join
    end

    def self.uncamelize(name)
        CAMELCASE_SPECIALS.each{|k,v|
            name = name.gsub(v, k.capitalize) }
        name.gsub(/([A-Z])/, "_\\0").downcase.gsub(/^_/, '')
    end

    CAMELCASE_SPECIALS = { # Order is important 
        "accelerate_2d" => "accelerate2D",
        "accelerate_3d" => "accelerate3D",
        "fourcc_rgb"    => "FOURCC_RGB",
        "screenshot"    => "ScreenShot",
        "am79c970a"     => "Am79C970A",
        "am79c973"      => "Am79C973",
        "i82540em"      => "I82540EM",
        "i82543gc"      => "I82543GC",
        "i82545em"      => "I82545EM",
        "efidual"       => "EFIDUAL",
        "split2g"       => "Split2G",
        "cpuid"         => "CPUID",
        "cdrom"         => "CDROM",
        "efi32"         => "EFI32",
        "efi64"         => "EFI64",
        "piix3"         => "PIIX3",
        "piix4"         => "PIIX4",
        "winmm"         => "WinMM",
        "ac97"          => "AC97",
        "acpi"          => "ACPI",
        "alsa"          => "ALSA",
        "apic"          => "APIC",
        "bios"          => "BIOS",
        "csam"          => "CSAM",
        "dhcp"          => "DHCP",
        "ehci"		=> "EHCI",
        "fifo"          => "FIFO",
        "hpet"          => "HPET",
        "ich6"          => "ICH6",
        "ich9"          => "ICH9",
        "ipv6"          => "IPV6",
        "macs"          => "MACs",
        "mmpm"          => "MMPM",
        "patm"          => "PATM",
        "sata"          => "SATA",
        "sb16"          => "SB16",
        "scsi"          => "SCSI",
        "slip"          => "SLIP",
        "tftp"          => "TFTP",
        "uuid"          => "UUID",
        "vbox"          => "VBox",
        "vhwa"          => "VHWA",
        "vpid"          => "VPID",
        "vram"          => "VRAM",
        "vrde"          => "VRDE",
        "vrdp"          => "VRDP",
        "acl"           => "ACL",
        "api"           => "API",
        "cad"           => "CAD",
        "cpu"           => "CPU",
        "dns"           => "DNS",
        "dvd"           => "DVD",
        "efi"           => "EFI",
        "esx"           => "ESX",
        "gid"           => "GID",
        "hda"           => "HDA",
        "hdd"           => "HDD",
        "hid"           => "HID",
        "ide"           => "IDE",
        "irq"           => "IRQ",
        "iso"           => "ISO",
        "mac"           => "MAC",
        "nat"           => "NAT",
        "oss"           => "OSS",
        "pae"           => "PAE",
        "pci"           => "PCI",
        "pid"           => "PID",
        "png"           => "PNG",
        "ppp"           => "PPP",
        "ps2"           => "PS2",
        "pxe"           => "PXE",
        "ram"           => "RAM",
        "rtc"           => "RTC",
        "sas"           => "SAS",
        "svc"           => "SVC",
        "tcp"           => "TCP",
        "udp"           => "UDP",
        "uid"           => "UID",
        "usb"           => "USB",
        "utc"           => "UTC",
        "vdi"           => "VDI",
        "vfs"           => "VFS",
        "2d"            => "2D",
        "3d"            => "3D",
        "gh"            => "GH",
        "hg"            => "HG",
        "hd"            => "HD",
        "hw"            => "HW",
        "io"            => "IO",
        "ip"            => "IP",
        "os"            => "OS",
        "vm"            => "VM",
        "vd"            => "VD",
    }
end

end
end
