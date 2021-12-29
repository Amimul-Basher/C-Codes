////
//// Created by amimul on ২৩/১০/২১.
////
//
//#include<iostream>
//#include <tuple>
//
//using namespace std;
//
//int main(){
//    pair<string, int> pair1;
//    pair1 = make_pair("Amimul", 28);   // pair declaration 1
//    cout << pair1.first << " Age: " << pair1.second << endl;
//
//    pair<int, string> pair2(1, "Amimul");  // pair declaration 2
//    pair<int, string> pair3;
//
//    int id;
//    string name; int age; double salary;
//    tie(id, name) = pair2; // To unpack the tuple(in this case pair) we can use tie
//    cout << "id: " << id << " Name: " << name << endl;
//
//    pair3 = pair2;   // pair assignment
//    cout << "pair3 id: " << pair3.first << " pair3 name: " << pair3.second << endl;
//
//    pair3 = {2, "Ayaat"}; // pair assignment
//    cout << "pair3 id: " << pair3.first << " pair3 name: " << pair3.second << endl;
//
//    // get is used to access the tuple values.
//    tuple<int, string, int, double> tuple1(1, "Amimul", 28, 15000); // tuple declaration 1
//    cout << "ID: " << get<0>(tuple1) << " Name: " << get<1>(tuple1) << " Age: " << get<2>(tuple1) << " Salary: " << get<3>(tuple1) << endl;
//
//    tuple<int, string, int, double> tuple2;
//    tuple2 = make_tuple(1, "Ayaat", 1, 2000);  // tuple declaration 2
//    cout << "ID: " << get<0>(tuple2) << " Name: " << get<1>(tuple2) << " Age: " << get<2>(tuple2) << " Salary: " << get<3>(tuple2) << endl;
//
//    tie(id, name, age, salary) = tuple1; // here tie is used to unpack the tuple
//    cout << "ID: " << id << " Name: " << name << " Age: " << age << " Salary: " << salary << endl;
//
//    tuple1.swap(tuple2); // this swaps tuple1 and tuple2 values
//    // tuple_cat function is used to concatenate two tuple
//    auto tuple3 = tuple_cat(tuple1, tuple2);
//    cout << "The new tuple elements in order are : " << endl;
//    cout << get<0>(tuple3) << " " << get<1>(tuple3) << " ";
//    cout << get<2>(tuple3) << " " << get<3>(tuple3) << endl;
//    cout << get<4>(tuple3) << " " << get<5>(tuple3) << " ";
//    cout << get<6>(tuple3) << " " << get<7>(tuple3) << endl;
//
//    return 0;
//}