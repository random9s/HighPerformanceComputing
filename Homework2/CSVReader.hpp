#ifndef CSVREADER_H
#define CSVREADER_H

#include<unordered_map>
#include<string>
#include<vector>

typedef std::unordered_map<std::string, std::vector<float> > readerMap;

class CSVReader{
public:
    CSVReader();
    ~CSVReader();
    static readerMap loadMap(std::string filename); 

}; // end of class

#endif
