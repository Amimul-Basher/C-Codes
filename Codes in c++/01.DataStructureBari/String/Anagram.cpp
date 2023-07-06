// check whether two string is anagram.
// the string must have the same set of letter with same number of occurrence
// logic: Push both string to a hashtable and check whether those hash table are similar
// update the hashtable adding numbers for each character
// then traverse through the 2nd sting and decrease number for each character

#include <iostream>
#include <cstring>
using namespace std;

int anagram(char str1[], char str2[])
{
    // this one acts like a hashtable as the letters are sequential that puts an advantage as indexes are sequential too.
    int h1[26] = {0};
    if (strlen(str1) == strlen(str2))
    {
        // convert the string to lowercase
        // putting them in hashtable
        for (int i = 0; str1[i] != '\0'; i++)
        {
            str1[i] = tolower(str1[i]);
            h1[str1[i] - 97] += 1; // subtracted by 97 to get the index number where to put the string in h1
        }
        for (int i = 0; str2[i] != '\0'; i++)
        {
            str2[i] = tolower(str2[i]);
            h1[str2[i] - 97] -= 1;
        }
        for (int i = 0; i < 26; i++)
        {
            if (h1[i] != 0)
            {
                return 0;
            }
        }
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char str1[] = "decimala";
    char str2[] = "medicala";

    (anagram(str1, str2)) ? cout << str1 << " and " << str2 << " are anagram" << endl : cout << str1 << " and " << str2 << " are not anagram" << endl;

    return 0;
}