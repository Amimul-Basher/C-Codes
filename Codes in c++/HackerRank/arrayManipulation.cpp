//Educational Codeforces Round ... (Rated for Div. .)

#include<iostream>
#include<vector>
#include<string>
using namespace std;
#define LOCAL

void solve(){
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    int **temp = (int**)malloc(m*sizeof(int));
    for(int i = 0; i< m; i++){
        temp[i] = (int*)malloc(3*sizeof(int));
    }
    for(int i = 0; i< m; i++){
        for(int j = 0; j <3; j++){
            cin >>temp[i][j];
        }
    }
    for(int i= 0; i< m; i++){
        for(int j = temp[i][0]; j <= temp[i][1]; j++){
            arr[j]+= temp[i][2];
        }
    }
    int max = 0;
    for(int i= 0; i< n; i++){
        if(arr[i]> max) max = arr[i];
    }
    cout << max << endl;
}
int main(){

    #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

    solve();

    return 0;
}