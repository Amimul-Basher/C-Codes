#include<iostream>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
};

void initialize(Rectangle *r, int l, int b){
    r->length = l;
    r->breadth = b;
}

void area(Rectangle r){
    cout << "Area: " << r.length*r.breadth << endl;
}

void changeLength(Rectangle *r, int length){
    r->length = length;
}

typedef struct Rectangle Rectangle;
int main(){
    Rectangle rect;
    initialize(&rect, 10, 5);
    area(rect);
    changeLength(&rect, 5);
    cout << "Structure length after changing : " << rect.length << endl;
    return 0;
}