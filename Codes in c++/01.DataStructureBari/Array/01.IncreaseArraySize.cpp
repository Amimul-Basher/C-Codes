#include<iostream>
using namespace std;
int main(){
    int n = 5, extend = 10;
    int *parr = 0;
    parr = (int*)malloc(n*sizeof(int));
    for(int i= 0; i<n; i++){
        parr[i] = i;
    }

    //Let's increase the array size
    int *qarr = (int *)malloc(extend*sizeof(int));
    for(int i = 0; i< extend; i++){
        qarr[i] = i;
    }

    // free(parr);
    delete [] parr;

    parr = qarr;
    qarr = NULL;


    for(int i= 0; i<extend; i++){
        cout << parr[i] << " ";
    }
    return 0;
}