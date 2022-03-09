#include <iostream>
using namespace std;

int main(){
    int arr[10] = {8, 9, 10, 44, 1, 2, 3, 7, 5, 0};
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(auto i : arr){
        cout << i << " " ;
    }
    return 0;
}