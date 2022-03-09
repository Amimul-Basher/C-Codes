#include<bits/stdc++.h>
#define size 10
#define LOCAL

using namespace std;

int main(){

    #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int arr[size];
    for(int i = 0;i < size;i++){
        cin >> arr[i]; 
    }
    sort(arr, arr+size);
    
    int count = 0 ;
    int triplet = 0;
    for(int i = 0; i < size-2; i++){
        
        triplet = 1;
        int j = i;
        if(arr[i] == arr[i-1]){
            triplet = 0;
        }
        while(triplet){
            if(arr[j] != arr[j+1] && arr[j] +1 != arr[j+1]){
                triplet = 0;
            }
            if(arr[j]+1 == arr[j+1]){
                triplet++;
            }
            if(triplet == 3){
                count ++;
                triplet = 0;
            }
            j++;
            
        }
    }
    cout << count << endl;
    return 0;

}