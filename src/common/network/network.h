//
// Created by thaeds on 2/11/16.
//

#pragma once

#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <string>


// The Socket class abstracts away some of the boiler plate code for dealing with sockets
class Socket {
    int fd;
    struct sockaddr_in address;

    // The constructor creates a socket, sets the fd and address, and binds to a port if given
    Socket(unsigned short port, const std::string& ip = std::string(""));
    void Send(const std::string& msg, const std::string& remoteIP);
};
