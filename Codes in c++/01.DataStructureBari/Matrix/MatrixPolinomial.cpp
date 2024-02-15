#include<iostream>
#include<math.h>
#define LOCAL
using namespace std;

struct List{
    int coefficient;
    int power;
};
struct Polinomial{
    int total_coefficient;
    List *list;
};


int evaluate_polinomial(Polinomial polinomial, int x){
    int sum = 0;
    for(int i = 0; i<polinomial.total_coefficient;i++){
        sum+= (polinomial.list[i].coefficient*(pow(x, polinomial.list[i].power)));
    }
    return sum;
}

void display_polinomial(Polinomial polinomial){
    cout << "Total non zero coefficient of Polinomial : " << polinomial.total_coefficient << endl;
    int temp = polinomial.list[0].power;
    for(int i  = 0; i < polinomial.total_coefficient; i++){
        if(polinomial.list[i].power == temp){
            cout << polinomial.list[i].coefficient << " " << polinomial.list[i].power << endl;
            temp--;
        }else{
            while(polinomial.list[i].power != temp){
                cout << "0 0" << endl;
                temp--;
            }
            cout << polinomial.list[i].coefficient << " " << polinomial.list[i].power << endl;
            temp--;
        }
    }
}

Polinomial create_polinomial(){
    Polinomial polinomial;
    cin >> polinomial.total_coefficient;
    int power = 0, coefficient = 0;
    polinomial.list = new List[polinomial.total_coefficient];
    for(int i = 0; i < polinomial.total_coefficient; i++){
        cin >> coefficient;
        cin >> power;
        polinomial.list[i].coefficient = coefficient;
        polinomial.list[i].power = power;
    }
    return polinomial;
}

int main(){
    #ifdef LOCAL
    freopen("MatPolInput.txt","r",stdin);
    freopen("MatPolOutput.txt","w",stdout);
    #endif

    Polinomial polinomial_one, Polinomial_two;
    polinomial_one = create_polinomial();

    display_polinomial(polinomial_one);
    cout << evaluate_polinomial(polinomial_one, 5) << endl;


    return 0;
}