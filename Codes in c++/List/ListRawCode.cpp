//
// Created by amimul on 10/25/21.
//
#include <iostream>
#include <list>

using namespace std;

struct linkedlist{
    int data;
    struct linkedlist *next;
};

typedef struct linkedlist node;
void createNodes(node *temphead, int n){

    for (int i = 1; i < n; i++){
        node *temp = new node();
        temp-> data = i;
        temp->next = NULL;
        temphead->next = temp;
        temphead = temp;
    }
}

void listTraverse(node *tempHead){
    node *temp;
    temp = tempHead;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main(){
    node *head = new node();
    head-> data = 0;
    head-> next = NULL;
    createNodes(head, 10);
    cout << head->data << endl;
    listTraverse(head);
    return 0;
}

