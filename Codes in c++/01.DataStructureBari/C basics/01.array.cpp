#include<iostream>
using namespace std;
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    cout << "Size of array: "<< sizeof(arr)/sizeof(int)<< endl;
    for(int x: arr){
        cout << x << " ";
    }
    cout << "\nEnter the size of array you want: ";
    int n;
    cin >>n;
    int A[n]= {1,3,4}; //it was not possible to declare array with dynamic values in the older version of c++ compiler
    for(int x: A){
        cout << x << " ";
    }
    return 0;
}