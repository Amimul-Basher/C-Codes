//APPROACH:
//Time Complexity:   O(2n) or O(n)  as taking input in one for loop and another loop is used to run the operation
#include<bits/stdc++.h>
using namespace std;

// #define Local

void solve(){
    //write code here
    int N, X;
    cin >> N >> X;
    int A[N];
    for(int i = 0; i< N; i++){
        cin >> A[i];
    }
    int count  = 0;
    int total = 0;
    for(int i = 0; i< N; i++){  
           //checking how many weights are less than X and they are consecutive, That number will be the ans
         
        if(A[i] < X && A[i+1]< X){
            total++;
        }
    }
    if(A[0] < X ){
        total = total + 1;
        cout << total << endl;
    }else{
        cout << total << endl;
    }
    
}


int main(){

    #ifdef Local
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