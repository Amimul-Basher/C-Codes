#include <iostream>
#include <cmath>
#include <vector>

//20146209 wifi password sumon

using namespace std;

void palindrom(string s){
    int palindrom = 1;
    int size = s.length();
    for(int i = 0; i < ceil(size/2); i++){
        if(s[i] != s[size-i-1]){
            palindrom = 0;
            i = ceil(size/2);
        }
    }
    if(palindrom) cout << "Palindrom\n";
    else cout << "Not Palindrom" << endl;
}
void abbriviation(string E, string A){
    vector<char> vec;
    int j = 0;
    char O[E.length()];
    for(int i = 0; i < E.length(); i++){
        if(E[i]<= 90 && E[i]>=65){
            O[j] = E[i];
            j++;
        }
        O[j] = '\0';
    }

    if(O == A) cout << "yes" << endl;
    else cout << "No" << endl;
    
 }

int main(){
    
    string E, A;

    getline(cin, E);

    cin >> A;

    palindrom(E);
    abbriviation(E, A);
    
    return 0; 
}