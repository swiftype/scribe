#!/bin/sh
thrift -o src --gen cpp:pure_enums if/fb303.thrift
thrift -o src --gen cpp:pure_enums if/bucketupdater.thrift
thrift -o src --gen cpp:pure_enums if/scribe.thrift
cmake .
