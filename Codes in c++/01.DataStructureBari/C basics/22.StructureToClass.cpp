#include<iostream>
using namespace std;


class Rectangle{
    private:
    int length;
    int width;

    public:
    Rectangle(int m, int n){
        this->length = m;
        this->width = n;
    }
    void changeLength(int length){
        this->length = length;
    }

    void showArea(){
        cout<< "The area of the Rectangle is "<< this->length* this->width << endl;
    }
};

int main(){
    Rectangle r(10, 5);
    r.showArea();
    r.changeLength(15);
    r.showArea();
    return 0;
}