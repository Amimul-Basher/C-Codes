//lower Triangular matrix: column major mapping
#include <iostream>
using namespace std;

class TriangularMatrix{
    private:
    int n;
    int *A;
    public:
    TriangularMatrix(){
        this->n = 2;
        A = new int[3]();
        
    }
    TriangularMatrix(int n){
        this-> n= n;
        A = new int[(n*(n+1))/2]();
        
    }
    void set(int i, int j, int value);
    int get(int i, int j);
    void display();
};

void TriangularMatrix::set(int i, int j, int value){
    // int x = (n*(n+1))/2;
    // int y = n-j;
    // cout << (x-((y*(y+1)/2)))+(i-j) << endl;
    if(j <= i) 
        // A[(x-((y*(y+1)/2)))+(i-j)] = value;
        A[((n*j-(j*(j-1)/2))+(i-j))] = value;
}

void TriangularMatrix::display(){

    // int x = (n*(n+1))/2;
    // int y = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            // y = n-j;
            if(j <= i) {
                // cout << A[(x-((y*(y+1)/2)))+(i-j)] << " " ;
                cout << A[((n*j-(j*(j-1)/2))+(i-j))] << " ";
            }
            else cout << 0 << " ";
        }
        cout << endl;
    }

    for(int i = 0; i < 15; i++){
        cout << A[i] << " ";
    }
}

int main(){

    TriangularMatrix t(5);
    t.set(0, 0, 3);
    t.set(1, 1, 8);
    t.set(2, 0, 4);
    t.set(2, 1, 2);
    t.set(2, 2, 4);
    t.set(3, 3, 1);
    
    t.display();

    return 0;
}