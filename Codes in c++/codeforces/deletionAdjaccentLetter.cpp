#include<iostream>
using namespace std;

// #define LOCAL

void solve(){
    string s;
    char c;
    cin >> s;
    cin >> c;
    int size = s.length();
    int found = 0;
    for(int i = 0; i < size; i++){
        if (s[i] == c){
            if( i%2 == 0){
                cout << "YES"<< endl;
                i = size; //break
                found = 1;
            }
        }
    }
    if (found == 0) cout << "NO" << endl;   
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