//APPROACH:
//Time Complexity: time complexity is O(2n) or O(n) as there is only one while loop and a for loop to take input
#include<bits/stdc++.h>
using namespace std;

// #define Local

void solve(){
    //write code here

    int n, k;
    cin >> n >> k;
    int a[n];
    int count = 0;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());  //sorting the array
    // for(int i = 0;i < n;i++){
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    int j = 0;
    int m = sizeof(a) / sizeof(a[0]);
    if(m == 1){
        cout << a[0] << endl;
    }else{
        while(j< n-1){
        if(a[j]!= a[j+1]){  //in sorted array if two consecutive array elements are not same then count++
            count++;  // count is used to count the mismatch of elements
            if(count == k){   // now chekcing if mismatch elements is equal k or not. if k then found the kth maximum element
                cout << a[j] << endl;
                j= n+1;  // breaking the while loop

            }
        }
        j++;
    }
    }
    
    
}


int main(){

    #ifdef Local
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    solve();

    return 0;
}