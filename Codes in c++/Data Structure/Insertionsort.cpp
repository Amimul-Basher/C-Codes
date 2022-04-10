#include <iostream>
using namespace std;

int main(){
    int arr[10] = {8, 9, 10, 44, 1, 2, 3, 7, 5, 0};
    for(int i = 1; i < 10; i++){
        int t = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > t){
            arr[j+1] = arr[j];
            j--; 
        }
        arr[j+1] = t;
    }

    for(auto i : arr){
        cout << i << " " ;
    }
    return 0;
}