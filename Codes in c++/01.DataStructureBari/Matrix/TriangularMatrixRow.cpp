//lower Triangular matrix: row major mapping
#include <iostream>
using namespace std;

class TriangularMatrix{
    private:
    int n;
    int *A;
    public:
    TriangularMatrix(){
        this->n = 2;
        A = new int[3];
    }
    TriangularMatrix(int n){
        this-> n= n;
        A = new int[(n*(n+1))/2];
    }
    void set(int i, int j, int value);
    int get(int i, int j);
    void display();
};

void TriangularMatrix::set(int i, int j, int value){

    if(j <= i) A[((((i+1)*(i+2))/2)-(i-j))-1] = value;
}

void TriangularMatrix::display(){
    cout << sizeof(A) << endl;
    cout << (n*(n+1))/2 << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j <= i) cout << A[((((i+1)*(i+2))/2)-(i-j))-1];
            else cout << 0;
        }
        cout << endl;
    }
}

int main(){

    TriangularMatrix t(4);
    t.set(0, 0, 4);
    t.set(1, 1, 4);
    t.set(2, 2, 4);
    t.set(3, 3, 4);

    t.display();

    return 0;
}