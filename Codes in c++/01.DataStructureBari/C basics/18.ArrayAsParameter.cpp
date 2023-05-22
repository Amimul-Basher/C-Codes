#include<iostream>
using namespace std;

void arrayPassing(int A[], int size ){
    // Can not use for each loop here as the array is passed as parameter
    // Here A is a pointer reference
    
    for(int i = 0; i< size; i++){
        cout << A[i] << " ";
        if (i == 3){
            A[i] = 10;
        }
    }
}

int * arrayReturn(int size){
    int *arrPtr = 0;
    arrPtr = new int[size];
    for(int i = 0; i<size; i++){
        arrPtr[i]=i*10;
    }
    return arrPtr;
}

int main(){

    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = 0;
    
    cout << "\narrayPassing function call..................." << endl;
    arrayPassing(arr, 5);

    cout << "\nChanging array element into the function.................." << endl;
    for(int i:arr){
        cout << i << " ";
    }

    cout << "\nDeclare array into function then return where needed....................\n" ;
    ptr = arrayReturn(20);
    for(int i = 0; i<20; i++){
        cout << ptr[i] <<" ";
    }
    cout << endl;
    return 0;
}