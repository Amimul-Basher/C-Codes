#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<int> a, b;
        int n, k;
        long total;
        cin >> n;
        cin >> k;

        total = k;

        int input;
        for(int i = 0; i< n; i++){
            cin >> input;
            a.push_back(input);
        }
        for(int i = 0; i< n; i++){
            cin >> input;
            b.push_back(input);
        }
        int temp = 0;
        while(a.size() != 0){
            
            int m = 0;
            temp = 0;

            for(int i = 0; i < a.size(); i++){
                if(a[i] <= total){
                    total+=b[i];
                    a.erase(a.begin()+i);
                    b.erase(b.begin()+i);
                    temp = 1;
                    i--;
                }
                m++;
            }
            if(temp == 0) break;
    }

    cout << total << endl;
    }
    
    return 0;
}

// #include "bits/stdc++.h"
// using namespace std;
 
// #define ll long long
// #define ar array
// #define sz(x) (int) (x).size()
 
// const int mxn=1e5;
// int n,k,t;
 
// void solve() {
//     cin >>n >>k;
//     vector<ar<int,2>> v(n);
//     for(int i=0;i<n;i++) {
//         cin >>v[i][0];
//     }
//     for(int i=0;i<n;i++) {
//         cin >>v[i][1];
//     }
//     sort(v.begin(),v.end());
//     int ans=k,i = 0;
//     while(i<n && ans>=v[i][0]) {
//         ans += v[i][1];
//         i++;
//     }
//     cout <<ans <<"\n";
// }
 
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
//     cin >>t;
//     while(t--) {
//         solve();
//     }
// }