// codeforces round 773 (div2) problem B


#include<bits/stdc++.h>

#define LOCAL
using namespace std;

void solve(){
    //write code here
    int n;
    long long x;
    cin >> n >> x;
    vector<long long> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    int count = 0;
    for (int i =0; i <arr.size(); i++){
        int found = 0;
        int j = i+1;
        while(arr[i]*x <= arr[j]){
            if (arr[i]*x == arr[j]){
                found  = 1;
                arr.erase(arr.begin()+j);
                break;
            }
            j++;
        }
        if(found == 0){
            count++;
        }  

    }
    cout << count << endl;
}

int main (){
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