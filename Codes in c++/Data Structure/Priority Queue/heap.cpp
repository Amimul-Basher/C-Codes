#include <iostream>
#include "heap.h"

using namespace std;

int main(){
    insert(90);
    insert(50);
    insert(70);
    insert(40);
    insert(10);
    insert(100);
    insert(5);
    insert(150);

    pop();
    pop();
    pop();

    heapsort();
    for(auto i : vct){
        cout << i << " " ;
    }
    cout << endl;

    return 0;
}