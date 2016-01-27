#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<string>
#include<vector>
#include<fstream>
#include<sstream>
#include<chrono>
 
using namespace std;

int main()
{
  unordered_map <string, vector<float> > data;  
  vector<float> V;
  ifstream infile("HPC_DATA.csv");
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

  start = std::chrono::system_clock::now();

  for(vector<string>::iterator it = keyNames.begin(); it != keyNames.end(); ++it) {
    vector<float> temp = data[*it];
    auto result = minmax_element(temp.begin(), temp.end());
    cout << "min element is: " << *result.first << " max element is: " << *result.second << endl; 
  }

  end = std::chrono::system_clock::now();
  std::chrono::duration<double> minmax_duration = end-start; 

  cout << "\nStatistics" << endl;
  cout << "-----------" << endl; 
  cout << "Parse time: " << parse_duration.count() << endl;
  cout << "Parsed line count: " << lineCount << endl;
  cout << "Data entry count: " << elemCount << endl;
  cout << "Max min time: " << minmax_duration.count() << endl; 
} 
