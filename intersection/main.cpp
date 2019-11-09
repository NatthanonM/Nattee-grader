#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;

    vector<int> vn;
    vector<int> vm;
    for(int i = 0; i < n; i++){
      int j;
      cin >> j;
      vn.push_back(j);
    }

    for(int i = 0; i < m; i++){
      int j;
      cin >> j;
      vm.push_back(j);
    }

    vector<int> out;
    for(auto i : vn){
      for(auto j : vm){
         if(i == j){
            if(find(out.begin(),out.end(),i) == out.end()) {out.push_back(j);}
         }
      }
   }

   sort(out.begin(),out.end());
   for(auto c : out){
      cout << c << " ";
   }
   return 0;
}
