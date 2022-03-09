#include <iostream>
using namespace std;

int main(){
    int arr[10] = {8, 9, 10, 44, 1, 2, 3, 7, 5, 0};
    for(int i = 10-1; i>= 0; i--){
        int t = 0;
        for(int j = t+1; j <= i; j++ ){
            if(arr[t] < arr[j]){
                t = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[t];
        arr[t] = temp;

    }

    for(auto i : arr){
        cout << i << " " ;
    }
    return 0;
}