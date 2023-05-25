#include <bits/stdc++.h>

using namespace std;


void backtrack(vector<vector<int>> &list, vector<int> &tempList, int (&arr)[3], int start){
    
    list.push_back(tempList);
    for(int i = start; i < sizeof(arr)/sizeof(int); i++){
        tempList.push_back(arr[i]);
        backtrack(list, tempList, arr, i+1);
        tempList.pop_back();
    }
}

int main(){
    int arr[] = {1,4,8};

    
    vector<vector<int>> list;
    vector<int> tempList;

    backtrack(list, tempList, arr, 0);

    //taking sums into a single vector
    vector<int> sum ={0};
    int temp = 0;
    for(vector<int> i : list){
        
        temp = 0;
        for(int j: i){
            temp+=j;
            // Print 2D vector List
            cout << j << " ";
        }
        
        sum.push_back(temp);
        cout << endl;
    }   

    //sorting the sum vector
    sort(sum.begin(), sum.end());

    // Remove duplicate sums
    for(int i = 0; i< sum.size();i++){
        if(sum[i]== sum[i+1]) {
            sum.erase(sum.begin()+ i);
            i = i-1;
        }
    }
    // Print the sums
    for(int i : sum) cout << i << " ";
    cout << endl;


    // Find out the minimum
    if(sum[0] != 0){
            cout << 0 << endl;
    }else{
        int i = 0;
        for(; i< sum.size(); i++){
        
            if((sum[i] + 1) != sum[i+1]){
                cout << (sum[i] + 1) << endl;
                break;
            } 
        }
        if(i == sum.size()) cout << sum[i-1]+ 1 << endl;
    }
    
        
    

    return 0;
}