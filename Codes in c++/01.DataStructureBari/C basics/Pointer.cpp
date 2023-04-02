#include<iostream>
using namespace std;

int main (){
    //Two way to declare null pointer
    //Advantage: Initially the pointer will not Point to any garbase location
    int *p = 0;      //null pointer
    cout << "As declared as null, Pointer pointing initially to : " << p << endl;

    int *q = NULL;  //null pointer


    int a = 10;
    p = &a;
    cout << "Pointer pointing to an address after assignment : " << p << endl;

    cout << "The value stored in that location where p is pointing at: " << *p << endl;
    
    return 0;
}