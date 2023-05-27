#include<iostream>
using namespace std;

long fibonacciMemorize(int n){
    static long fib[50] = {0};

    if(n==0)return 0;
    if(n==1)return 1;

    if(fib[n-1]== 0) fib[n-1]= fibonacciMemorize(n-1);
    if(fib[n-1] == 0) fib[n-2] = fibonacciMemorize(n-2);
    
    return fib[n-1]+ fib[n-2];
}


//in a recursive problem when a function call itself two times and the step is reduced by 1
//then the time complexity is 2^n
long fibonacci(int n){

    if(n==0)return 0;
    if(n==1)return 1;

    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){

    int n = 46;
    cout << "Fibonacci Memorize : " << fibonacciMemorize(n) << endl;
    cout << "Fibonacci : " << fibonacci(n) << endl;
    
    return 0;
}