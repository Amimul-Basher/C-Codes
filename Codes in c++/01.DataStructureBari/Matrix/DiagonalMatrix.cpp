#include <iostream>

using namespace std;

class Diagonal
{
private:
    int *A;
    int n;

public:
    Diagonal(int n)
    {
        this->n = n;
        this->A = (int *)malloc(n * sizeof(int));
    }
    void set(int i, int j, int value);
    int get(int i, int j);
    void display();
    // Calling this destructor delays the program to be executed
    // Calling destructor runs the code in debug mode
    ~Diagonal()
    {
        delete[] A;
    }
};

void Diagonal::set(int i, int j, int value)
{
    if (i == j)
    {
        A[i - 1] = value;
    }
    else
    {
        cout << "Value can not be assigned to this index" << endl;
    }
}
int Diagonal::get(int i, int j)
{
    if (i == j)
    {
        return A[i - 1];
    }
    else
    {
        return 0;
    }
}
void Diagonal::display()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                cout << A[i - 1] << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}

int main()
{

    Diagonal diagonal(4);
    for (int i = 0; i < 4; i++)
    {
        diagonal.set(i, i, i + 1);
    }
    diagonal.display();
    cout << diagonal.get(2, 2);
    return 0;
}