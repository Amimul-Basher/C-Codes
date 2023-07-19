// make the word either in upper case or lower case based on the first letter
#include <iostream>

using namespace std;

char *nutralCase(char s[])
{
    if (s[0] >= 65 && s[0] <= 90)
    {
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] >= 97 && s[i] <= 122)
                s[i] -= 32;
        }
    }
    else
    {
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] >= 67 && s[i] <= 90)
                s[i] += 32;
        }
    }

    return s;
}

int main()
{
    char s[] = "welcOme";
    char *ns = nutralCase(s);
    cout << ns << endl;
    return 0;
}