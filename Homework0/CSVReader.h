#ifndef CSVREADER_H
#define CSVREADER_H
#include<hash_map>
#include<vector>
#include<string>

using namespace std;
using namespace __gnu_cxx;

struct eqstr
{
  bool operator()(const char* s1, const char* s2) const
  {
    return strcmp(s1, s2) == 0;
  }
};

class CSVReader{
    public:
  	static hash_map<const char*, vector<float>, hash<const char*>, eqstr> parse(string); 
}; 

#endif
