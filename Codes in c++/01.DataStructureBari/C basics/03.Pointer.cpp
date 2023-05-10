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

    a = 20;
    cout << "after reassigning the value of a we get pointer p equals" << *p << endl;
    *p = 30;
    cout << "Changing the value throught pointer. Then a and pointer p is " << a << " "<< *p << endl;
    

    //Pointing to an array
    int A[] = {1,2,3,4,5};
    //Array itself is a pointer to the stream of data. So the "&" should not be used
    int *r = A;
    //For different data types the pointer size does not vary
    cout << "Size of pointer for all data types :" << sizeof(r) << endl;
    for(int i = 0; i < sizeof(r)/sizeof(int); i++){
        cout << r[i] << " ";
    }


    cout << "\n...............................Dynamic memory allocation..............................." << endl;

    int *m;
    m = (int *)malloc(5* sizeof(int)); //Memory allocation for 5 integer

    //m= new int[5]; Declaration in c++
    for(int i = 0;i < 5; i++){
        m[i] = i;
    }
    for(int i = 0;i < 5; i++){
        cout << m[i] << " ";
    }

    //For big project it's important to deallocate the memory
    delete [] p; //for an array
    // delete p; //for simple variable

    // free(p); //in c
    

    return 0;
}