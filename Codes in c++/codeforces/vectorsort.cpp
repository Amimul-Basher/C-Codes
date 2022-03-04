//Educational Codeforces Round 123 (Rated for Div. 2)

#include<bits/stdc++.h>
#include<vector>


using namespace std;
void solve(){
    int n;
    cin >> n;
    
    vector<int> vct(n), vcttemp(n);
    for(int i = 0; i < n; i++){
        vct[i] = i+1;
    }
    sort(vct.begin(), vct.end(), greater<int>());
    for(auto p: vct){
        cout << p << " ";
    }
    cout << endl;
    for(int i = 0; i< n-1; i++){
        vcttemp = vct;
        if(i == n-3){
            int temp = 0;
            temp = vcttemp[n-2];
            vcttemp[n-2] = vcttemp[i];
            vcttemp[i] = temp;
        }else if(vcttemp[i] == 5){
            int temp = 0;
            temp = vcttemp[n-2];
            vcttemp[n-2] = vcttemp[i];
            vcttemp[i] = temp;
        }else{
            int temp = 0;
            temp = vcttemp[n-1];
            vcttemp[n-1] = vcttemp[i];
            vcttemp[i] = temp;
        }
        
        for(auto p: vcttemp){
            cout << p << " ";
        }
        cout << endl;
    }
    
}
int main(){
    short t;
    cin >> t;
    while(t--){
        solve();
    }
}