#include<bits/stdc++.h>
using namespace std;


int main(){

    int number;
    cin >> number;
    string numberString = to_string(number);
    int len = numberString.length();
    int count = 0;
    for(int i = 0;i<len/2; i++){
        if(numberString[i] != numberString[len-i -1])
            count++;
    }
    if(count <1) cout << "palindrome\n";
    else cout << "Not palindrome\n";

    return 0;
}