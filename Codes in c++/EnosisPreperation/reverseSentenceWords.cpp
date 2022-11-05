#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    stack<string> stk;
    int len = s.length();
    string words="";
    for(int i = 0; i<= len; i++){    //to get the last word we have to visit the null charecter
        if(s[i] == ' ' || s[i] == '\0'){  //if gets space or null that means we reached to the end of a word
            stk.push(words);  // pushing words to the stack so to reverse
            words  = "";
        }else{
            words += s[i];
        }
    }
    while(!stk.empty()){    //unless the stack gets empty
        cout << stk.top() << " ";
        stk.pop();
    }
    return 0;
}