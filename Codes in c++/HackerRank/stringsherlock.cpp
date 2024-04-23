#include<bits/stdc++.h>
using namespace std;

int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    cin >> s;
    
    unordered_map<char, int>mps;
    unordered_map<int, int> mpi;
    
    
    for(int i= 0; i < s.length();i++){
        mps[s[i]]++;
    }
    for(auto i = mps.begin(); i != mps.end(); i++){
        cout<< i->first << " " << i->second << endl;
    }
    vector<int> arr(mps.size());
    
    for(auto i = mps.begin(); i != mps.end(); i++){
        mpi[i->second]++;
    }
    for(auto i = mpi.begin(); i != mpi.end(); i++){
        cout << i->first << " " << i-> second << endl;
    }
    int m = 0, n =0;

    
    if(mpi.size() == 1){
        cout << "YES" << endl;
    }else if(mpi.size() == 2){
        for(auto i = mpi.begin(); i != mpi.end(); i++){
            if(m) n = i->first;
            else m = i->first;
        }
        
        if(mpi[m] ==1 || mpi[n] ==1) {
            if(mpi[m] == 1){
                if(m-1 == 0 || m-1 == n) cout << "YES" << endl;
                else cout <<"NO" << endl;
            }else{
                if(n-1 == 0|| n-1 == m) cout << "YES" << endl;
                else cout << "NO" << endl;
            }
        }else cout << "NO" << endl;
        
        // int j = 0;
        // for(auto i = mps.begin(); i != mps.end(); i++){
        //     arr[j] = i-> second;
        //     j++;
        // }
        
        // sort(arr.begin(), arr.end());
        // // for(int i = 0; i < mps.size(); i++){
        // //     cout << arr[i] << " ";
        // // }

        // if(arr[mps.size()-1] == arr[0]) cout << "YES" << endl;
        // else if((arr[mps.size()-1]-1) == arr[mps.size()-2]) cout << "YES" << endl;
        // else if(arr[0] == 1 && arr[1] >= 2) cout << "YES" << endl;
        // else cout << "NO" << endl;
    }else{
        cout << "NO" << endl;
    }
    
    return 0;
}