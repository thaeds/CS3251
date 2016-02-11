// Name: Alex Gurney
// Email: alexander.gurney3@gatech.edu
// Class: CS 3251, Computer Networking
// Date: 2/11/2016
// Assignment: Programming Assignment 1, Socket Basics

// Files Submitted              Description
// README.txt                   Name and description of project, project files, build information, and known bugs
// CMakeLists.txt               Description of build process for cmake
// dbclientUDP.h                Header for dbclientUDP
// dbclientUDP.cpp              Implementation of dbclientUDP
// dbserverTCP.h                Header for dbserverTCP
// dbserverTCP.cpp              Implementation of dbengineTCP
// common/network/network.h     Header of functionality relevant to networking in general
// common/network/network.cpp   Implementation of functionality relevant to networking in general
// common/client/client.h       Header of functionality relevant to clients
// common/client/client.cpp     Implementation of functionality relevant to clients
// common/server/server.h       Header of functionality relevant to servers
// common/server/server.cpp     Implementation of functionality relevant to servers
// common/tcp/tcp.h             Header of functionality relevant to tcps
// common/tcp/tcp.cpp           Implementation of functionality relevant to tcps
// common/udp/udp.h             Header of functionality relevant to udps
// common/udp/udp.cpp           Implementation of functionality relevant to udps
// common/io/io.h               Header of command line io functions
// common/io/io.cpp             Implementation of command line io functions


// To compile
// Using gcc on Ubuntu
// From the command line in the project root directory
// mkdir build
// cd build
// cmake ..
// make
// To run
// From the command line in the project root directory
// cd build
// ./dbengineTCP <ip>
// ./dbclientTCP <ip>:<port> <student id> <queryfieldname1> <queryfieldname2> ... <queryfieldnamen>
// ./dbengineUDP <ip>
// ./dbclientUDP <ip>:<port> <student id> <queryfieldname1> <queryfieldname2> ... <queryfieldnamen>


// Known Bugs
