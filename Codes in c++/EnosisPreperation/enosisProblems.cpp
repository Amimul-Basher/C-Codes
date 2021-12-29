//
// Created by amimul on ৪/১০/২১.
//problem 01:
//#include <bits/stdc++.h>
//using namespace std;
//int main(){
//    int i = 1,flag = 0;
//    while(i){
//        cout << i << " ";
//        if(i >= 10) flag = 1;
//        if(flag) i--;
//        else i++;
//    }
//    return 0;
//}

// Problem 02:
//#include <bits/stdc++.h>
//using namespace std;
//string reverseFunction(string str, int len){
//    int temp = 0, j = 0;
//
//    for(int i = 0; i< len/2;i++){
//        j = len-(i+1);
//        temp = str[i];
//        str[i] = str[j];
//        str[j] = temp;
//    }
//    return str;
//}
//int main(){
//    string str;
//
//    cin >> str;
//    int len = str.length();
//    str = reverseFunction(str, len);
//    cout << str << endl;
//}

//Problem 03:
//#include <bits/stdc++.h>
//using namespace std;
//void threeMultiples(int n){
//    int flag = 0;
//    while(n>= 0){
//        if(flag == 0){
//            while(n%3 != 0) n--;
//            if(n%3 == 0) flag =1;
//        }else{
//            cout << n << " ";
//            n-= 3;
//        }
//    }
//}
//int main(){
//    threeMultiples(300);
//    return 0;
//}

// Problem 04:
//#include <bits/stdc++.h>
//using namespace std;
//int main(){
//    int realtime, mirrortime;
//    cin >> mirrortime;
//    if(mirrortime == 12){
//        realtime = 12;
//    }else if(mirrortime == 6){
//        realtime = 6;
//    }else if(mirrortime > 6 && mirrortime < 12){
//        realtime = mirrortime -((mirrortime-6)*2);
//    }else if(mirrortime < 6 && mirrortime >0){
//        realtime = mirrortime + ((6-mirrortime) *2 );
//    }else{
//        cout << "Invalid input!\n";
//    }
//    cout << realtime << endl;
//    return 0;
//}