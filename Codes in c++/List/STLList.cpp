//
// Created by amimul on 10/25/21.
// https://www.geeksforgeeks.org/list-cpp-stl/
#include <iostream>
#include <list>

#define size 10

using namespace std;

void showList(list<int> paramList){
    for(auto itr = paramList.begin(); itr != paramList.end(); itr++){
        cout << *itr << " ";
    }
    cout << "\n";
}

int main(){
    //List initialization 1
    int arr[size] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    list<int> list2(arr, arr+size);
    showList(list2);

    // List initialization 2
    list<int> list1 = {0,1,2,3,4,5,6,7,8,9};
    list<int>:: iterator itr = list1.begin();
    cout << *itr << endl;

//    For insertion, shift the iterator, where to insert
//    while(*++it != 0); // see the difference with (++it) and (it++)
//    cout << *it << endl;
    while(*itr != 5){
        ++itr;
        cout << *itr << " ";
    }
    list1.insert(itr, 10);
    cout << "\nprint the list after insertion\n";
    // List can be printed using for each loop as its holding single element.
    for(auto i : list1){
        cout << i << " ";
    }
    cout << endl;

    // Deletion
    auto itr2 = list1.begin();
    while(*++itr!= 10);
    list1.erase(itr);
    cout << "List after deletion: " << endl;
    showList(list1);

    list1.reverse();
    cout << "Print the list after reverseing \n";
    showList(list1);

    list1.sort();
    cout << "Print the list after sort \n";
    showList(list1);

    list1.push_back(11);
    list1.push_front(-1);
    showList(list1);

    cout << "Back Element of List: " << list1.back() << endl;
    list1.pop_back();
    cout << "Front Element of List: " << list1.front() << endl;
    list1.pop_front();
    showList(list1);

    return 0;

}

