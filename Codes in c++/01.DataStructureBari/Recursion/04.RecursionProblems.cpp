#include<iostream>
using namespace std;

double sum(double n){
    if(n>0){
        return sum(n-1) + n;
    }
    return 0;

}
double factorial(double n){
    if(n>0){
        return factorial(n-1)*n;
    }
    return 1;
}

double power(double m, double n){
    if(n>0){
        return power(m, n-1)*m;
    }
    return 1;
}

double taylorSeries(double x, double n){
    
    if(n>1){
        return taylorSeries(x, n-1) + (power(x, n-1)/factorial(n-1));
    }
    return 1;
}

double taylorSeriesBari(int x, int n){
    static double p = 1, f = 1;
    double r;
    if(n==0) return 1;

    r = taylorSeries(x, n-1);
    p=p*x;
    f=f*n;
    return r+(p/f);

}

double taylorHorner(double x, double n){
    static double s = 1;
    
    if(n == 0) return s;
    s = 1+(x/n)*s;
    return taylorHorner(x, n-1);
    
}


int main(){
    double n = 7;
    cout << "Sum " << sum(n) << endl;
    cout << "Factorial " << factorial(n) << endl;
    cout << "Power " << power(2, 10) << endl; 
    cout << "Taylor Series " << taylorSeries(3.0, 20) << endl;
    cout << "Taylor Series solution by Bari sir " << taylorSeriesBari(3, 10)<< endl;
    cout << "Taylor Series solution by Horner's rule " << taylorHorner(3, 10)<< endl;
    return 0;
}