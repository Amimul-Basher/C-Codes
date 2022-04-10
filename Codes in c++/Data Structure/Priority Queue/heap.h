// https://www.youtube.com/watch?v=HqPJF2L5h9U&t=1471s&ab_channel=AbdulBari

#include<vector>
#ifndef HEAP
#define HEAP
#define ninf 1e-9
using namespace std;

vector<int> vct;

void swap(int a, int b){
    int temp = vct[a];
    vct[a] = vct[b];
    vct[b] = temp;
}


int find_parent_index(int index){
    return(((index+1)/2)-1);
}
int leftchild_index(int index){
    return ((index+1)*2 - 1);
}

int rightchild_index(int index){
    return ((index+1)*2);
}   
//max heap insertion
void insert(int n){
    int parentindex;     
    vct.push_back(n);      //inserting at the end initially
    int index = vct.size()-1;  // taking its index which is last index
    while(find_parent_index(index) >= 0){
        parentindex = find_parent_index(index);
        if(vct[parentindex] < vct[index]){
            swap(parentindex, index);
        }
        index = parentindex;
    }
}

void pop(){
    int temp = vct[vct.size()-1];
    vct.erase(vct.begin()+vct.size()-1);
    vct[0] = temp;
    int index = 0;
    while(rightchild_index(index) < vct.size() || leftchild_index(index) < vct.size() ){
        int rightchildindex = rightchild_index(index);
        int leftchildindex = leftchild_index(index);
        if(vct[leftchildindex] > vct[rightchildindex] ){
            swap(index, leftchildindex); 
            index = leftchildindex;
        }else {
            swap(index, rightchildindex);
            index = rightchildindex;
        }

    }
    //return 0;
}

int top(){
    int top = vct[0];
    return top;
}

void heapsort(){
    vector<int> sortedheap(vct.size());
    
    for(int i = vct.size()-1; i >= 0; i--){
        sortedheap[i] = top();
        pop();
    }
    for(auto i : sortedheap){
        cout << i << " ";
    }
    cout << endl;
}

#endif  /*heap*/