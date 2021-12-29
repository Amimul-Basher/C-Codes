// Problem Description Link: https://docs.google.com/document/d/0B6yxypVbu-QWaW9WN1g4TlV1R0k/edit?resourcekey=0-GU0HqNcbw6vC7LH_X3JYEA
// Created by amimul on ৪/১০/২১.
//
//Problem: 03
//#include <iostream>
//using namespace std;
//int main(){
//    int n;
//    cin >> n;
//    switch(n){
//        case(1):
//            cout << "One\n";
//            break;
//        case(2):
//            cout << "Two\n";
//            break;
//        case(3):
//            cout << "Three\n";
//            break;
//        case(4):
//            cout << "Four\n";
//            break;
//        case(5):
//            cout << "Five\n";
//            break;
//        default:
//            cout << "Not less than five\n";
//    }
//    return 0;
//}
// Problem 04: Triangle or not
//#include <iostream>
//using namespace std;
//int main(){
//    int a, b, c;
//    cin >> a >> b >> c;
//    if(a == 0 || b == 0 || c == 0){
//        cout << "Not a triangle\n";
//    }else{
//        if(a+b+c == 180){
//            cout << "Triangle\n";
//        }else{
//            cout << "Not a triangle\n";
//        }
//    }
//    return 0;
//}
// Problem 06: power of two?
//#include <iostream>
//using namespace std;
//void powerOfTwo(long n){
//    if(n/2 == 1){
//        cout << "Yes" << endl;
//        return;
//    }
//    if(n%2 == 0 && ((n/2) % 2 == 0)){
//        powerOfTwo(n/2);
//    }
//    else{
//        cout << "No\n";
//        return;
//    }
//}
//int main(){
//    long n;
//    cin >> n;
//    if(n<0) cout << "Negetive number is not Valid\n";
//    else{
//        if(n == 1) cout << "Yes\n";
//        else powerOfTwo(n);
//    }
//    return 0;
//}

//Problem 07: Ascii character
//#include <bits/stdc++.h>
//using namespace std;
//int main(){
//    char c;
//
//    cin >> c;
//    int n = c;
//    if(n>=48 && n <= 57) cout << "Number\n";
//    else if((n >= 65 && n <=90 )|| (n >= 97 && n <= 122)) cout << "Alphabet\n";
//    else if((n>= 32 && n<=47)||(n>= 58 && n<= 64) || (n>= 91 && n <= 96) || (n>= 123 && n <= 126)) cout << "Special Character\n";
//    else cout << "Not a valid character\n";
//
//
////    for (int i = 0; i< 255; i++){
////        printf("%d for %c\n", i, i);
////    }
//    return 0;
//}

//Problem: leap year
//#include <bits/stdc++.h>
//using namespace std;
//int main(){
//    int n;
//    cin >> n;
//    if((n % 4 == 0) && (n % 100 != 0) || (n%400 == 0)) cout << "Leap Year\n";
//    else cout << "Not leap Year\n";
//    return 0;
//}