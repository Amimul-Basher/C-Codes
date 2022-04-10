// codeforces round 773 (div2) problem A


#include<iostream>
#include<vector>

//#define LOCAL
using namespace std;

void solve(){
    //write code here
    long long length;
    vector<pair<long long, long long>> triangleVertices(3, {0,0});

    for(int i = 0;i < 3; i++){
        cin >> triangleVertices[i].first >> triangleVertices[i].second;
    }
    if (triangleVertices[0].second == triangleVertices[1].second && triangleVertices[2].second < triangleVertices[0].second ){
        cout << abs(triangleVertices[1].first - triangleVertices[0].first) << endl;
    }else if( triangleVertices[0].second == triangleVertices[2].second && triangleVertices[1].second < triangleVertices[0].second ){
        cout << abs(triangleVertices[2].first - triangleVertices[0].first) << endl;
    }else if( triangleVertices[1].second == triangleVertices[2].second && triangleVertices[0].second < triangleVertices[1].second ){
        cout << abs(triangleVertices[2].first - triangleVertices[1].first) << endl;
    }else{
        cout << "0" << endl;
    }
}

int main (){
    #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("ouput.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}