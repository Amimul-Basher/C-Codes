#include<iostream>
// using namespace std;

struct Matrix{
    int A[10];
    int n;
};
void set(Matrix *m, int i, int j, int n){
    if(i==j){
        m->A[i] = n;
    }
}

void display(Matrix m){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(i == j) std::cout << m.A[i];
            else std::cout << 0;
        }
        std::cout << "\n";
    }
}

int main(){

    Matrix m;
    set(&m, 0,0, 5);
    set(&m, 1,1, 5);
    set(&m, 2, 2, 5);
    set(&m, 3, 3, 5);
    display(m);
    return 0;
}