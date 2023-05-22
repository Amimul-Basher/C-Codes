#include<iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int width;

    public:
    //constructor declaration
    Rectangle(int m, int n){
        this->length = m;
        this->width = n;
    }
    void setLength(int length){
        this->length = length;
    }
    void setWidth(int width);

    void showArea(){
        cout<< "The area of the Rectangle is "<< this->length* this->width << endl;
    }

    ~Rectangle();
    
};

//Using Scope resolution (::) we can declare function out of its Class scope 
void Rectangle::setWidth(int width){
        this->width = width;
}
Rectangle::~Rectangle(){
    cout << "Destructor" << endl;
};


int main(){
    //Class declaration and initialization
    Rectangle r(10, 5);
    r.showArea();
    r.setLength(15);
    r.setWidth(10);
    r.showArea();
    return 0;
}