#ifndef Queue_h
#define Queue_h

#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node{
    int data;
    Node *leftChild;
    Node *rightChild;
};

struct Queue{
    int size;
    int front;
    int rear;
    Node **Q;
};


int isEmpty(Queue *q){
    return q->front == -1;
}

void create(Queue *q, int sz){
    q->size = sz;
    q->front = q->rear = -1;
    q->Q = (Node **)malloc(q->size * sizeof(Node *));
    
}

void enque(Queue *q, Node *value){
    // cout << q->front << " " << q->rear << endl;
    int next = (q->rear+1)%q->size;
    if(next == q->front){
        // cout << "Queue is Full!";
    }else{
        if(q->front == -1) q->front = 0;
        q->rear = next;
        q->Q[next] = value;
    }
}

Node *dque (Queue *q){
    Node *node = NULL;
    if(isEmpty(q)){
        cout << "Queue is empty!" << endl;
        return NULL;
    }else{
        // cout << q->front << q->rear << endl;
        node = q->Q[q->front];
        //For the last element deletion
        if(q->front == q->rear){
            q->front = -1;
            q->rear = -1;
        }else{
            q->front = (q->front + 1) % q-> size;
        }
    }
    return node;
}
#endif