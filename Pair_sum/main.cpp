#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n;
    int m;
    cin >> n >> m;

    int data[n];
    for (int i = 0; i < n; i++){
        cin >> data[i];
    }
    sort(data,data+n);

    int sum[m];
    for (int i = 0; i < m; i++){
        cin >> sum[i];
    }

    for ( int s : sum ){
        string can = "NO";
        for (int d : data){
            if (binary_search(data,data+n,s-d)){
                can = "YES";
                break;
            }
        }
        cout << can <<"\n";
    }

    return 0;
}
