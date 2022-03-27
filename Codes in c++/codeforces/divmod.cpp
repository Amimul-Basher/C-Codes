#include<iostream>
using namespace std;

// #define LOCAL

void solve(){
    int a, x, l, r;
    cin >> l >> r >> a;
    //cout << a << l << r << endl;

    x = r/a;

    if((x*a+a-1)<= r) x = r;
    else x = (x*a)-1;

    if(a == 2 || a==1){
        x = r;
        x = (x/a) + (x%a);
        cout << x << endl;
    }else if(x >= l){
        x = (x/a) + (x%a);
        cout << x << endl;
    }else{
        x = r;
        x = (x/a)+(x%a);
        cout << x << endl;
    }
}

int main(){

    #ifdef LOCAL

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    #endif

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}