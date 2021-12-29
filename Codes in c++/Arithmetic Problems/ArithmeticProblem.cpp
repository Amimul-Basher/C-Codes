//
// Created by amimul on ২৬/৯/২১.
//

//problem 01

//#include <iostream>
//#include <cmath>
//using namespace std;
//int main() {
//    float x, y;
//    scanf("%f %f", &x, &y );
//    printf("Addition: %f\n", x+y);
//    printf("Subtraction: %f\n", x-y);
//    printf("Multiplication: %f\n", x*y);
//    printf("Quotient: %d\n", (int)(x/y));
//    printf("Reminder: %f\n", fmod(x, y));
//    return 0;
//}

// problem 03:

//#include <iostream>
//#include <cmath>
//using namespace std;
//int main() {
//    float y, x;
//    scanf("%f %f", &x, &y);
//
//    x = ((3.31 * (x * x)) + (2.01 * (y * y *  y)))/((7.16 * (y * y)) + (2.01 * (x * x * x)));
//    printf("X: %f", x);
//    return 0;
//}

//problem 05;

//#include <iostream>
//#include <cmath>
//using namespace std;
//int main() {
//
//    int x, y;
//    scanf("%d %d", &x , &y);
//    printf( "Incremented Value: %d\n", x+=y);
//    x-=y; // as x is incremented before.
//    printf("Decremented Value: %d\n", x-=y);
//
//    return 0;
//}

//problem 06

//#include <iostream>
//
//using namespace std;
//int main(){
//
//    int x, y;
//    scanf("%d %d", &x, &y);
//    printf("Multiplication: %d\n", x*=y);
//    x/=y;
//    printf("Division: %d\n", x/=y);
//    return 0;
//}

//problem 07

//#include <iostream>
//using namespace std;
//int main(){
//    int intValue;
//    float floatValue;
//    scanf("%d %f", &intValue, &floatValue);
//    int tempInt;
//    float tempFloat;
//    tempInt = floatValue;
//    printf("Assignment: %f assigned to an int produces %dn\n", floatValue, tempInt);
//    tempFloat = intValue;
//    printf("Assignment: %d assigned to float produces %f\n", intValue, tempFloat);
//
//    printf("Type Casting: (float)%d produces %f\n", intValue, (float)intValue);
//    printf("Type Casting: (int)%f produces %d\n", floatValue, (int)floatValue);
//
//    return 0;
//}

//problem 08

//#include <iostream>
//using namespace std;
//int main(){
//    int x, y;
//    scanf("%d %d", &x, &y);
//    cout << x << y << endl;
//    x < y ? printf("Max: %d\n", y) : printf("Max: %d\n", x);
//    return 0;
//}

//problem 09

//#include <iostream>
//using namespace std;
//int main(){
//    int x, y, z;
//    scanf("%d %d %d", &x, &y, &z);
//    int a, b, c;
//    a = x-y/3 + z * 2-1;
//    b = x-(y/(3+z)*2) -1;
//    c = x-((y/3)+ z*2) -1;
//    printf("A = %d\nB = %d\nC = %d\n", a, b, c);
//    return 0;
//}

//problem 10

//#include <iostream>
//using namespace std;
//int main(){
//    int x, y, z;
//    scanf("%d %d %d", &x, &y, &z);
//    printf("a) %d\n", (x+y)<= 80);
//    printf("b) %d\n", !(x+y));
//    printf("c) %d\n",z!= 0);
//    return 0;
//}

//problem 11
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main(){
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    float ans1, ans2;
//    ans1 = (-b+sqrt(b*b - 4 * a * c))/(2*a); //always precise the priority
//    ans2 = (-b-sqrt(b*b - 4 * a * c))/(2*a);
//    printf("%f %f\n", ans1, ans2);
//    return 0;
//}

//problem 12
//#include <iostream>
//#include<cmath>
//using namespace std;
//int main(){
//    int x ;
//    scanf("%d", &x);
//    float result = (1 + cos(2*x)) - (sqrt(3)*sin(sin(x))) + log(x/2);
//    printf("%f", result);
//    return 0;
//}

//problem 13
//
//#include <iostream>
//#include<cmath>
//using namespace std;
//int main(){
//    int x ;
//    float y;
//    double z;
//    char a;
//    printf("%d\n", sizeof(a) );
//    printf("%d\n", sizeof(x));
//    printf("%d\n", sizeof(y));
//    printf("%d\n", sizeof(z));
//    return 0;
//}

//problem 14

//#include <iostream>
//#include<cmath>
//using namespace std;
//int main(){
//    float a;
//    scanf("%f", &a);
//    printf("%f\n", floor(a));
//    printf("%f\n", ceil(a));
//    printf("%f\n", abs(a));
//
//    return 0;
//}