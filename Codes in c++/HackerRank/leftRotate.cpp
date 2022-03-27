//Educational Codeforces Round ... (Rated for Div. .)

#include<iostream>
#include<vector>
#include<string>
using namespace std;
#define LOCAL

void solve(){
    //write code here
    
    int n, d;
    vector<int> arr(n), output(n);

    cin >> n >> d;
    for (int i = 0;i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        output[i] = arr[(i+d)%n];
    }
    for(int i = 0; i< n; i++){
        cout << output[i] << " ";
    }
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