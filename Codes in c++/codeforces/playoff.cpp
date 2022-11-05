//Educational Codeforces Round ... (Rated for Div. .)

#include<iostream>
#include<vector>
#include<string>
#include<cmath>

using namespace std;
// #define LOCAL

void solve(){
    //write code here
    int n; 
    cin >> n;
    n = pow(2, n)-1;
    cout << n << endl;

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