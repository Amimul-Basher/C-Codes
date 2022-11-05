// https://www.youtube.com/watch?v=oGqjEx6hrI8&ab_channel=CodingNinjas
#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>


using namespace std;
#define LOCAL

void solve(){
    unordered_map<string, int> um;

    //insert
    pair<string, int> p1("abc", 1);
    um.insert(p1);
    um["def"] = 2;
    cout << "Size of my unordered Map: ";
    cout << um.size() << endl;

    // find or access
    cout << "Accessing the unordered map using array indexing and using 'at': ";
    cout << um["def"] << endl;
    cout << um.at("abc") << endl; // if the key is not available then it throws exception

    cout << um["ghi"] << endl;
    // Searching for the key which is not in the map whill create a key with 0 value
    cout << um.size() << endl;
    if(um["ghi"]> 0) cout << "ghi is present in the key" << endl;

}
int main(){

    #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

    solve();

    return 0;
}