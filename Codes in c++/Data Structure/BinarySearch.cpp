#include<iostream>
using namespace std;
int binarySearch(int *arr, int l, int r, int key){
    int found = 0;
    int mid = (l+r)/2;
    if(l<=r){
        if(arr[mid] == key){
            return 1;
        }else if(arr[mid] > key){
            return binarySearch(arr, l, mid-1, key); //if you don't use return for recursion then the rest code will be executed later.
        }else{
            return binarySearch(arr, mid+1, r, key); //try to understand calling the function without return statement.
        }
    }else{
        return 0;
    }
}

int main(){
    int key= 5, l = 0;
    int arr[] = {1, 4, 6, 8, 10, 52, 60, 72, 82, 95};
    int r = sizeof(arr)/sizeof(arr[0]);
    if(binarySearch(arr, l, r-1, key)){
        cout << key << " found" << endl;
    }else{
        cout << key << " Not found" << endl;
    }
    return 0;
}