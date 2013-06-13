# VirtualBox-Com Ruby Gem

This is a simplified version of the unmaintained virtualbox gem
by [Mitchell Hashimoto](https://github.com/mitchellh)

The VirtualBox::COM ruby gem is a library which allows anyone to control
VirtualBox from ruby code! Create, destroy, start, stop, suspend, and
resume virtual machines.  Also list virtual machines, list hard
drives, network devices, etc.

## Installation and Requirements

First you need to install [VirtualBox](http://www.virtualbox.org/)
which is available for Windows, Linux, and OS X. After installation,
install the gem:

    sudo gem install virtualbox-com

The gem uses the native COM interface with VirtualBox provides to
communicate with VirtualBox. The gem uses Ruby-FFI to talk to a
dynamic library. No configuration should be necessary.
If the dynamic library is not found, you can set the environment
variable `VBOX_APP_HOME` to the full library path.

## Basic Usage

    require 'virtualbox-com'
    
    lib = VirtualBox::COM
    
    puts lib.virtualbox.machines[0].name
    puts lib.virtualbox.find_machine('Windows').groups

## Known Issues or Uncompleted Features

All the classes are generated from the VirtualBox.xidl

## Reporting Bugs or Feature Requests

Please use the [issue tracker](https://github.com/sdalu/virtualbox-com/issues).

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

* [Mitchell Hashimoto](https://github.com/mitchellh)
* [Kieran Pilkington](https://github.com/KieranP)
* [Aleksey Palazhchenko](https://github.com/AlekSi)
