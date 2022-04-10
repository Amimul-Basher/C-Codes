//Educational Codeforces Round ... (Rated for Div. .)

#include<iostream>
#include<math.h>
#include<vector>
#include<string>
using namespace std;
//#define LOCAL

void solve(){
    int x, y;
    cin >> x >> y;
    if(x == 0 && y == 0) cout << '0' << endl;
    else if((int)sqrt(x*x + y*y) == sqrt(x*x+y*y)) cout << '1' << endl;
    else cout << '2' << endl;
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