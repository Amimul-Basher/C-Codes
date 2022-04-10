//Educational Codeforces Round 123 (Rated for Div. 2)

#include<iostream>
#include<vector>
#include<string>
using namespace std;
//#define LOCAL

void solve(){
    
    vector<char> vct;
    string letters = "rgbRGB";
    cin >> letters;
    char s;
    int opened = 0;
    for(int i = 0; i < 6; i++){
        if(letters[i] == 'r' || letters[i] == 'g' || letters[i] == 'b'){
            vct.push_back(letters[i]);
        }else{
            int search = letters[i] + 32;
            opened = 0;
            for(int k = 0; k < vct.size(); k++){
                if(search == vct[k]) {
                    vct.erase(vct.begin()+k);
                    opened = 1;
                    k = 3; //break
                }  
            }
            if(opened == 0){
                i = 6;
            }
        }
    }
    if(opened) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main(){

    #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}