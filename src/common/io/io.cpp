//
// Created by thaeds on 2/11/16.
//

#include <sstream>
#include "io.h"

std::string ParseIPAddress(char *str)
{
    std::stringbuf ip;
    /// @todo add error checking for ip address
    while(str && *str != ' ' && *str != ':')
    {
        ip.sputc(*str++);
    }

    return ip.str();
};
