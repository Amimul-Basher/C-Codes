#include<iostream>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);

    int x, y ,z, i;
    cin >> x;
    cin >> y;
    cout << "X= " << x << " Y= " << y << endl;
    cout << "X and Y : " << (x&y) << endl;
    cout << "X or Y : "  << (x|y) << endl;
    cout << "X xor Y : " << (x^y) << endl;
    


    return 0;
}