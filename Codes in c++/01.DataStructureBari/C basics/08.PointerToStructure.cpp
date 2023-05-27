#include <iostream>
using namespace std;

struct Rectangle{
    int length;
    int width;
};
typedef struct Rectangle Rectangle;

int main(){
    Rectangle rectangle = Rectangle{10,4};
    // Rectangle *pointer = &rectangle;
    Rectangle *pointer = 0; //assigns null values
    pointer = &rectangle; 

    // p.length will not print the value but *p.length helps
    // again for dot precedence it will consider p. if not first bracket used
    cout << (*pointer).length<< endl;
    cout << pointer -> width << endl; 




    // Dynamic structure creation in the heap memory
    Rectangle *rect; //Struct variable declared in stack memory
    // rect = new Rectangle;    //c++
    rect = (Rectangle*)malloc(sizeof(Rectangle)); //malloc returns a void / generic pointer

    rect-> length = 10;
    rect->width = 4;
    cout << "Area: " << rect->length * rect->width << endl;
    return 0;
}