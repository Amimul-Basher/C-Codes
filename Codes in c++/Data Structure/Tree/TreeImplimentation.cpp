#include <bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

class Tree{
    public:
    Node* insert(Node* root, int d){
        if(root == NULL){
            return new Node(d);
        }else{
            Node* cur;
            if(d<= root->data){
                cur = insert(root->left, d);
                root->left = cur;
            }else{
                cur = insert(root->right,d);
                root->right = cur;
            }
            return root;
        }
    }
    void preOrder(Node* root){
        if(root == NULL) return;
        
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right); 
    
    }

    void postOrder(Node* root){
        if(root == NULL) return;
        postOrder(root->left);
        postOrder(root->right);
        cout << root-> data << " ";
    }

    void inOrder(Node* root){
        if(root == NULL) return;
        inOrder(root->left);
        cout << root-> data << " ";
        inOrder(root->right);
    }


    int sumTree(Node* root){
        if(root == NULL){
            return 0;
        }
        return root->data+ sumTree(root->left)+ sumTree(root->right);
    }
    int heightTree(Node* root){
        if(root == NULL) return -1;
        return max(1+heightTree(root->left), 1+heightTree(root->right));
    }
    
};


int main() {

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  
    Tree myTree;
    Node* root = NULL;
    int sum = 0, data, t;
    
    cin >> t;
    while(t--){
        cin >> data;
        root  = myTree.insert(root, data);
    }

    sum = myTree.sumTree(root);
    cout << "Sum of all elements of this tree: " << sum << endl;
    cout << "\nPreorder\n";
	myTree.preOrder(root);
    cout << "\nInorder\n";
    myTree.inOrder(root);
    cout << "\nPostorder\n";
    myTree.postOrder(root);
    cout << "\n";
    int height  = myTree.heightTree(root);
    cout << "The height of this tree is : "<< height << endl;
    return 0;
}