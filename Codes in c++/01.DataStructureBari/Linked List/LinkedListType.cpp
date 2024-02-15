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

void display_linkedlist(Node *first){
    Node *last;
    last = first;
    do{
        cout<< last-> data << " ";
        last = last->next;
    }while(last != first);
    cout << endl;
}

Node *create_circulerlinkedlist(int arr[], int n){
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
        if(i == n-1){
            t = last;
        }
    }
    t->next = first;
    return first;
}

int main(){
    

    int arr[] = {2,4,6,8};
    int arr2[] = {1,3,5,7,9,11};

    Node *first, *second, *third;
    first = create_circulerlinkedlist(arr, sizeof(arr)/sizeof(arr[0]));
    second = create_circulerlinkedlist(arr2, sizeof(arr2)/sizeof(arr2[0]));

    display_linkedlist(first);
    display_linkedlist(second);

    cout << "Is Looped : " << is_looped(second) << endl;
    
    return 0;
}