#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int len = s.length();
    int count = 0;
    for(int i= 0; i < s.length()/2; i++){
        
        if(s[i] != s[len-1-i]){
            count++;
            
        }
    }
    if(count <= k){
        for(int i= 0; i <= s.length()/2; i++){
        
            if(s[i] != s[len-1-i]){
                if(k> count){
                    s[i] = '9';
                    s[len-1-i] = '9';
                    k-= 2;
                }else{
                    if(s[i]>s[len-1-i]) s[len-1-i] = s[i];
                    else s[i] = s[len-1-i];
                    k--;
                }
                count --;
            }else{
                if(k>0){
                   if(k%2 == 0 && s[i] < '9'){
                    s[i] = '9';
                    s[len-1-i] = '9';
                    k-=2;
                    }else{
                        if(len == 1){
                            s[i] = '9';k--;
                        }
                    } 
                }
                
            }
            
        }
        cout << s << endl;
    }else{
        cout << "-1" << endl;
    }

}

int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    solve();
    return 0;
}