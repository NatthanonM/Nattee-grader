#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string,int> data;
    for(int i = 0; i < n; i++){
      string s;
      cin >> s;
      data[s] += 1;
    }

    string string_out;
    int int_out;
    int max = 0;
    for(auto p : data){
      if (p.second >= max){
         max = p.second;
         string_out = p.first;
         int_out = p.second;
      }
    }

    cout << string_out << " " << int_out;
    return 0;
}
