#include<iostream>
using namespace std;
int main(){
    int arr[10] = {2};
    for(int i = 0 ;  i < sizeof(arr)/sizeof(int); i++){
        printf("%d\n", arr[i]);
    }

    //for each loop in c++
    cout << "Printing array with for each loop\n";
    for(int x:arr){
        cout << x << endl;
    }
    return 0;
}