# VirtualBox-Com Ruby Gem

The `virtualbox-COM` ruby gem is a library which focus on the
direct mapping of the VirtualBox API and allows anyone to control
VirtualBox from ruby code! Create, destroy, start, stop, suspend, and
resume virtual machines.  Also list virtual machines, list hard
drives, network devices, etc.

This is a simplified version (focusing on the VirtualBox API) of the 
unmaintained [virtualbox](https://github.com/mitchellh/virtualbox) gem
by [Mitchell Hashimoto](https://github.com/mitchellh) from which
part of this code belongs.

If you need a high level API take a look at
[ruby-virtualbox](https://github.com/sdalu/ruby-virtualbox) which 
rely on this gem but provide a more rubyish interface.


## Installation and Requirements

First you need to install [VirtualBox](http://www.virtualbox.org/)
which is available for Windows, Linux, and OS X. After installation,
install the gem:

    sudo gem install virtualbox-com

The gem uses the native COM interface which VirtualBox provides to
communicate with it. The gem uses Ruby-FFI to talk to the VirtualBox 
dynamic library, and all the mapping as been generated from 
the `VirtualBox.xidl`.

No configuration should be necessary to use this gem, but if
the dynamic library is not found, you can set the environment
variable `VBOX_APP_HOME` to the full library path.


## API Documentation

You can refer to the [VirtualBox SDK](https://www.virtualbox.org/sdkref/annotated.html)
knowning that in this gem
* classes are not prefixed with the `I` (`IMachine` => `Machine`)
* methods have been uncamelized (`canShowConsoleWindow` => `can_show_console_window`)
* when calling a method you only specify the in parameters, all the out (including the default return)
  are being returned in an array if there is more than one, directly otherwise


## Basic Usage
    require 'virtualbox-com'
    
    lib = VirtualBox::COM
    
    lib.virtualbox.machines.each {|vm|
      puts "%s: %s" % [ vm.bame, vm.state ]
    }
    
You can find more examples in the [`examples`](examples) directory


## Reporting Bugs or Feature Requests

Please use the [issue tracker](https://github.com/sdalu/virtualbox-com/issues).


## TODO

Improve documentation, re-implement a test-suite


## Contributing

If you'd like to contribute to VirtualBox, the first step to developing is to
clone this repo, get [bundler](http://github.com/carlhuda/bundler) if you
don't have it already, and do the following:

    bundle install --relock
    rake

This will run the test suite, which should come back all green! Then
you're good to go!


## Special Thanks

These folks went above and beyond with contributions to the virtualbox gem, and
for that, I have to say "thanks!"

* [Mitchell Hashimoto](https://github.com/mitchellh), 
  [Kieran Pilkington](https://github.com/KieranP),
  [Aleksey Palazhchenko](https://github.com/AlekSi)
