#include<iostream>
using namespace std;

struct Array {
    int A[10];
    int size;
    int length;
};

void display(Array B){
    for(int i = 0; i < B.length; i++){
        cout << B.A[i] << " ";
    }
    cout << endl;
}

int deleteElementByIndex(Array *arr, int index){
    if(index <0 || index > arr->length){
        cout << "Error: Index out of bound" << endl;
        return -1;
    }else{
        int x = arr->A[index-1];

        // if the last index to be deleted 
        if(index == arr->length){
            x = arr->A[arr->length-1];
            arr->length--;
        }else{
            for(int i = index-1; i< arr->length; i++){
                arr->A[i] = arr->A[i+1];
                
            }
            arr->A[arr->length-1] = 0;
            arr->length--;

        }  
        return x;
    }  
}

void append(Array *arr, int value){
    arr->A[arr->length] = value;
    arr->length++;
}

void insert(Array *arr, int index, int value){
    if(index <0 || index > arr->length){
        cout << "Error: Index out of bound" << endl;
    }else{
        for(int i = arr->length; i >= index; i--){
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index-1] = value;
        arr->length++;
    }
}

int binarySearch(Array *arr, int low, int high, int value){
    int mid = 0;
    if(low>high){
        return -1;
    }else{
        mid = (low+high)/2;
        if(arr->A[mid] == value){
            return mid;
        }else if(value<arr->A[mid]){
            return binarySearch(arr, low, mid-1, value);
        }else{
            return binarySearch(arr, mid+1, high, value);
        }
    }
}
int main(){
    Array A= {{2, 4, 8, 16}, 10, 4};
    insert(&A, 3, 6);
    append(&A, 32);
    deleteElementByIndex(&A, 7);
    cout << "Binary search " << binarySearch(&A, 0, A.length-1, 2) << endl;
    display(A);
    return 0;
}