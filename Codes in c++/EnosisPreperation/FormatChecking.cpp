#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;

    cin >> s;

    int len = s.length();
    int valid = 1;
    int countDot = 0;
    for(int i= 0; i < len; i++){
        if(s[i] == '.' && i+1 % 4 == 0){
            countDot++;
        }
    }
    if(countDot == 3){
        
    }else{
        valid = 0;
    }

    return 0;
}