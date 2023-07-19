#include <iostream>
using namespace std;

void permutationString(int k, string s)
{
    static int a[25] = {0};
    static char res[10];

    if (s[k] == '\0')
    {
        res[k] = '\0';
        cout << res << " ";
    }
    else
    {
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (a[i] == 0)
            {
                res[k] = s[i];
                a[i] = 1;

                permutationString(k + 1, s);
                a[i] = 0;
            }
        }
    }
}

int main()
{
    char s[10] = "abc";
    cin >> s;

    permutationString(0, s);

    return 0;
}