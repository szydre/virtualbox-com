require 'mkmf'

$CFLAGS += " -DVBOX_API_VERESION=4_2"
create_makefile('virtualbox/com/xpcomc-native/vbox_4_2')
