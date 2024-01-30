#include<iostream>
// #define LOCAL
using namespace std;



struct Node{
    int data;
    Node *next;
};
typedef struct Node Node;

Node *deletion(Node *first, int index);

bool searching (Node *first, int num){
    while(first){
        if(first->data == num) return true;
        first = first ->next;
    }
    return false;
}

int recursive_maximum(Node *first){
    if(first == NULL) return INT16_MIN;  //some special assignment :)
    int max = recursive_maximum(first->next);
    return max<first->data? first->data:  max; 
}

int find_maximum(Node *first){
    int max = -1111111;
    while(first){
        if(max < first->data){
            max = first->data;
        }
        first = first->next;
    }
    return max;
}


int counting_nodes(Node *first){
    
    if(first != NULL){
        return counting_nodes(first->next) + 1;
    }
    return 0;
}
int sum_linkedlist(Node *first){
    
    if(first == NULL) return 0;
    return sum_linkedlist(first->next) + first->data;
}

void display(Node *first){
    Node *last;
    last = first;
    while(last != NULL){
        cout << last->data << " ";
        last = last->next;
    }
}


void recursive_display(Node *first){
    if(first != NULL){
        cout << first->data << " ";
        recursive_display(first->next);
    }
}

Node *reverse(Node *first){
    //reversing linked list using sliding pointers
    Node *p, *q, *r;
    p = first;
    q =NULL;
    r = NULL;
    while ( p!= NULL){
        r = q;
        q = p;
        p = p-> next;
        q -> next = r;
    }
    return q;
}


Node *duplicate_deletion(Node *first){
    Node *temp, *tail;
    tail = NULL;
    temp = first;
    int x=0;
    while (temp -> next != NULL){
        if(temp->data != temp -> next -> data){
            tail  = temp;
            temp  = temp -> next;
        }else{
            tail->next = temp -> next;
            temp = tail -> next;
        }
    }
    return first;
}

int is_sorted(Node *first, int ascending){
    Node *temp;
    temp = first;

    while(temp -> next != NULL){
        if(!((temp->data >= temp ->next ->data) ^ ascending)){
            return 0;
        }
        temp = temp -> next;
    }
    return 1;
}

Node *deletion(Node *first, int index){
    Node *temp, *tail;
    int x, i;
    temp = first;
    tail = NULL;
    //if wrong index comes, do nothing
    if(index < 0 || index >counting_nodes(first)){
        cout << "Invalid index input" << endl;
        return first;
    }
    //for first item deletion
    if(index == 0){
        x = first->data;
        first = first->next;
        
    }else{
        for(i = 0; i < index-1; i++){
            tail = temp;
            temp = temp -> next;
        }
        tail->next = temp -> next;
        x = temp-> data;
        
    }
    //free temp
    delete temp;
    return first;
}

Node *insertion(Node *first, int index, int value){
    //if wrong index comes, do nothing
    if(index < 0 || index >counting_nodes(first)){
        cout << "Invalid index input" << endl;
        return first;
    }
    Node *head, *temp;
    //Must allocate memory for new node
    temp = (Node *)malloc(sizeof(Node));
    head = first;
    temp->data = value;
    temp->next = NULL;
    //If I change in the first node I must return that in main method as its not declared as global
    if(index == 0){
        temp -> next = first;
        first = temp;
    }else{
        for(int i =0; i < index-1; i++){
            head = head -> next;
        }
        temp -> next = head -> next;
        head -> next = temp;
    }
    return first;
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
    
    #ifdef LOCAL
    freopen("Linkedlist.txt","r",stdin);
    freopen("LlistOutput.txt","w",stdout);
    #endif
    // int arr[] = {1, 2, 3, 4, 5};
    //to check the sorted descending
    int arr[] = {5, 4, 4, 4, 3, 2, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    Node *first;
    first = create_linkedlist(arr, n);
    
    display(first);
    cout << endl;
    cout << endl;
    cout << "Number of elements: " << counting_nodes(first) << endl;
    cout << "Sum linkedlist: " << sum_linkedlist(first) << endl;
    cout << "Maximum number: " << find_maximum(first) << endl;
    cout << "Recursive way to max: " << recursive_maximum(first) << endl;
    cout << "Ten found in the list: " << searching(first, 10) << endl;

    // first = insertion(first, 5, 77);

    display(first);
    cout << endl;
    
    first = deletion(first, 2);
    first = duplicate_deletion(first);
    
    recursive_display(first);
    if(is_sorted(first, 0)){
        cout << "Sorted" << endl;
    }else{
        cout << "Not Sorted" << endl;
    }
    first = reverse(first);
    
    display(first);
    return 0;
}