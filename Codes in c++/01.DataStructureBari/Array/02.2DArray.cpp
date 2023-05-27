#include<iostream>
using namespace std;

void printDynamic2DArray(int **A){
    for(int i = 0; i <3; i++){
        for(int j = 0; j < 4; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    } 
}

void printStatic2DArray(int A[][4]){
    for(int i = 0; i <3; i++){
        for(int j = 0; j < 4; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    } 
}


int main(){
    int A[3][4] = {{1,2,3},{4,5,6},{7,8,9}};


    //Partial static and partial dynamic
    int *B[3]; //created in stack
    B[0] = new int[4]; //created in heap
    B[1] = new int[4];
    B[2] = new int[4];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            B[i][j] = j*5;
        }
    }
    // full dynamic array declaration
    int **C;
    C = (int **)malloc(3*sizeof(int)); //created in heap
    C[0] = (int *)malloc(4*sizeof(int));//created in heap
    C[1] = (int *)malloc(4*sizeof(int));
    C[2] = (int *)malloc(4*sizeof(int));

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            C[i][j] = j*5;
        }
    }

    printStatic2DArray(A);
    printDynamic2DArray(B);
    printDynamic2DArray(C);

    

    return 0;
}