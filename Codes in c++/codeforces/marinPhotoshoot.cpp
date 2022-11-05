//Codeforces Round #779 (Div. 2) A

#include<iostream>
#include<vector>
#include<string>
using namespace std;
// #define LOCAL

void solve(){
    short n, count = 0;
    cin >>n;
    string s ;
    cin >> s;
    for(int i = 0; i < n; i++){
        if(s[i] == '0' && s[i+1]== '0') count +=2;
        if(s[i] == '0' && s[i+1] == '1' && s[i+2] == '0') count+=1;
    }
    cout << count << endl;
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