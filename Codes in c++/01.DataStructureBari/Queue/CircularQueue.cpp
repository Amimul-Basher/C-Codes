#include <iostream>
using namespace std;


class Queue{
    private:
    int size = 0;
    int front = 0;
    int rear = 0;
    int *arr = NULL;

    public:
    Queue(int sz){
        size = sz;
        arr = new int[size];
    }
    void enque(int x);
    int deque();
    void display();
};


//if you push rear front that must be in between 0 to size.
//In This algorithm the front and rear is always behind the insetion and deletion point***
//When it starts enque it leaves the 0 index as empty

void Queue::enque(int x){
    int temp = (rear+1)%(size);
    
    if(temp==front) cout << "Queue is full\n";
    else{
        rear = temp;
        arr[rear] = x;
        cout << arr[rear] << " " << rear << endl;
    }
}

int Queue:: deque(){
    int temp = (front+1)%size;
    if(temp == rear) cout << "Queue is empty\n";
    else{
        front = temp;
        temp = arr[front];
        arr[front] = -1;
    }
    return temp;
}

void Queue:: display(){

    if(front == rear){
        cout << "Queue is empty\n";
    }else{
        int back = (rear+1)% size;
        int temp = (front + 1) % (size);

        while(temp != back){
            cout << arr[temp] << " ";
            temp = (temp + 1) % (size);
        }
        cout << endl;
    }
    
}

int main(){

    Queue q(8);
    
    q.enque(20);
    q.enque(30);
    q.enque(40);
    q.enque(50);
    q.enque(60);
    q.enque(70);
    q.enque(80);
    q.enque(90);

    // q.deque();
    // q.deque();
    // q.deque();
    // q.deque();
    // q.deque();
    // q.deque();
    // q.deque();
    // q.deque();
    
    q.display();

    return 0;
}