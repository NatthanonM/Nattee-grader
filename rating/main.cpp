#include <iostream>
#include <iomanip>
#include <vector>
#include <sstream>
#include <map>
#include <string>

using namespace std;

template <class T>
vector<T> input_split() {
    cin >> ws;
    string line;
    getline(cin, line);
    stringstream ss(line);
    T buf;
    vector<T> tokens;
    while (ss >> buf)
        tokens.push_back(buf);
    return tokens;
}

int main()
{
    cout << std::fixed << std::setprecision(2);

    int n;
    vector<vector<string>> data;
    cin >> n;
    for(int i = 0; i < n; i++){
      vector<string> split_input = input_split<string>();
      data.push_back(split_input);
    }

    map<string,vector<int>> subjects;
    map<string,vector<int>> teachers;

    for(auto d : data){
      int score = stoi(d[2]);
      subjects[d[0]].push_back(score);
      teachers[d[1]].push_back(score);
    }

    for(auto e : subjects){
      cout << e.first << " ";
      float avg;
      float sum = 0.00;
      for(int s : e.second){
         sum += s;
      }
      avg = sum/e.second.size();
      cout << avg << "\n";
   }

    for(auto e : teachers){
      cout << e.first << " ";
      float avg;
      float sum = 0.00;
      for(auto s : e.second){
         sum += s;
      }
      avg = sum/e.second.size();
      cout << avg << "\n";
   }
    return 0;
}
