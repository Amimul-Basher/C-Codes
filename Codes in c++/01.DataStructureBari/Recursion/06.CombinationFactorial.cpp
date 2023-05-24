#include<iostream>
using namespace std;

int factorial (int n){
    if(n<=0) return 1;
    return factorial(n-1)*n;
}

int combinationIterative(int n, int r){
    return factorial(n)/(factorial(r) * factorial(n-r));
}

int nCr(int n, int r){
    if(n>=r){
        if(n==r || r == 0) return 1;
    return nCr(n-1, r-1) + nCr(n-1, r);
    }else{
        return 0;
    }
    
    
}


int main(){
    int n = 21, r = 20;
    cout<< "Combination Iterative solution: " << combinationIterative(n, r)<< endl;
    cout<< "Combination Recursive solution: " << nCr(n, r)<< endl;

    return 0;
}