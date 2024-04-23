#include <iostream>
using namespace std;

//Declare Object that we want to put in Queue
struct Queue{
    int size;
    int front;
    int rear;
    int *Q;
};

int isEmpty(Queue *q){
    return (q->front == -1);
}


void create(Queue *q, int sz){
    q->size = sz;
    q->front = q->rear = -1;
    q->Q = (int*)malloc(q->size * sizeof(int));
    
}

//For enque the rear steps first then insert the element
void enque(Queue *q, int value){
    cout << q->front << " " << q->rear << endl;
    int next = (q->rear+1)%q->size;
    if(next == q->front){
        cout << "Queue is Full!" << endl;
    }else{
        if(q->front == -1) q->front = 0;
        q->rear = next;
        q->Q[q->rear] = value;   
    }
}


//For deque front pointer delete first then steps to the next element
int deque (Queue *q){
    int value = 0;
    if(isEmpty(q)){
        cout << "Queue is Empty!" << endl;
        return -1;
    }else{
        value = q->Q[q->front];
        //Front and Rear equal means this is the last element
        if(q->front == q->rear){
            q->front = -1;
            q->rear = -1;
        }else{
            q->front = (q->front + 1) % q-> size;
        }
    }
    return value;
}



int main(){

    Queue q;
    // q = (Queue *)malloc(sizeof(Queue));
    create (&q, 3);
    enque(&q, 4);
    enque(&q, 5);
    enque(&q, 6);

    deque(&q);
    deque(&q);
    deque(&q);
    cout << q.front << " " << q.rear << endl;
    for(int i = 0; i<q.size; i++){
        cout << q.Q[i] << " ";
    }
    cout << isEmpty(&q);

    return 0;
}

