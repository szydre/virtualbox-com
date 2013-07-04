require 'mkmf'

$CFLAGS << '-Wextra -Wall '

create_makefile('virtualbox-com/com-native')
