#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int arr[n];
    unordered_map<int, int> um;
    for(int i = 0;i < n; i++){
        cin >> arr[i];        // taking input of array element
        um[arr[i]]++;         // pusing it to the unordered map.
    }
    for(auto itr= um.begin(); itr!= um.end(); itr++){
        if(itr->second >=2) cout << itr->first << endl;  //if any of the element found more than two times print it
    }
    
    return 0;
}