#include<iostream>
using namespace std;

struct Node{
    char data;
    struct Node *next;
};
typedef struct Node Node;

class Stack{
    private:
    Node *top;
    public:
    Stack(){
        top = NULL;
    }
    void push(char x);
    void pop();
    char find_top();
    int empty();
};

int Stack::empty(){
    if(top == NULL){
        return 1;
    }else{
        return 0;
    }
}


char Stack::find_top(){
    if(empty()){
        return -1;
    }else{
        return top->data;
    }
}

void Stack::push(char x){
    Node *temp;
    temp = (Node*)malloc(sizeof(Node));
    temp ->next = NULL;
    temp -> data = x;

    if(top==NULL){
        top = temp;
    }else{
        temp->next = top;
        top = temp;
    }
}

void Stack::pop(){
    Node *temp;
    temp = top;
    if(top == NULL){
        cout << "Stack underflow" << endl;
    }else{
        top = top->next;
        delete temp;
    }
}

int parenthesis_check(Stack st, string s){
    cout << s.length() << endl;
    for(int i = 0; i< s.length(); i++){
        if(s[i] == '[' || s[i] == '{' || s[i] == '('){
            st.push(s[i]);
        }
        if(s[i] == ']' || s[i] == '}' || s[i] == ')'){
            if(s[i] == ')' && st.find_top() != s[i]-1){
                cout << st.find_top() << " " << s[i] << endl;
                return 0;
            }else if(s[i] == '{' || s[i] == '[' && st.find_top() != s[i]-2){
                return 0;
            }else{
                st.pop();
            }
        }
    }
    if(st.empty()) return 1;
    else return 0;
}


int main(){

    Stack st;
    // st.push(5);
    // st.push(3);
    // st.pop();
    // cout << st.empty() << endl;
    // cout << st.find_top() << endl;
    // st.pop();

    string s = "[{(a+b)-(a-b)}]";

    cout << parenthesis_check(st, s) << endl;

    return 0;
}