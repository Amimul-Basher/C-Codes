#include <iostream>
#include<queue>

using namespace std;
int main(){
    queue<int> queue1;
    for(int i = 1; i < 6; i++) queue1.push(i*10);
    cout << "Queue size: " << queue1.size() << endl;
    cout << "Queue Front: " << queue1.front() << endl;
    queue1.pop();
    cout << "Queue Front: " << queue1.front() << endl;
    while(!queue1.empty()){
        cout << queue1.front() << " " ;
        queue1.pop();
    }
    return 0;
}