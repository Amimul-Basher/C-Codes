#include <iostream>
using namespace std;

void recursiveoutput(int n){
    int temp = n % 10;
    

    if(n/10 == 0 && n%10 == 0){
        return;
    }
    
    n = n/10;
    recursiveoutput(n);
    cout << temp << " ";
    
}

int main(){
    int n; 
    cin >> n;
    recursiveoutput(n);

    return 0;
}