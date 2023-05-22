#include<iostream>
using namespace std;

void passByValueSwap(int m, int n){
    int temp = m;
    m = n;
    n= temp;
}

void passByAddressSwap(int *m, int *n){
    int temp = *m;
    *m = *n;
    *n= temp;
}

// Passing by reference method uses the same variable declared in the main method
void passByReferenceSwap(int &m, int &n){
    int temp = m;
    m = n;
    n= temp;
}


int main(){
    int a= 10, b= 20;
    cout << "Before swap A and B -->" << a << " " << b << endl;
    passByValueSwap(a, b);
    cout << "After swap A and B -->" << a << " " << b << endl;

    cout << "Before swap A and B -->" << a << " " << b << endl;
    passByAddressSwap(&a, &b);
    cout << "After swap A and B -->" << a << " " << b << endl;

    cout << "Before swap A and B -->" << a << " " << b << endl;
    passByReferenceSwap(a, b);
    cout << "After swap A and B -->" << a << " " << b << endl;
    return 0;
}