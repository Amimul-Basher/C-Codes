#include "Queue.h"
#include <stack>



using namespace std;

// Declare Global variable Root Node
Node *root = NULL;

//Create root node
//Add left child and right child 
//Maintain Queue data structure to retrieve all the nodes 
void createTree(){
    Node *parent, *temp;
    //Declare Queue
    Queue q;
    create(&q, 20);

    //Create root node and insert the node in Queue
    int input;
    cout << "Enter the value of root : " ;
    cin >> input;
    root = new Node();
    root->data = input;
    root->leftChild = root-> rightChild = 0;
    enque(&q, root);
    if(isEmpty(&q)) cout << "Queue is empty !" << endl;
    else cout << q.Q[0] << endl;

    //Keep inserting the left and right child until the leaf node
    while(!isEmpty(&q)){
        parent = dque(&q);
        //Enter the left child
        cout << "Enter the left child of " << parent->data << ": ";
        cin >> input; 
        //Assume if the input is -1 then 
        if(input !=-1){
            temp = new Node();
            temp ->leftChild  = temp -> rightChild = 0;
            temp ->data = input;
            parent -> leftChild = temp;
            //Enque the node to insert child in future
            enque(&q, temp);
        }
        //Enter the right child
        cout << "Enter the right child of " << parent->data << ": ";
        cin >> input;
        if(input!= -1){
            temp = new Node();
            temp -> leftChild  = temp -> rightChild = 0;
            temp -> data  = input;
            parent -> rightChild = temp;
            //Enque the node to insert child in future
            enque(&q, temp);
        }
    }
    // cout << root->data << endl;

}

void preorder(Node *node){
    if(node){
        cout << node -> data << " ";
        preorder(node->leftChild);
        preorder(node->rightChild);
    }
}

void inorder(Node *node){
    if(node){
        inorder(node->leftChild);
        cout << node -> data << " ";
        inorder(node->rightChild);
    }
}

void postorder(Node *node){
    if(node){
        postorder(node->leftChild);
        postorder(node->rightChild);
        cout << node -> data << " ";
    }
}

void IterativePreorder(Node *node){
    stack<Node *> stk;
    Node *temp;
    temp = node;
    while(temp!= NULL || !stk.empty()){
        if(temp != NULL){
            cout << temp->data << " ";
            stk.push((temp));
            temp = temp->leftChild;
        }else{
            temp = (stk.top());
            stk.pop();
            temp = temp->rightChild;
        }
    }
}
void IterativeInorder(Node *node){
    stack<Node *> stk;
    Node *temp;
    temp = node;
    while(temp!= NULL || !stk.empty()){
        if(temp != NULL){
            
            stk.push((temp));
            temp = temp->leftChild;
        }else{
            temp = (stk.top());
            //Iterative Inorder : Before movind to the right printing the node value
            cout << temp->data << " ";
            stk.pop();
            temp = temp->rightChild;
        }
    }
}

void IterativPostorder(Node *node){
    stack<Node *> stk;
    stack<int> output;
    Node *temp;
    temp = node;
    while(temp!= NULL || !stk.empty()){
        if(temp != NULL){
            // cout << temp->data << " ";
            output.push(temp->data);
            stk.push((temp));
            //for post order you visit the right child first
            temp = temp->rightChild;
        }else{
            temp = (stk.top());
            stk.pop();
            temp = temp->leftChild;
        }
    }
    //The output you get you have to reverse it.
    while(!output.empty()){
        cout << output.top() << " ";
        output.pop();
    }
}

//for level order traversal we must use Queue (first in first out)
void levelOrderTraversal(Node *root){
    Node *temp;
    temp =root;
    Queue lq;
    create(&lq, 20);
    enque(&lq, temp);
    while(!isEmpty(&lq)){
        temp = dque(&lq);
        if(temp->leftChild != NULL) enque(&lq, temp -> leftChild);
        if(temp -> rightChild != NULL) enque(&lq, temp -> rightChild);
        cout << temp -> data << " ";
    }
    cout <<endl;
}

int countNodes(Node *root){
    if(root){
        return countNodes(root->leftChild) + countNodes(root->rightChild) + 1;
    }else{
        return 0;
    }
}
int countLeafNodes(Node *root){
    int x = 0, y = 0;
    if(root){
        x = countLeafNodes(root->leftChild);
        y = countLeafNodes(root->rightChild);
        //This is also easy to think of.
        //We will be adding +1 for those nodes who doesn't have leaf node
        //Doesn't have leaf node means the left child and right child is null.
        if(!root->leftChild && !root->rightChild){
            return x + y + 1;
        }else{
            return x + y;
        }
    }
    return 0;
}

//The height should be the return value -1
int treeHeight(Node *root){
    int x = 0, y = 0;
    if(root){
        x = treeHeight(root -> leftChild);
        y = treeHeight(root->rightChild);
        //Idea is so simple. Either we take the height from left side or right side
        //Before that we must consider that which side comes with bigger height.
        if(x>=y) return x+1;
        else return y+1;
    }else{
        return 0;
    }
}

int main(){

    createTree();
    cout << "\nPreorder represantation of tree: " << endl;
    preorder(root);
    cout << "\nInorder represantation of tree: " << endl;
    inorder(root);

    cout << "\nPostorder represantation of tree: " << endl;
    postorder(root);

    cout << "\nIterative Preorder : " << endl;
    IterativePreorder(root);
    cout << "\nIterative Inorder : " << endl;
    IterativeInorder(root);
    cout << "\nIterative Postorder : " << endl;
    IterativPostorder(root);

    cout << "\nLevel order traversal : " << endl;
    levelOrderTraversal(root);

    cout << "\nNo of nodes in the tree : " << endl;
    cout << countNodes(root) << endl;

    cout << "\nNo of leaf nodes in the tree : " << endl;
    cout << countLeafNodes(root)-1 << endl;

    cout << "\nHeight of the tree : " << endl;
    cout << treeHeight(root) << endl;

    return 0;

}