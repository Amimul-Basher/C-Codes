#include <iostream>
using namespace std;

//for recursion global variable acts as static ones
int x = 0;
int checkGlobal(int n){
    if(n>0){
        x++;
        return checkGlobal(n-1) + x;
    }
    return 0;
}

//Static variable is declared in the main method only once
int checkStatic(int n){
    static int z = 0;
    if(n>0){
        z++;
        return checkStatic(n-1) + z;
    }
    return 0;
}

int checkLocal(int n){
    int y = 0;
    if(n>0){
        y++;
        return checkLocal(n-1) + y;
    }
    return 0;
}


int sum(int n){
    if(n>0){
        
        return sum(n-1) + n;
    }
    return 0;
}

int main(){
    int n = 5;
    
    cout << "Sum" << sum(5) << endl;
    cout << "Check static sum = " << checkStatic(n) << endl;
    cout <<"Check global sum = " << checkGlobal(n) << endl;
    cout <<"Check local sum = " << checkLocal(n) << endl;
    
}