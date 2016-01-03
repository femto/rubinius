[![Gitter](https://badges.gitter.im/Join%20Chat.svg)](https://gitter.im/rubinius/rubinius?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge) [![Build Status](https://travis-ci.org/rubinius/rubinius.svg?branch=master)](https://travis-ci.org/rubinius/rubinius)

## The Rubinius Language Platform

Rubinius is a modern language platform that supports a number of programming languages.

Rubinius includes a bytecode virtual machine, generational garbage collector, and just-in-time (JIT) native machine code compiler. Rubinius provides concurrency support via native OS threads with no global interpreter lock.

Rubinius runs on Mac OS X and many Unix/Linux operating systems.  Microsoft Windows is not yet supported.


### The Ruby Programming Language

Many popular Ruby applications, like Rails, run on Rubinius, which aims to be
compatible with Ruby version 2.1.

Rubinius includes a Ruby parser, Ruby bytecode compiler, Ruby core library,
and C-API compatibility for native C extensions. The Ruby core library is
written almost entirely in Ruby. The Ruby bytecode compiler and other tools,
such as the debugger, are also written in Ruby.  Rubinius provides the
standard Ruby libraries, with the following exceptions:

* Continuation
* Ripper
* TracePoint
* Tracer

The following Ruby features are not supported on Rubinius:

* Refinements
* $SAFE levels


### License

Rubinius uses the MPL-2.0 license. See LICENSE for details. Contributions made
prior to January 3rd, 2016 are licensed under the old BSD 3-clause license. A
copy of this license can be found in the file "BSD_LICENSE".

### Installing Rubinius from Source

To install Rubinius, use the following steps:

1. Ensure that MRI 2.0+, rubygems, rake, git and LLVM are installed
1. git clone git://github.com/rubinius/rubinius.git
1. cd rubinius
1. bundle
1. ./configure --prefix=/path/to/install/dir
1. rake

When the install process finishes, follow the directions printed to the terminal to add the Rubinius executable (bin) directory to your PATH. For more information see the documentation for [Build Requirements](http://rubinius.com/doc/en/getting-started/requirements/) and [Building Rubinius](http://rubinius.com/doc/en/getting-started/building/).


### Using RubyGems

Rubinius comes with RubyGems built-in. To install a gem, run the following:

    $ rbx -S gem install <gem_name>


### Documentation

The Rubinius documentation is available at the [Rubinius website](http://rubinius.com).


### Issues & Support

Please [file tickets](http://github.com/rubinius/rubinius/issues) for bugs or problems.

For additional help, visit the [Rubinius Gitter chat room](https://gitter.im/rubinius/rubinius).


### Contributing

The Rubinius team welcomes contributions. For more information, read the
[CONTRIBUTING](https://github.com/rubinius/rubinius/blob/master/CONTRIBUTING.md) file and see the documentation [about contributing](http://rubinius.com/doc/en/contributing/).
