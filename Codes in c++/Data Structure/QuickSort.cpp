#include <iostream>

using namespace std;

int partition(int arr[], int l, int r){
    int i = l-1;
    int temp = 0;
    int pivot = arr[r];
    for(int j = l; j <r; j++){
        if(arr[j] < pivot){
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[i+1];
    arr[i+1] = pivot;
    arr[r] = temp;
    return i+1;
}

void qs(int arr[], int l, int r){
    if(l>=r)
        return;
    int p = partition(arr, l, r);
    qs(arr, l, p-1);
    qs(arr, p+1, r);
}

void printArray(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {-1, 3, -2, -8, 0, 5, 9, 8};
    int l = 0;
    int r = sizeof(arr)/sizeof(arr[0]);
    qs(arr, l, r-1);
    printArray(arr, r);

    return 0;
}