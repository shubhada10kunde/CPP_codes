#include <iostream>
using namespace std;

class pattern
{
public:
    int i, j, n;
    void print();
};

void pattern::print()
{
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

int main()
{
    pattern p;
    p.print();
    return 0;
}