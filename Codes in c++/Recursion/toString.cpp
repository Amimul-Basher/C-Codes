#include <iostream>
using namespace std;

void toString(int num){
    if(num/10 == 0 && num%10 == 0) return; 
    int temp = num%10;
    num = num/10;
    toString(num);
    cout << temp << endl;

}

int main(){
    int num;
    cin >> num;
    toString(num);
    return 0;
}