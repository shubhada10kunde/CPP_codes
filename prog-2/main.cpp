#include "ContactManager.hpp"
using namespace std;

int main()
{
    ContactManager c; // default constructor called as its object created
    c.Display();
    ContactManager c1("rutu", "tatu", 654783724, "Rt@gmail.com");
    c1.Display();

    return 0;
}