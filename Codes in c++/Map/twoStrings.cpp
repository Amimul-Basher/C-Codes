//Educational Codeforces Round ... (Rated for Div. .)

#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>

using namespace std;
//#define LOCAL

void solve(){
    string a,b;
    cin >> a >> b;
    unordered_map<char, int> str1, str2;
    for(int i = 0;i < a.length();i++){
        str1[a[i]]++;
    }
    for(int i = 0;i < b.length();i++){
        str2[b[i]]++;
    }
    int found = 0;

    // for(auto itr = str1.begin(); itr != str1.end(); itr++){
    //     cout << itr->first << " " << itr->second << endl;
    // }

    // for(auto itr = str2.begin(); itr != str2.end(); itr++){
    //     cout << itr->first << " " << itr->second << endl;
    // }



    for(auto itr = str1.begin(); itr != str1.end(); itr++){
        if(itr -> second > 0 && str2[itr->first] > 0){   //Exist on str1 and  exist on str2
            found = 1;
            break;
        }
    }
    if(found == 1) cout << "YES" << endl;
    else cout << "NO"<< endl;
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