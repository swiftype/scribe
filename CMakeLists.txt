cmake_minimum_required (VERSION 2.6)
project (scribe) 

# Check Thrift version
find_program(THRIFT_BIN thrift)
exec_program(${THRIFT_BIN} ARGS -version OUTPUT_VARIABLE THRIFT_VERSION)
string(REGEX REPLACE "[^0-9]*([0-9\\.]+)$" "\\1" tversion "${THRIFT_VERSION}")

# Compare version to 0.7+ requirement
string(REGEX REPLACE "^([0-9]+)\\.[0-9]+\\.[0-9]+" "\\1" tv_major "${tversion}")
string(REGEX REPLACE "^[0-9]+\\.([0-9]+)\\.[0-9]+" "\\1" tv_minor "${tversion}")
message(STATUS "You appear to have thrift version: ${tv_major}.${tv_minor}.x (parsed from string '${tversion}')")
if ((tv_major STREQUAL 0) AND (tv_minor STRLESS 7))
message(FATAL_ERROR "Thrift 0.7+ required")
endif((tv_major STREQUAL 0) AND (tv_minor STRLESS 7))

# Generate thrift interfaces
exec_program(${THRIFT_BIN} ARGS -o src --gen cpp:pure_enums if/fb303.thrift)
exec_program(${THRIFT_BIN} ARGS -o src --gen cpp:pure_enums if/bucketupdater.thrift)
exec_program(${THRIFT_BIN} ARGS -o src --gen cpp:pure_enums if/scribe.thrift)


set(CMAKE_CXX_FLAGS "-O2 -Wall -Wno-long-long -Wno-variadic-macros -Wno-return-type -Wno-unused-variable -Wno-reorder -DBOOST_FILESYSTEM_VERSION=2")

add_subdirectory (src/gen-cpp) 

add_subdirectory (src)
