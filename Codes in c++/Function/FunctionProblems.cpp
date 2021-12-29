// Problem Description URL: https://docs.google.com/document/d/0B6yxypVbu-QWY1Z1SFNXVWljajA/edit?resourcekey=0-oUAQjrYaTRwhsFvFKMZ4Xw#
// Created by amimul on ২৮/৯/২১.
//
// problem 05
//#include <iostream>
//#include<stdlib.h>
//
//using namespace  std;
//
//void swapFunction(int a , int b){
//    int temp = 0;
//    temp = a;
//    a = b;
//    b = temp;
//    printf("A = %d and B = %d\n", a , b);
//}
//int main(){
//    int a, b;
//    scanf("%d %d", &a , &b);
//    printf("A = %d and B = %d\n", a , b);
//    swapFunction(a, b);
//    return 0;
//}

// Problem 02
//#include <iostream>
//#include<stdlib.h>
//
//using namespace  std;
//
//void swapFunction(int *a , int *b){
//    int temp = 0;
//    temp = *a;
//    *a = *b;
//    *b = temp;
//    printf("A = %d and B = %d\n", *a , *b);
//}
//int main(){
//    int a, b;
//    scanf("%d %d", &a , &b);
//
//    swapFunction(&a, &b);
//    printf("A = %d and B = %d\n", a , b);
//    return 0;
//}

//Problem 07
//#include <iostream>
//#include<stdlib.h>
//
//using namespace  std;
//
//void evenExtractor(int arr[], int n){
//
//
//    for (int i = 0; i < n; i++){
//        if(arr[i] % 2 == 0){
//            cout << arr[i] << " " ;
//            arr[i] = 0;
//        }
//    }
//
//}
//int main(){
//    int arr[] = {1, 3, 5, 7, 8, 10};
//
//    int n = sizeof(arr)/sizeof(int);
//    evenExtractor(arr, n);
//
//    cout << "Array is always passed by reference"<< endl;
//    for (int i = 0; i< n; i++){
//        cout << arr[i] << " ";
//    }
//
//    return 0;
//}

// Problem 08
//#include <iostream>
//#include<stdlib.h>
//
//using namespace  std;
//
//void findMin(int *arr, int n){
//    int min = 12345678;
//    for(int i = 0; i < n; i++){
//        min = min > *(arr+i) ? min = *(arr+i) : min = min;
//    }
//    cout << "Min: " << min << endl;
//}
//void findMax(int *arr, int n){
//    int max = -64654654;
//    for(int i = 0;i < n; i++){
//        max = max < *(arr+i) ? max = *(arr + i): max = max;
//    }
//    cout << "Max: "<< max << endl;
//}
//int main(){
//    int *arr, n;
//    scanf("%d", &n);
//    for(int i = 0; i < n; i++){
//        scanf("%d", arr+i);
//    }
//    findMin(arr, n);
//    findMax(arr, n);
////    for(int i = 0; i < n; i++){
////        printf("%d \n", *(arr+i));
////    }
//    return 0;
//}





//int main(){
//    int *arr;
//    int *res, n;
//
//    scanf("%d", &n);
//    for(int i = 0; i < n; i++){
//        scanf("%d", arr+i);
//    }
//
//    res = doubleTheArray(arr, n);
//
//    for(int i = 0; i < n; i++){
//        printf("%d \n", *(res+i));
//    }
//    return 0;
//}

//#include <stdio.h>
//#include <time.h>
//#include <cstdlib>
//
///* function to generate and return random numbers. */
//int * getRandom( ) {
//
//    static int  r[10];
//    int i;
//
//    /* set the seed */
//    srand( (unsigned)time( NULL ) );
//
//    for ( i = 0; i < 10; ++i) {
//        r[i] = rand();
//        printf("%d\n", r[i] );
//    }
//
//    return r;
//}
//
///* main function to call above defined function */
//int main () {
//
//    /* a pointer to an int */
//    int *p;
//    int i;
//
//    p = getRandom();
//
//    for ( i = 0; i < 10; i++ ) {
//        printf("*(p + [%d]) : %d\n", i, *(p + i) );
//    }
//
//    return 0;
//}

