//APPROACH:
//Time Complexity:   as there is nested array the time complexity is O(n^2)  neglecting the loop for z th queries
#include<bits/stdc++.h>
using namespace std;

//#define Local

void solve(){
    //write code here
    string s, k;
    int z, type, a, m, n;
    char c;
    int count = 0;
    cin >> s; //string input
    cin>> z;
    while(z--){
        cin >> type;
        if(type == 1){ // if type == 1 then change the a-th charecter;
            cin >> a >> c;
            s[a-1] = c;
        }
        if(type == 2){
            count =0;
            cin >> m >> n;
            cin >> k;
            int len= k.length();   //length of k
            int temp = 0;
            for(int i = m-1; i <= n-len; i++){   // looping from m to n charecters
                temp = 0;
                for(int j = 0; j < len; j++){ //checking wheather string k and s are same or not
                    if(s[i+j] != k[j]){ //if doesn't match breaking the loop setting j = len
                        j = len;
                    }else temp++;    //counting matched charecter
                }
                if(temp == len) count++;  // if count is same as k's length then found 1 match
            }

            cout << count << endl;  //printing the output
        }
    }

}


int main(){

    #ifdef Local
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    solve();

    return 0;
}