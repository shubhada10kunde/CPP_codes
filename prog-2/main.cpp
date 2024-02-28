#include "ContactManager.hpp"
using namespace std;

int main()
{
    ContactManager c; // default constructor called as its object created
    // c.Display();
    // ContactManager c1("rutu", "tatu", 654783724, "Rt@gmail.com");
    // c1.Display();
    c.Add("Shubhu", "kunde", 98758638, "sk@gmail.com");
    c.Add("Ruttu", "Tate\t", 98324838, "\trt@gmail.com");
    c.Add("Vaish", "Gurav", 98908983, "vg@gmail.com");
    c.ListAllContacts();
    c.edit();
    //  c.ListAllContacts();
    c.EditFirstName();
    //  c.ListAllContacts();
    c.EditLastName();

    c.EditPhoneNumber();

    c.Remove();

    return 0;
}