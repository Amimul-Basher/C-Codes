//Advantage of merging linked list is that it doesn't require extra space
// It works by changing the links. Though we lost the previous record(array, list).
#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};
typedef struct Node Node;

int is_looped(Node *first){
    Node *p, *q;
    p = first;
    q = first;
    while(p && q){
        p = p->next;
        q = q->next;
        q = q!=NULL ? q -> next: q;
        if(p==q) return 1;
    }
    return 0;
}

Node *merge_linekdlist(Node *first, Node *second){

    Node *head, *tail;
    if(first->data > second->data){
        head = second;
        second = second->next;
    }else{
        head = first;
        first = first->next;
    }
    head->next = NULL;
    tail = head;
    while(first && second){
        if(first->data < second->data){
            tail -> next = first;
            first = first->next;
            tail= tail-> next;
            tail->next = NULL;
        }else{
            tail->next = second;
            second = second-> next;
            tail = tail -> next;
            tail -> next = NULL;
        }
    }
    while(first){
        tail->next = first;
        first = first -> next;
        tail = tail->next;
        tail -> next = NULL;
    }
    while(second){
        tail->next = second;
        second = second -> next;
        tail = tail-> next;
        tail -> next = NULL;
    }
    return head;
}

void display_linkedlist(Node *first){
    Node *last;
    last = first;
    while(last){
        cout << last->data << " ";
        last = last->next;
    }
    cout << endl;
}

Node *create_linkedlist(int arr[], int n){
    // int n;
    // cin>> n;
    Node *first, *last, *t;
    first = (Node *)malloc(sizeof(Node));
    first->data = arr[0];
    first->next = NULL;
    last = first;
    for(int i = 1; i < n; i++){
        t = new Node;
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = last->next;
    }
    return first;
}

int main(){
    

    int arr[] = {2,4,6,8};
    int arr2[] = {1,3,5,7,9,11};

    Node *first, *second, *third;
    first = create_linkedlist(arr, sizeof(arr)/sizeof(arr[0]));
    second = create_linkedlist(arr2, sizeof(arr2)/sizeof(arr2[0]));

    display_linkedlist(first);
    display_linkedlist(second);

    third = merge_linekdlist(first, second);
    display_linkedlist(third);
    //The links got modifies
    display_linkedlist(first);

    cout << is_looped(first) << endl;
    

    return 0;
}