#include<iostream>
using namespace std;

void headRecursion(int n){
    if(n>0){
        headRecursion(n-1);
        cout << n << " ";
    }else{
        cout << endl; //check when this code gets executed
    }
}

void tailRecursion(int n){
    if(n>0){
        cout << n << " ";
        tailRecursion(n-1);
    }else{
        cout << "\n\n\n";
    }
}

void treeRecursion(int n){
    if(n>0){
        cout << n << " ";
        treeRecursion(n-1);
        treeRecursion(n-1);
    }else{
        // cout << "\n";
    }
}

int main(){
    int n = 5;

    cout << "Tail Recursion output" << endl;
    tailRecursion(n);

    cout << "Head Recursion output" << endl;
    headRecursion(n);

    

    cout << "\nTree Recursion output" << endl;
    treeRecursion(n);

    return 0;
}