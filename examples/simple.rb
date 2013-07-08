require 'bundler/setup'
require 'virtualbox-com'

# Shortcut
lib = VirtualBox::COM

puts lib.virtualbox.api_version

# Name of the first VM
puts lib.virtualbox.machines[0].name

# Groups of the VM named 'Windows'
puts lib.virtualbox.find_machine('Windows').groups

# Register a passive listener
begin 
    s = VirtualBox::COM.virtualbox.event_source
    l = s.create_listener
    # Listen on all events with a passive listener
    s.register_listener(l, [ :any ], false)
    while true do
        # Get event
        if e = s.get_event(l, 1000)
            case e.type
            when :on_guest_property_changed
                # If GuestProperyChanged cast the event to the
                # model having the most information
                n = e.cast(:GuestPropertyChangedEvent)
                puts "GuestProperty: #{n.machine_id} / #{n.name} / #{n.value}"
            else
                # Display event type
                puts "Event: #{e.type}"
            end

            # If event is waitable, acknowlege we have finished with it
            if e.waitable
                e.source.event_processed(l, e)
            end
        end
    end
rescue VirtualBox::COM::ObjectNotFoundException
    # Could just be because we weren't able to collect data fast
    # enough, so VirtualBox unregistered our listener
    retry 
end
