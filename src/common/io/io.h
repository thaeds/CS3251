//
// Created by thaeds on 2/11/16.
//

#pragma once

#include <sys/types.h>
#include <sys/socket.h>
#include <string>

std::string ParseIPAddress(char* str);
unsigned short inParsePort(char* str);
std::string ParseString(char* str);
