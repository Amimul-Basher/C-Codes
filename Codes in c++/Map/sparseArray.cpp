// https://www.hackerrank.com/challenges/sparse-arrays/problem?isFullScreen=true&h_r=next-challenge&h_v=zen#!
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,q;
    cin >> n;
    vector<string> strings(n);
    for(int i = 0; i < n; i++){
        cin >> strings[i];
    }
    cin >> q;
    vector<string> quaries(q);
    for(int i = 0; i < q; i++){
        cin >> quaries[i];
    }
    
    unordered_map<string, int> um;
    
    for(int i = 0; i < n; i++){
        um[strings[i]]++;
    }
    
    for(int i = 0; i< q; i++){
        cout << um[quaries[i]] << endl;
    }
    
    
    return 0;
}