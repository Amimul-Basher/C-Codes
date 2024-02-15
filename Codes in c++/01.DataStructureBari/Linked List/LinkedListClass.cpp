#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

class LinkedList{
    private:
    Node *first;
    

    public:
    int size;
    LinkedList(){
        first = NULL;
        size = 0;
    }
    LinkedList(int arr[], int size);
    void display();
    void insert(int index, int data);
    void delete_one(int index);
    int find_length();
};

LinkedList::LinkedList(int arr[], int size){
    Node *temp, *head;
    this->size = size;
    first = (Node *)malloc(sizeof(Node));
    first->data = arr[0];
    first->next = NULL;
    head = first;
    for(int i = 1; i < size; i++){
        temp = (Node *) malloc(sizeof(Node));
        temp ->data = arr[i];
        temp ->next = NULL;
        head ->next = temp;
        head = head -> next;
    }
}

void LinkedList::display(){
    Node *temp;
    temp = first;
    while(temp){
        cout << temp ->data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
void LinkedList::delete_one(int index){
    Node *head, *temp;
    head = first;
    if(index>=0 && index < size){
        if(index == 0){
            temp = first;
            first = first->next;
            delete(temp);
            size--;
        }else{
            for(int i = 1; i < index-1; i++){
                head = head -> next;
            }
            temp = head->next;
            head -> next = temp -> next;
            delete(temp);
            size--;
        }
    
    }else{
        cout << "Wrong index\n" << endl;
    }
}
    

int main(){
    int A[] = {1, 2, 3, 4};

    LinkedList linkedlist(A, sizeof(A)/sizeof(A[0]));
    linkedlist.delete_one(2);
    linkedlist.display();
}