//problem 10: sorting
//#include <bits/stdc++.h>
//#define size 50
//using namespace std;
//int *sortArray(int *arr, int n){
//    int temp  = 0;
//    for (int i =0; i < n-1; i++){
//        for(int j = i+1; j < n ; j++){
//            if(arr[i] > arr[j]){
//                temp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = temp;
//            }
//        }
//    }
//    return arr;
//}
//int main(){
//    int n, *result, arr[size];
//    cin >> n;
//    for(int i =0; i < n; i++){
//        cin >> arr[i];
//    }
//    result = sortArray(arr, n);
//    //sort(arr, arr+n);
//    for(int i = 0; i < n; i++){
//        cout << result[i] << " ";
//    }
//    return 0;
//}

//Problem 11 : isPrime()
//#include <bits/stdc++.h>
//using namespace std;
//void isPrime(int n){
//    if(n == 1){
//        cout << n << " is not prime" << endl;
//    }else{
//        int m = sqrt(n);
//        int flag = 1;
//        for(int i = 2; i <= m; i++){
//            if(n%i == 0){
//                flag = 0;
//                break;
//            }
//        }
//        if(flag){
//            cout << n << " is prime\n";
//        }else{
//            cout << n << " is not prime\n";
//        }
//    }
//
//}
//int main(){
//    int n;
//    cin >> n;
//    isPrime(n);
//    return 0;
//}

// Problem 12 generate prime to a limit
//#include <bits/stdc++.h>
//using namespace std;
//void generatePrime(int r){
//    for(int n = 2;n <= r; n++){
//        int m = sqrt(n);
//        int flag = 1;
//        for(int i = 2; i <= m; i++){
//            if(n%i == 0){
//                flag = 0;
//                break;
//            }
//        }
//        if(flag){
//            cout << n << " ";
//        }else{
//            //cout << n << " is not prime\n";
//        }
//    }
//}
//int main(){
//    int n;
//    cin >> n;
//    generatePrime(n);
//    return 0;
//}

//Problem 14: standard Deviation
//#include <bits/stdc++.h>
//using namespace std;
//double mean = 0, stdDev = 0;
//double CalcMean(int *arr, int num_of_elem){
//    for(int i = 0; i < num_of_elem; i++){
//        mean +=arr[i];
//    }
//    mean /= num_of_elem;
//    return mean;
//}
//
//double Calc_Std_Deviation(int *arr, int num_of_elem){
//    for(int i = 0; i< num_of_elem; i++){
//        stdDev += pow(arr[i] - mean, 2);
//    }
//    stdDev /=num_of_elem;
//    stdDev = sqrt(stdDev);
//    return stdDev;
//}
//int main(){
//    int n;
//
//    int *arr = new int(n);
//    cin >> n;
//    for(int i = 0; i < n; i++){
//        cin >> arr[i];
//    }
//    mean = CalcMean(arr, n);
//    stdDev = Calc_Std_Deviation(arr, n);
//    cout << stdDev << endl;
//    return 0;
//}

//Problem 16: Substring Matching
//#include <bits/stdc++.h>
//using namespace std;
//#define size 100
//int main(){
//    string a, b;
//    cin >> a;
//    cin >> b;
//    int lenA = a.length();
//    int lenB = b.length();
//    int found = 1;
//    for (int i = 0; i < lenA-(lenB-1); i++){
//        cout << "first: " <<a[i] << " " << b[0] << " last:" << a[i+(lenB-1)] << " " << b[lenB-1] << endl;
//        if(a[i] == b[0] && a[i+(lenB-1)] == b[lenB-1]){
//            found = 1;
//            for (int j = 0; j < lenB; j++){
//                cout << "compare: " << a[i+j] << " " << b[j] << endl;
//                if(a[i+j] != b[j]){
//                    found = 0;
//                    break;
//                }
//                if(j == lenB-1 && a[i+j] == b[j]){
//                    i+= lenA + 10; // exit outer loop
//                }
//            }
//        }else{
//            found = 0;
//        }
//    }
//    if(found){
//        cout << "1" << endl;
//    }else{
//        cout << "0" << endl;
//    }
//    return 0;
//}

//Problem 17: GCD / HCF highest common factor and least common multiplier(LCM)
//#include <bits/stdc++.h>
//using namespace std;
//
//int GCD(int a, int b){
//    if (b == 0){
//        return a;
//    }
//    if(a%b == 0){
//        return b;
//    }else{
//        GCD(b, a%b);
//    }
//}
//int main(){
//    int a, b;
//    cin >> a;
//    cin >> b;
//    int gcd = GCD(a, b);
//    int lcm = abs(a*b)/gcd;
//    cout << "GCD: " << gcd << endl;
//    cout << "LCM: " << lcm << endl;
//    return 0;
//}