//Educational Codeforces Round ... (Rated for Div. .)

#include<iostream>
#include<vector>
#include<string>
using namespace std;
// #define LOCAL

void solve(){
    int n, B, x, y;
    long long total = 0;
    cin >> n >> B >> x >> y;
    int temp  = 0;
    for(int i = 1; i <= n; i++){
        if((temp+x)> B){
            total = total + temp -y;
            temp = temp - y;
        }else{
            total = total + temp + x;
            temp = temp + x;
        }
    }
    cout << total << endl;
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