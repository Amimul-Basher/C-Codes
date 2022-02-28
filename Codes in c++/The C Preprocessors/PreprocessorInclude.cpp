#include<bits/stdc++.h>

#define NUMBERS

#include"preprocessor.h"

using namespace std;

int main(){

    int a = 10, b = 4;
    cout << max(a,b) << endl;

    //if numbers is defined already then execute the following code else skip
    #ifdef NUMBERS
    cout << inf << endl;
    #endif 
    return 0;
}