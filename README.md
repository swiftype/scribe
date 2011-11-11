Introduction
------------

Scribe is a server for aggregating log data that's streamed in real
time from clients. It is designed to be scalable and reliable.

See the Scribe Wiki for documentation:
http://wiki.github.com/facebook/scribe

Keep up to date on Scribe development by joining the Scribe Discussion Group:
http://groups.google.com/group/scribe-server/

This fork of [facebook/scribe](https://github.com/facebook/scribe) uses [CMake](http://www.cmake.org/) instead of autoconf.


License (See LICENSE file for full license)
------------
Copyright 2007-2008 Facebook

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.


Hierarchy
------------

```
scribe/
  examples/
    Contains simple examples of using Scribe
  if/
    Contains Thrift interface for Scribe
  src/
    Contains Scribe source
  test/
    Contain php scripts for testing scribe
```

Requirements
------------

* [libevent] Event Notification library
* [boost] Boost C++ library (version 1.36 or later)
* [thrift] Thrift framework (version 0.5.0 or later)

These libraries are open source and may be freely obtained, but they are not
provided as a part of this distribution.


To build
------------

```
./bootstrap.sh 
make
```


Subsequent builds
------------

```
make
```

```rm CMakeCache.txt``` and run ```cmake .``` if you build environment changes.


Install
------------

as root:
```
make install
```


Run
------------

See the examples directory to learn how to use Scribe.
