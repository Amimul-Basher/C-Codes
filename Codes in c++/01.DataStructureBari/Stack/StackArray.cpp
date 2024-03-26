#include<iostream>
using namespace std;

class Stack{
    private:
    int size;
    int top;
    int *arr;
    
    public:
    Stack(){
        size = 0;
        top = -1;
        arr = (int *)malloc(size * sizeof(int));

    }
    Stack(int st_size){
        size = st_size;
        top = -1;
        arr = (int *)malloc(size * sizeof(int)); 
    }

    void push(int x);
    void pop();
    int find_top();
    int is_empty();
    int is_full();
};

int Stack::is_empty(){
    if(top==-1){
        return 1;
    }else{
        return 0;
    }
}
int Stack::is_full(){
    if(top == size-1) return 1;
    else return 0;
}
int Stack::find_top(){
    if(is_empty() == 1){
        return -1;
    }else{
        return arr[top];
    }
}
void Stack::push(int x){
    if(!is_full()){
        arr[++top]= x;
        
    }else{
        cout << "Stack overflow" << endl;
    }
}
void Stack::pop(){
    if(!is_empty()){
        arr[top] = 0;
        top--;
    }else{
        cout<< "Stack underflow" << endl;
    }
}

int main(){
    Stack st(5);
    st.push(5);
    st.pop();
    st.push(6);
    st.push(3);
    st.push(1);
    st.push(2);
    st.push(10);
    st.push(9);
    cout << st.find_top() << endl;
    cout << st.is_empty() << endl;
    cout << st.is_full() << endl;
    return 0;
}