require 'mkmf'

$CFLAGS += " -DRUBY_VBOX_INIT=Init_vbox_4_2"
create_makefile('virtualbox/com/xpcomc-native/vbox_4_2')
