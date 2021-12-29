#include<iostream>
#include<stack>

using namespace std;
int main(){
    stack<int> stack1;
    for(int i = 1; i < 6; i++) stack1.push(i*10);
    cout << "Stack size: " <<stack1.size() << endl;
    cout << "Stack top: " << stack1.top() << endl;
    stack1.pop();
    while(!stack1.empty()){
        cout << stack1.top() << " ";
        stack1.pop();
    } 

    cout << "Stack size: " << stack1.size() << endl;
    return 0;
}