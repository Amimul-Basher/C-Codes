// https://www.hackerrank.com/challenges/ctci-ransom-note/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=dictionaries-hashmaps

#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

int main(){
    
    unordered_map<string, int> magazine, note;
    int n, m;
    string s;
    cin >> m >> n;
    for(int i = 0; i < m; i++){
        cin >> s;
        magazine[s]++;
    }
    for(int i = 0; i < n; i++){
        cin >> s;
        note[s]++;
    }
    int found = 1;
    for(auto itr = note.begin(); itr!= note.end(); itr++){
        if(itr->second != magazine[itr->first]) {
            found = 0;
            break;
        }
    }
    if(found) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}