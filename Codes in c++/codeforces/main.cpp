// codeforces round 773 (div2) problem B


#include<iostream>
#include<vector>
#include<map>

//#define LOCAL
using namespace std;

void solve(){
    //write code here
    int n;
    cin >> n;
    map<int, int> mp;
    vector<int> poweruptypes(n);
    for(int i = 0; i < n; i++){
        cin >> poweruptypes[i];
    }
    for(auto i : poweruptypes){
        mp[i]++;
    }
    int types = mp.size();
    int strength;
    strength = types;
    for(int k = 1; k <= n; k++){
        if(k <= types) cout << types << " ";
        else cout << ++strength << " ";
    }
    cout << endl;
}

int main (){
    #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("ouput.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}