//
// Created by amimul on 10/25/21.
//
#include <iostream>
#include <list>

using namespace std;

void showList(list<int> list2){
    for(auto itr = list2.begin(); itr != list2.end(); itr++){
        cout << *itr << " ";
    }
}

int main(){
    list<int> list1 = {1,2,3,4,5,6,7};
    //traverse List
    showList(list1);
    
    auto itr = list1.begin();
    cout << *itr << endl;

    while(*itr != 5){
        itr++;
    }
    cout << *itr << endl;
    list1.insert(itr, 8);
    showList(list1);

    for(auto i: list1){
        cout << i << " " ;
    }
    list1.reverse();

    showList(list1);
    
    return 0;
}

