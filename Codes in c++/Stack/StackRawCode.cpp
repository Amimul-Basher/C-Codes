#include<iostream>
using namespace std;
#define size 5
int top = -1;
int arr[size];

void push(int n)
{
    if(top>=size-1){
        cout << "Stack overflow\n" << endl;
    }else{
        arr[++top] = n;
    }
    
}

int pop(){
    if(top >= 0){
        int n = arr[top];
        arr[top--] = 0;
        return n;
    }else{
        cout << "Stack underflow\n";
        return 0;
    } 
}
int main(){
    
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    cout << pop() << endl;
    cout << pop() << endl;
    for(int i = 0; i< size; i++){
        cout << arr[i] << " " ;
    }
    return 0;
}