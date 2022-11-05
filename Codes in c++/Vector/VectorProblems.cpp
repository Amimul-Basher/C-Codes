//
// Created by amimul on ৮/১০/২১.
//
// Check the vector details at : https://www.geeksforgeeks.org/vector-in-cpp-stl/


#include<bits/stdc++.h>
#define SIZE 10   // if the size is 3 only then having problem with erase function
using namespace std;
int main(){
   vector<int> vctr1;

   vector<string> vctr2 = {"My", "name", "is", "Amimul", "Basher"};
   cout << "Vector size: " << vctr2.size() << endl;
   cout << "Vector max_size: " << vctr2.max_size() << endl;
   cout << "Vector capacity: " << vctr2.capacity() << endl;



   for(string i : vctr2) cout << i << " ";
   cout << endl;

   // Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
   auto address = vctr2.data();
   cout << "Address" << address << endl;


   // function begin returns the initial pointing address of the first element of that vector.
   // Returns an iterator referring to the past-the-end element in the vector container.
   // The past-the-end element is the theoretical element that would follow the last element in the vector.
   // It does not point to any element, and thus shall not be dereferenced.
   // end() Returns an iterator pointing to the theoretical element that follows the last element in the vector




   auto ending = vctr2.end();
   auto begining = *vctr2.begin();

   //you can simply check the type name using typeid
   cout << typeid(ending).name()<< endl;

   cout << "First Element: "<< begining << endl;
   cout << "Vector Front: "<<vctr2.front() << endl;
   cout << "Vector Back: " << vctr2.back() << endl;



   cout << "Printing in order: " << endl;
   for( auto str = vctr2.begin(); str != vctr2.end(); str++){
       cout << *str << " ";
   }

   // end() Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector
   // (considered as reverse end)
   cout << "\nReverse order: \n";
   for( auto str = vctr2.rbegin(); str != vctr2.rend(); str++){
       cout << *str << " ";
   }

   cout << endl;
   for(int i =0; i< SIZE; i++){
       vctr1.push_back(i);
   }

   for(int i = 0; i < SIZE; i++){
       cout << vctr1[i] << " ";
   }

   cout << endl;
   for(int i = 0; i < SIZE; i++){
       if(vctr1[i] % 2 == 0){
           cout << vctr1[i] << endl;
           vctr1.erase(vctr1.begin()+i);
       }
   }

   cout << "End Printing" << endl;
   cout << endl;

   for(auto i = vctr1.begin(); i != vctr1.end(); i++){
       cout << *i << " ";
   }

   cout << endl;
   // Easy way to print vector element
   for(int i: vctr1){
       cout << i << " ";
   }

   cout << endl;

    int n = 10;
    //initialization
    vector<int> v(n,5);
    for (int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    cout << endl;
    //initialization
    //initializing 2 array as vector and sorting them according to the first array
    vector<array<int,2>> v2(n);

    for(int i = 0; i < n; i++){
        if(i%2 ==0){
            v2[i][0] = i*10+5;
        }else{
            v2[i][0] = i*25-7;
        }
    }
    for(int i = 0; i < n; i++){
        if(i%2 ==0){
            v2[i][1] = i*100+5;
        }else{
            v2[i][1] = i*20-7;
        }
        
    }

    sort(v2.begin(), v2.end());
    for(int i = 0; i < n; i++){
        cout << v2[i][0] << " " << v2[i][1]<< endl;
    }


   return 0;
}