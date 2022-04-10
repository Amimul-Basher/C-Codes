#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return fibonacci(n-1)+ fibonacci(n-2);
}
int factorial(int n){
    if(n == 1){
        return 1;
    }
    return n*factorial(n-1);
}
int sum(int n){
    if(n == 0) return 0;
    return n+ sum(n-1);
}

int main(){

    int n;
    cin >> n;

    cout << fibonacci(n) << endl;
    cout << factorial(n) << endl;
    cout << sum(n) << endl;
    return 0;
}