#include "CSVReader.hpp"
#include<algorithm>
#include<sstream>
#include<chrono>
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<unordered_map>

using namespace std;

CSVReader::CSVReader()
{
    ;
}

CSVReader::~CSVReader()
{
    ;
}

unordered_map<string, vector<float> > CSVReader::loadMap(string filename)
{
    unordered_map <string, vector<float> > data;  
    vector<float> V;
    ifstream infile(filename);
    std::chrono::time_point<std::chrono::system_clock> start, end;
    string line;
    int lineCount = 0;
    int elemCount = 0;
    vector<string> keyNames;
  
    cout << "Parsing..." << endl;
    start = std::chrono::system_clock::now(); 
  
    while(getline(infile, line))
    {
        istringstream iss(line);
      
        string filename;
        getline(iss, filename, ',');

        keyNames.push_back(filename);

        string currentWord;
        vector<float> currentVector;
        while (getline(iss, currentWord, ',')) {
            float currentValue = ::atof(currentWord.c_str());
            currentVector.push_back(currentValue); 
            elemCount++; 
        }
   
        data[filename] = currentVector;
        lineCount++;
    }

    end = std::chrono::system_clock::now(); 
    std::chrono::duration<double> parse_duration = end-start;

    cout << "\nStatistics" << endl;
    cout << "-----------" << endl; 
    cout << "Parse time: " << parse_duration.count() << endl;
    cout << "Parsed line count: " << lineCount << endl;
    cout << "Data entry count: " << elemCount << endl;

    return data;
}
