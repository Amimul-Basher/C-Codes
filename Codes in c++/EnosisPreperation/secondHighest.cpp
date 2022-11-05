#include<bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i< n;i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    
    int j= 0;
    
    while(arr[j] == arr[j+1]){
        j++;
    }
    cout << arr[j+1] << endl;
    return 0;
}