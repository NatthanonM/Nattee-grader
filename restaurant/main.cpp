#include <iostream>
#include <queue>

using namespace std;

int main()
{
   int n;
   int m;
   priority_queue<int, vector<int>, greater<int>> q;
   vector<pair<int,int>> v;
   cin >> n >> m;
   for(int i = 0; i < n; i++){
      int a;
      cin >> a;
      v.push_back(make_pair(0,a));
   }

   int i = 0;
   while(q.size() <= m){
      for(int j = 0; j < v.size(); j++){
         if (v[j].first == 0){
            q.push(i);
            v[j].first += v[j].second;
         }
         v[j].first--;
      }
      i++;
   }

   for(int i = 0; i < m; i++){
      cout << q.top() << "\n";
      q.pop();
   }

   return 0;
}
