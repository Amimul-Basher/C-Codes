#include <iostream>
#include <bits/stdc++.h>
 
#define int long long
#define double long double
#define endl '\n'
#define pi 3.1415
#define inf 2000000000000000000
 
using namespace std;
constexpr int mod=1000000007;
constexpr int MOD=998244353;
 




void solve(){

    int n; 
    cin >> n; 
    int a[n];
    for(int i= 0; i< n; i++){
        cin >> a[i];
    }
    int b[n];
    for(int i= 0; i< n; i++){
        cin >> b[i];
        if(b[i]> a[i]) swap(b[i], a[i]);
    }
    



    long long sum= 0;
    for(int i = 1; i< n; i++){
        sum+=abs(a[i]-a[i-1])+abs(b[i]-b[i-1]);
    }
    cout << sum << endl;
}
int main(){

    #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}