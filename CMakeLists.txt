cmake_minimum_required(VERSION 3.3)
project(dbapp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/dbclientTCP.cpp)
add_executable(dbclientTCP ${SOURCE_FILES})

set(SOURCE_FILES src/dbserverTCP.cpp)
add_executable(dbengineTCP ${SOURCE_FILES})

set(SOURCE_FILES src/dbclientUDP.cpp)
add_executable(dbclientUDP ${SOURCE_FILES})

set(SOURCE_FILES src/dbserverUDP.cpp)
add_executable(dbengineUDP ${SOURCE_FILES})
