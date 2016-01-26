#include<iostream>
#include<fstream>
#include "CSVReader.h"

using namespace std;

static hash_map<const char*, vector<float>, hash<const char*>, eqstr> CSVReader::parse(string csvFileName){
	hash_map<const char*, vector<float>, hash<const char*>, eqstr> data;
	vector<float> V;
	V.push_back(32.2363);
	data["hello"] = V;
	return data;
}
