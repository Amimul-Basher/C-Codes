#include<iostream>
using namespace std;
int main(){
    int a = 0;
    //At the time of declaration, initialization is must
    //Pointer is nothing but the another name of initilized varialble
    int &r = a;
    cout << r << endl;
    return 0;
}