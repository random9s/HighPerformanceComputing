#ifndef CSVREADER_H
#define CSVREADER_H
#include<../stl/hash_map.h>

class CSVReader{
    public:
        void fOpen();
        void fClose();
        hash_map<const char*, int> parse();
};

#endif
