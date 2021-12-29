#include <iostream>
// recursion follows stack
 
using namespace std;
 
 
int fact(int n)
{
    if (n== 1)
        return 1;
     else
        return n*fact(n-1);
}
 
int sum(int n)
{
    if(n== 0)
        return 0;
    else
        return n+sum(n-1);
}
 
int fibo(int n)
{
    if(n == 1)
        return 0;
    else if(n == 2)
        return 1;
    else
        return fibo(n-1)+fibo(n-2);
}
 
void func (int n)
{
    cout << "Hello" << endl;
    if(n == 20)
        return;
    func(n+1);
    cout << n;
    cout << "World"<< endl;
}
 
int main()
{
 
    int n, factn;
    int sumn;
    int fibon;
    int i;
    cout << "Input should not be greater than 10: ";
    cin >> n;
    // for (i = 1; i <= n; i++)
    // {
    //     fibon = fibo(i);
    //     cout << fibon << " " ;
    // }
 
    factn = fact(n);
    sumn = sum(n);
    //fibon= fibo(n);
    cout << endl;
    cout << sumn << endl;
    cout << factn << endl;
    //cout << fibon << endl;
    func(n);
 
}