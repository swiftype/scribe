SET(headers
	scribe_server.h
	conf.h
	conn_pool.h
	dynamic_bucket_updater.h
	env_default.h
	file.h
	network_dynamic_config.h
	store_queue.h
	store.h
)

SET(sources
    scribe_server.cpp
    conf.cpp
    conn_pool.cpp
    dynamic_bucket_updater.cpp
    env_default.cpp
    file.cpp
    network_dynamic_config.cpp
    store_queue.cpp
    store.cpp
)

# FindBoost
SET(Boost_USE_STATIC_LIBS OFF) # Or we get errors with -fPIC
SET(Boost_USE_MULTITHREADED ON)
SET(Boost_USE_STATIC_RUNTIME OFF)

FIND_PACKAGE(Boost 1.41 COMPONENTS system filesystem REQUIRED)
INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIR})

# LibEvent
FIND_PATH(EVENT_INCLUDE_DIR event.h)
INCLUDE_DIRECTORIES(${EVENT_INCLUDE_DIR})

# Thrift
FIND_PATH(THRIFT_INCLUDE_DIR Thrift.h PATH_SUFFIXES thrift)
INCLUDE_DIRECTORIES(${THRIFT_INCLUDE_DIR}) 

# Scribe interfaces
INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR})

add_executable(scribe ${headers} ${sources})
target_link_libraries(scribe 
    ${Boost_LIBRARIES}
    scribe_if 
    event 
	thrift 
	thriftnb 
)