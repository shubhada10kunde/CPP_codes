#include <iostream>
#include <cmath>
#include "MyComplex.hpp"
using namespace std;

MyComplex::MyComplex()
{
    real = 0;
    img = 0;
}
//function to print complex no
void MyComplex::print()
{
    cout << real << "+" << img << "i";
}

void MyComplex::addition(MyComplex c1, MyComplex c2)
{

    real = c1.real + c2.real;
    img = c1.img + c2.img;
}

void MyComplex::subtraction(MyComplex c1, MyComplex c2)
{
    real = c1.real - c2.real;
    img = c1.img - c2.img;
}

void MyComplex::multiplication(MyComplex c1, MyComplex c2)
{
    real = c1.real * c2.real - c1.img * c2.img;
    img = c1.real * c2.img + c1.img * c2.real;
}

void MyComplex::division(MyComplex c1, MyComplex c2)
{
    real = (c1.real * c2.real + c1.img * c2.img) / (c2.real * c2.real + c2.img * c2.img);
    img = (c1.real * c2.img + c1.img * c2.real) / (c2.real * c2.real + c2.img * c2.img);
}

void MyComplex::norm(MyComplex c1, MyComplex c2)
{
    real = sqrt(c1.real * c1.real + c1.img * c1.img);
    img = sqrt(c2.real * c2.real + c2.img * c2.img);
}

void MyComplex::complexConjugate(MyComplex c1, MyComplex c2)
{
    if (img < 0)
    {
        cout << c1.real << "+" << -c1.img << "i" << endl;
        cout << c2.real << "+" << -c2.img << "i" << endl;
    }
    else
    {
        cout << c1.real << "-" << c1.img << "i" << endl;
        cout << c2.real << "-" << c2.img << "i" << endl;
    }
}
