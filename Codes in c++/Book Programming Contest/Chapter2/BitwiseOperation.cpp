#include<iostream>
#define LOCAL
using namespace std;
int main(){
    #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int x, y ,z, i;
    cin >> x;
    cin >> y;
    cout << "X= " << x << " Y= " << y << " " << (x >> 2)<< endl;
    cout << "X and Y : " << (x&y) << endl;
    cout << "X or Y : "  << (x|y) << endl;
    cout << "X xor Y : " << (x^y) << endl;
    cout << "X << Y : " << (x << y) << endl;
    cout << "X >> Y : " << (x >> y) << endl;

    
    return 0;
}