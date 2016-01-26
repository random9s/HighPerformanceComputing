#include<iostream>
#include<fstream>
#include<../stl/hash_map.h>
#include "CSVReader.h"

void CSVReader::fOpen(){}

void CSVReader::fClose(){}

hash_map<const char*, int> parse(){
    hash_map<const char*, int> data;

    data["blah"] = 23.210;

    return data;
}
