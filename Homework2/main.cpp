#include "CSVReader.hpp"
#include<unordered_map>
#include<algorithm>
#include<string>
#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
    if(argc != 5){
        cout << "Expected usage: ./hw2 <query> <filename> <num of results> <num of processes>" << endl;
    }

    std::string search = argv[1];
    std::string filename = argv[2];
    int returnNumber = std::stoi(argv[3]);
    int processCount = std::stoi(argv[4]);

    unordered_map<string, vector<float> > data =  CSVReader::loadMap(filename);

    //DO EVERYTHING ELSE
    
    return 0;
}
