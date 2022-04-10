
// Created by amimul on ২৭/৯/২১.

// https://www.programiz.com/c-programming/c-dynamic-memory-allocation
// #include <iostream>
// #include<stdlib.h>

// using namespace  std;

// void printDynamicArray(int *ptr, int n){
//    for(int i = 0; i < n; i++){
//        printf("%d ", ptr[i]); //see the invoking style of array values
//    }
//    printf("\n");
// }
// void dynamicArraySum(int *ptr, int n){
//    int sum = 0;
//    for (int i = 0; i < n; i++){
//        sum += *(ptr+i);
//    }
//    cout << "Sum of Dynamic Array values: "<<  sum << endl;
// }
// int main(){
//    int n;
//    scanf("%d", &n);
//    int *ptr = (int*) calloc(n, sizeof(int)); // initialized the array value with 0
//    int *ptr = (int*) malloc(n*sizeof(int)); // uninitialized
//    for (int i = 0; i < n; i++){
//        scanf("%d", ptr +  i);
//    }
//    printDynamicArray(ptr, n); // don't need to mention (&) cause ptr itself is a pointer
//    dynamicArraySum(ptr, n); // for simple array this behaves the same
//    free(ptr); // should not forget to clean memory
//    return 0;
// }

// Dynamic 2d Array
// #include <iostream>

// using namespace  std;

// int main() {
//    int n, m;
//    cin >> n;
//    cin >> m;
//    int **arr = (int **) malloc(n * sizeof(int *));
//    for (int x = 0; x < m; x++) {
//        arr[x] = (int *) malloc(m * sizeof(int));
//    }
//    for(int i = 0; i < n; i++){
//        for(int j = 0; j < m; j++){
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (int i =0 ; i <n; i++){
//        for(int j =0; j< m; j++){
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
// }

// // 

// #include <iostream>

// using namespace  std;
// int *doubleTheArray(int *arr, int n){
//    for(int i = 0 ; i < n; i++){
//        arr[i] *= 2;
//    }
//    return arr;
// }
// int main(){

//    int *res, n;
//    int *arr = (int *)malloc(n * sizeof(int)); //msut allocate memory when to declare array pointer
//    scanf("%d", &n);
//    for(int i = 0; i < n; i++){
//        scanf("%d", &arr[i]);
//    }
//    res = doubleTheArray(arr, n);
//    for(int i = 0; i < n; i++){
//        printf("%d \n", res[i]);
//    }
//    return 0;
// }

// Input string as a pointer
// #include<stdio.h>
// #include<stdlib.h>

// int main() {
//    char *s,*p;

//    s = (char*) malloc(256);
//    scanf("%255s", s); // Don't read more than 255 chars
//    printf("%s", s);

//    // No need to malloc `p` here
//    scanf("%as", &p); // GNU C library supports this type of allocate and store.
//    printf("%s", p);
//    free(s);
//    free(p);
//    return 0;
// }

