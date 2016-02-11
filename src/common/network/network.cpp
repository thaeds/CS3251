//
// Created by thaeds on 2/11/16.
//

#include <stdio.h>
#include <string.h>
#include "network.h"

using namespace std;

Socket::Socket(unsigned short port, const string& ip) {
    fd = socket(AF_UNIX, SOCK_DGRAM, 0);
    if (!fd)
    {
        perror("Cannot create socket");
    }
    memset((char *) &address, 0, sizeof(address));
    address.sin_family = AF_UNIX;
    address.sin_port = htons(port);
    address.sin_addr.s_addr = htonl(INADDR_ANY);

    if (bind(fd, (struct sockaddr *) &address, sizeof(address)) < 0)
    {
        perror("Cannot bind socket to port");
    }

}

void Socket::Send(const string& msg, const string& remoteIP)
{
    struct addr *hp;
    hp = getaddrinfo(remoteIP.c_str());
    if(sendto(fd, msg.c_str(), msg.length(), 0, (const struct sockaddr*) &remoteAddress, sizeof(remoteAddress)) < 0)
    {
        perror("Unable to send message to remote");
    }
    freeaddrinfo(hp);
}
