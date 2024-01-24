#include <iostream>
#include "MyComplex.hpp"
using namespace std;

int main()
{
    MyComplex c1, c2, c3;
    c1.print();

    c1.real = 10;
    c1.img = 5;
    cout << endl;
    c1.print();
    cout << endl;

    c2.real = 5;
    c2.img = 3;
    cout << endl;
    c2.print();
    cout << endl;

    c3.print();
    cout << endl;

    c3.addition(c1, c2);
    c3.print();
    cout << endl;

    c3.multiplication(c1, c2);
    c3.print();
    cout << endl;

    c3.division(c1, c2);
    c3.print();
    cout << endl;
    return 0;
}