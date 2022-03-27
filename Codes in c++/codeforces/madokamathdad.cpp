// Codeforces Round #777 (Div. 2) problem A

#include<iostream>
#include<vector>
#include<string>
using namespace std;
#define LOCAL

void solve(){
    //write code here
    int n;
    cin >> n;
    string s;
    for(int i = 1; i <= n/3; i++){
        s+="21";
    }
    if(n%3 == 1) s = "1" + s;
    if(n%3 == 2) s = s + "2";
    
    
    cout << s << endl;

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