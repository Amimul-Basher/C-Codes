#include <iostream>
#include <string>
using namespace std;



 
int main()
{
    string main, s;
    getline(cin, main);
    cin >> s;
    int m, n;
    m= main.length();
    n = s.length();
    int count = 0;
    for(int i = 0; i <=  m-n; i++){
        count = 0;
        for(int j = 0;  j < n; j++){
            if(main[i+j] != s[j]) j = n;
            else count++;
        }
        if(count == n) i = m;
    }
    if(count ==n) cout << "Found";
    else cout << "not Found";
    
    return 0;
} 