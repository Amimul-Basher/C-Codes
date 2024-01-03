#include<iostream>
using namespace std;

#define LOCAL

struct Element{
    int row_number;
    int column_number;
    int value;
};
struct Coordinates{
    int total_rows;
    int total_columns;
    int total_elements;
    struct Element *element;
};

void print_sparse_matrix(Coordinates coordinates){
    int rem = 0; // remember the coordinate element position last got printed
    for(int i = 0 ; i < coordinates.total_rows; i++){
        
        for(int j = 0; j < coordinates.total_columns; j++){
            
            if(i == coordinates.element[rem].row_number && j == coordinates.element[rem].column_number){
                cout << coordinates.element[rem].value << " ";
                rem++; //as soon as we print one element, we woun't check for that again.
            }else cout << '0' << " ";
        }
        cout << endl;
    }
}
void print_coordinates(Coordinates coordinates){
    for(int i = 0; i < coordinates.total_elements; i++){
        cout << coordinates.element[i].row_number << " " << coordinates.element[i].column_number << " " << coordinates.element[i].value << endl;
    }
}

void input_coordinates(Coordinates *coordinates){
    for (int i = 0; i < coordinates->total_elements; i++){
        scanf("%d", &coordinates->element[i].row_number);
        scanf("%d", &coordinates->element[i].column_number);
        scanf("%d", &coordinates->element[i].value);
    }
}


Coordinates create_sparse_matrix(){
    Coordinates coordinates;
    cin >> coordinates.total_rows;
    cin >> coordinates.total_columns;
    cin >> coordinates.total_elements;
    coordinates.element = new Element[coordinates.total_elements];
    input_coordinates(&coordinates);
    
    return coordinates;
}

Coordinates sum_coordinates(Coordinates co_one, Coordinates co_two){
    Coordinates sum;
    sum.total_rows = co_one.total_rows;
    sum.total_columns = co_one.total_columns;
    sum.element = new Element[co_one.total_elements + co_two.total_elements];
    //the number of total elements is unknown
    int i = 0, j = 0, k = 0;
    while(i < co_one.total_elements && j < co_one.total_elements){
        if(co_one.element[i].row_number < co_two.element[j].row_number){
            sum.element[k++] = co_one.element[i++];
        }else if(co_one.element[i].row_number > co_two.element[j].row_number){
            sum.element[k++] = co_two.element[j++];
        }else{
            if(co_one.element[i].column_number < co_two.element[j].column_number){
                sum.element[k++] = co_one.element[i++];
            }else if(co_one.element[i].column_number > co_two.element[j].column_number){
                sum.element[k++] = co_two.element[j++];
            }else{
                sum.element[k] = co_one.element[i];
                sum.element[k++].value = co_one.element[i++].value + co_two.element[j++].value;
            }  
        }
    }
    for(; i < co_one.total_elements; i++){
        sum.element[k++] = co_one.element[i];
    }
    for(; j < co_two.total_elements; j++){
        sum.element[k++] = co_two.element[j];
    }
    sum.total_elements = k;

    return sum;
}


int main(){

    #ifdef LOCAL
    freopen("input_one.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    Coordinates co_one = create_sparse_matrix();
    print_coordinates(co_one);
    print_sparse_matrix(co_one);

    Coordinates co_two = create_sparse_matrix();
    print_coordinates(co_two);
    print_sparse_matrix(co_two);

    Coordinates sum;

    sum = sum_coordinates(co_one, co_two);

    print_coordinates(sum);
    print_sparse_matrix(sum);

    return 0;
}