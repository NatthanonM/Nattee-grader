#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string,int> histo;
    for(int i = 0; i < n; i++){
        string word;
        cin >> word;
        histo[word]++;
    }

    vector<pair<string,int>> vector_words;
    for(auto p : histo){
        if( p.second > 1) {
            vector_words.push_back(p);
        }
    }

    sort(vector_words.begin(),vector_words.end());

    for(auto p : vector_words) {
        cout << p.first << " " << p.second << "\n";
    }
    return 0;
}
