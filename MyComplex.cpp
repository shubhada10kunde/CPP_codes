#include <iostream>
#include "MyComplex.hpp"
using namespace std;

MyComplex::MyComplex()
{
    real = 0;
    img = 0;
}

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