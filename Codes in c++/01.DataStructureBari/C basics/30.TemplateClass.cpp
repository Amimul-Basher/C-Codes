#include<iostream>
using namespace std;

template <class T>
class Arithmetic{
    private:
    T a,b;
    public:
    Arithmetic(T a, T b);
    T add();
    T sub();
};

template <class T>
Arithmetic<T>::Arithmetic(T m, T n){
    this->a = m;
    this->b = n;
}
template <class T>
T Arithmetic<T>::add(){
    return this->a + this->b;
}
template <class T>
T Arithmetic<T>::sub(){
    return this->a - this->b;
}

int main(){

    Arithmetic<double> a(5.5, 3);
    cout << a.add() << endl;
    cout << a.sub() << endl;

    return 0;
}