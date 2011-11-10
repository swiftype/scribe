cmake_minimum_required (VERSION 2.6)
project (scribe) 

set(CMAKE_CXX_FLAGS "-O2 -Wall -Wno-long-long -Wno-variadic-macros -Wno-return-type -Wno-unused-variable -Wno-reorder -DBOOST_FILESYSTEM_VERSION=2")

add_subdirectory (src/gen-cpp) 

add_subdirectory (src)
