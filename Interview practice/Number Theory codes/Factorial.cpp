#include <iostream>
using namespace std;

int factorial(int no)
{
    int factorial = no;
    for (int i = 1; i < no; i++)
    {
        factorial = factorial * i;
    }
    cout << "factorial of no is::" << factorial << endl;
}

int main()
{
    int no;
    cout << "enter no to find factorial::" << endl;
    cin >> no;
    factorial(no);

    return 0;
}