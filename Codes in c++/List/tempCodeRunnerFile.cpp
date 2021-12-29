//
// Created by amimul on 10/25/21.
//
#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> list1 = {0,1,2,3,4,5,6,7,8,9};
    list<int>:: iterator it = list1.begin();
    cout << *it << endl;

//    For insertion, shift the iterator, where to insert
//    while(*++it != 0); // see the difference with (++it) and (it++)
//    cout << *it << endl;
    while(*it != 5){
        ++it;
        cout << *it;

    }
    list1.insert(it, 10);

//    print the list
    for(auto i : list1){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}

