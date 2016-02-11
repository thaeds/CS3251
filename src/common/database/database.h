//
// Created by thaeds on 2/11/16.
//

#pragma once

#include <unordered_map>
#include <string>

struct Record
{
    std::string id = "";
    std::string first_name = "";
    std::string last_name = "";
    unsigned short quality_points = 0;
    unsigned short gpa_hours = 0;
    float gpa = 0.0;

    Record(std::string id,
           std::string first_name,
           std::string last_name,
           unsigned short quality_points,
           unsigned short gpa_hours,
           float gpa)
            : id(id)
            , first_name(first_name)
            , last_name(last_name)
            , quality_points(quality_points)
            , gpa_hours(gpa_hours)
            , gpa(gpa)
    {

    }
};

class Database {
    std::unordered_map<std::string, Record> records;

    Database();
};

