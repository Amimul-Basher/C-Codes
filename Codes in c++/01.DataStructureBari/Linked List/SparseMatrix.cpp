#include<iostream>
#define LOCAL
using namespace std;
struct Node{
    int column;
    int data;
    struct Node *next;
};
typedef struct Node Node;

void display(Node *SM[]){
    Node *p;
    for(int i = 0;i < 5; i++){
        p = SM[i];
        for(int j = 0; j< 4; j++){
            if(p!= NULL && p->column == j){
                cout << p->data << " ";
                p = p->next;
            }else{
                cout << "0" << " ";
            }
        }
        cout << endl;
    }
}


int main(){
    #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    #endif
    int arr[5][4];
    for(int i = 0;i < 5; i++){
        for(int j = 0; j< 4; j++){
            cin >> arr[i][j];
        }
    }

    Node *SM[5], *temp, *p;
    for(int i = 0; i< 5; i++){
        for(int j = 0; j < 4; j++){
            if(arr[i][j]!= 0){
                if(SM[i] == NULL){
                    temp = new Node;
                    temp->column = j;
                    temp ->data = arr[i][j];
                    temp -> next = NULL;
                    SM[i] = temp;
                    p = temp;
                }else{
                    temp = new Node;
                    temp->column = j;
                    temp ->data = arr[i][j];
                    temp -> next = NULL;
                    p->next = temp;
                    p = p->next;
                }
            }
            
        }
        
    }
    display(SM);
    
    return 0;
}