//Codeforces Round #777 (Div. 2) problem B

#include<iostream>
#include<vector>
#include<string>
using namespace std;
// #define LOCAL

void solve(){
    //write code here
    string arr[100];
    int n, m;
    cin >> n >> m;
    for(int i= 0; i< n; i++){
        cin >> arr[i];
    }
    

    int eligent = 1;
    if(n == 1 || m == 1){
        cout << "YES" << endl;
    }else{
        
        for(int i= 0; i< n-1; i++){
            for(int j = 0; j < m-1; j++){
                if(arr[i][j] == '1'){
                        if((arr[i+1][j+1]== '1' && arr[i+1][j] == '0' && arr[i][j+1] == '1') || (arr[i+1][j+1]== '1' && arr[i+1][j] == '1' && arr[i][j+1] == '0')){
                        eligent = 0;
                        i = n+1;
                        j = m+1;
                    }
                }
            }
        }
        for(int i= 0; i< n-1; i++){
            for(int j = 1; j < m; j++){
                if(arr[i][j] == '1'){
                        if((arr[i+1][j-1]== '1' && arr[i+1][j] == '0' && arr[i][j-1] == '1') || (arr[i+1][j-1]== '1' && arr[i+1][j] == '1' && arr[i][j-1] == '0')){
                        eligent = 0;
                        i = n+1;
                        j = m+1;
                    }
                }
            }
        }

        if(eligent) cout << "YES" << endl;
        else cout << "NO" << endl;
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