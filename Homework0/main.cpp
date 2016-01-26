#include<iostream>
#include<hash_map>
#include<string>
#include<vector>
#include<fstream>
#include<sstream>
#include<string.h>
 
using namespace std;
using namespace __gnu_cxx;

struct eqstr
{
  bool operator()(const char* s1, const char* s2) const
  {
    return strcmp(s1, s2) == 0;
  }
};

int main()
{
  hash_map<const char*, vector<float>, hash<const char*>, eqstr> data; 
  vector<float> V;

  ifstream infile("HPC_DATA.csv");

  string line;
  int lineCount = 0;

  vector<string> keyNames;
  
  cout << "Parsing..." << endl;
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
      }
   
      const char *key = filename.c_str();
      data[key] = currentVector;
      lineCount++;
  }

  cout << "Parse time: " << endl; 
  cout << "Parsed line count is: " << lineCount << endl;

  for(vector<string>::iterator it = keyNames.begin(); it != keyNames.end(); ++it) {
    const char *key = (*it).c_str();
    vector<float> temp = data[key];
    float min = *min_element(temp.begin(), temp.end());
    float max = *max_element(temp.begin(), temp.end()); 
    cout << "Max is: " << max << " Min is: " << min << endl; 
  }
} 
