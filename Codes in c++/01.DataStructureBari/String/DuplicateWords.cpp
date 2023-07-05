// find duplicate letters and print them in the console
#include <iostream>
using namespace std;
int main()
{
    string s = "repeating";
    int arr[26] = {0}, i;
    for (int j = 0; j < s.size(); j++)
    {
        arr[s[j] - 97] += 1;
    }
    for (i = 0; i < 26; i++)
    {
        if (arr[i] >= 2)
        {
            cout << (char)(i + 97) << endl;
        }
    }

    return 0;
}