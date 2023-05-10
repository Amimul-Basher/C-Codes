#include<iostream>
using namespace std;

struct Student{
    string name;
    int age;
};

typedef struct Student Student;

int main(){

    //initialization
    Student amimul[2] = {{"Amimul", 28},{"Shafa",21}};

    //sizeof function returns long unsigned values
    //Structure use padding for allocating memory thats why the size is not exactly as counted
    printf("Size of the Structure is %lu\n", sizeof(amimul));

    
    //Assignment
    amimul[1].name = "Ayaat";
    amimul[1].age = 2;


    for(Student s: amimul){
        cout << "Name: "<<s.name << " Age: " << s.age << endl;
    }

    return 0;

}