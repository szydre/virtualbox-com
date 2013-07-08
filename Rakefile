# -*- ruby -*-
require "rbconfig"
require "rubygems"
require "bundler/setup"

Bundler::GemHelper.install_tasks

ROOT_DIR = File.dirname(__FILE__)
DATA_DIR = "#{ROOT_DIR}/data"
LIB_DIR  = "#{ROOT_DIR}/lib"
COM_DIR  = "#{LIB_DIR}/virtualbox/com"
EXT_DIR  = "#{ROOT_DIR}/ext"

task :build => [ :generate ]

task :generate do |t|
    api  = "4.2"
    xidl = "#{DATA_DIR}/VirtualBox-#{api}.xidl"
    file = "#{COM_DIR}/model/#{api}-generated.rb"
    ruby "scripts/xidl-conv.rb --xidl #{xidl} --file #{file}"

    file = "#{EXT_DIR}/virtualbox-com/#{api}/gen.h"
    ruby "scripts/to_c.rb --api #{api} --file #{file}"
end
