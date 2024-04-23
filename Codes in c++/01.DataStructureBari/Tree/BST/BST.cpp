#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *leftChild;
    Node *rightChild;
};
typedef struct Node Node;
Node *root = NULL;

int height(Node *root){
    Node *temp;
    temp = root;
    if(!temp){
        return 0;
    }else{
        return max(height(temp->leftChild)+1, height(temp->rightChild)+1);
    }
}

Node *InorderPredecessor(Node *node){
    Node *temp;
    temp = node;
    if(temp == NULL)return NULL;
    else if(temp->rightChild == NULL) return temp;
    //For Predecessor why move to right child always?
    else{
        while(temp && temp->rightChild) temp = temp -> rightChild;
        cout << "Predecessor : " << temp->data << endl;
        return temp;
    } 
}

Node *InorderScucessor(Node *node){
    //For successor why move to right child always
    Node *temp;
    temp = node;
    if(!temp) return NULL;
    else if(temp->leftChild == NULL) return temp;
    else{
        while(temp && temp->leftChild) temp = temp -> leftChild;
        cout << "Successor : " << temp->data << endl;
        return temp;
    }
    
}


//A following tail pointer is used to insert when the searching node gets null.
void insert(int value){
    Node *tail, *temp, *head;
    head = root;
    //if to insert as a first node, create a new node and make it as root
    if(head == NULL){
        temp = new Node();
        temp->data = value;
        temp->leftChild = temp->rightChild = NULL;
        root = temp;
        return;
    }
    //Find out the right place to insert
    while(head){
        tail = head;
        if(head->data > value) head = head->leftChild;
        else if(head->data < value) head = head->rightChild;
        else return;
    }
    //Using tail pointer insert the new node. 
    temp = new Node();
    temp -> data = value;
    temp->leftChild = temp -> rightChild = NULL;
    if(tail->data > value) tail -> leftChild = temp;
    else tail->rightChild = temp;

}

int search(Node *root, int key){
    Node *temp = root;
    
    if(temp){
        //When you return a value it goes to the previous call
        //return is local not global
        if(temp->data == key) return 1;
        else{
            //Why this is important to return max think of yourself
            return max(search(temp->leftChild, key) , search(temp->rightChild, key));
        }
    }
    return 0;
}

Node *deleteNode(Node *head, int key){
    Node *temp = head, *predecessor, *successor;

    //if the temp or the next node is null then return null
    if(!temp) return NULL;
    //if the temp is the right node to delete and it's a leaf
    else if(temp->data == key &&temp->leftChild == NULL && temp ->rightChild == NULL){
        if(temp == root)
            root = NULL;
        free(temp);
        return NULL;
    }else{
        if(temp->data > key){
            temp->leftChild = deleteNode(temp->leftChild, key);
        }else if(temp->data < key){
            temp->rightChild = deleteNode(temp->rightChild, key);
        }else{
            if(height(temp->leftChild) > height(temp->rightChild)){
                successor = InorderScucessor(temp->rightChild);
                // cout << "Successor data: " << successor->data << endl;
                temp->data = successor->data;
                temp->rightChild = deleteNode(temp->rightChild, successor->data);
            }else{
                predecessor = InorderPredecessor(temp->leftChild);
                // cout << "Predecessor data: " <<  predecessor->data << endl;
                temp->data = predecessor->data;
                temp->leftChild = deleteNode(temp->leftChild, predecessor->data);
            }
        }
        return temp;
    }
}


void inorder(Node *root){
    Node *temp = root;
    
    if(temp){
        inorder(temp -> leftChild);
        cout << temp -> data << " ";
        inorder(temp -> rightChild);
    }else{
        return;
    }
}



int main(){

    insert(50);
    insert(30);
    insert(70);
    insert(20);
    insert(40);
    insert(15);
    insert(25);
    insert(60);
    insert(80);
    
    inorder(root);
    cout << endl;
    
    cout << "Search result: "<< search(root, 5) << endl;
    
    cout << "Height of BST: " << height(root) << endl;

    Node *temp;

    temp = InorderPredecessor(root);

    if(temp) cout << temp->data << endl;
    else cout << "Predecessor doesn't exist" << endl;

    deleteNode(root, 50);
    deleteNode(root, 25);
    deleteNode(root, 80);
    deleteNode(root, 40);
    deleteNode(root, 15);
    deleteNode(root, 20);
    cout << root->data <<endl;

    
    inorder(root);
    return 0;
}