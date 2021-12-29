// https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/
// https://www.youtube.com/watch?v=7mwgA9XFIEQ&ab_channel=TechWithTim
#include <iostream>
#include <map>

using namespace std;

int main(){

    map <int, char> mp;
    // declaration 1
    mp = {
        {1, 'A'},
        {2, 'm'},
        {3, 'i'}
    };
    // insertion 1
    pair <int, char> p1 (4, 'm');
    mp.insert(p1);

    //insertion 2
    mp[5] = 'u';
    mp[7] = 'g';

    //insertion 3
    mp.insert(pair<int, char> (6, 'l'));
    

    // declare iterator
    map<int, char>::iterator it1;

    // i as key value
    int i = 1;
    
    // or simply can use auto 
    for(auto it = mp.begin(); it != mp.end(); ++it){
        // dereferencing and arrow to access
        cout << (*it).first << ": " << it -> second << " " << mp[i] << endl;
        i++;
    }
    mp.erase(7); // here 7 is the key value

    cout << "Program to count the letter in a string: " << endl;

    map <char, int> strmap;
    string text = "I am not sure what to input as a string";

    for (int m = 0; m < text.length(); m++){
        char letter = text[m];
    // strmap.find(keyValue) function returns an iterator of that key value position
        if(strmap.find(letter) == strmap.end()){ 
            strmap[letter] = 0;
        }
        // for this specific letter or key value the corresponding value get increased.
        strmap[letter]++;
    }

    for(auto itr = strmap.begin(); itr!= strmap.end(); itr++){
        cout << itr-> first << ": " << itr -> second << endl;
    }

    return 0;
}