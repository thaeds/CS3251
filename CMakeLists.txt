cmake_minimum_required(VERSION 3.3)
project(dbapp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/common/client/client.cpp)
add_library(client ${SOURCE_FILES})

set(SOURCE_FILES src/common/database/database.cpp)
add_library(database ${SOURCE_FILES})

set(SOURCE_FILES src/common/io/io.cpp)
add_library(io ${SOURCE_FILES})

set(SOURCE_FILES src/common/network/network.cpp)
add_library(network ${SOURCE_FILES})

set(SOURCE_FILES src/common/server/server.cpp)
add_library(server ${SOURCE_FILES})

set(SOURCE_FILES src/common/tcp/tcp.cpp)
add_library(tcp ${SOURCE_FILES})

set(SOURCE_FILES src/common/udp/udp.cpp)
add_library(udp ${SOURCE_FILES})

set(SOURCE_FILES src/dbclientTCP.cpp)
add_executable(dbclientTCP ${SOURCE_FILES})
target_link_libraries(dbclientTCP io)

set(SOURCE_FILES src/dbserverTCP.cpp)
add_executable(dbengineTCP ${SOURCE_FILES})
target_link_libraries(dbengineTCP database)

set(SOURCE_FILES src/dbclientUDP.cpp)
add_executable(dbclientUDP ${SOURCE_FILES})

set(SOURCE_FILES src/dbserverUDP.cpp)
add_executable(dbengineUDP ${SOURCE_FILES})
target_link_libraries(dbengineUDP database)
