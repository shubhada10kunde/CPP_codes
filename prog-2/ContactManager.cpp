#include "ContactManager.hpp"
using namespace std;

ContactManager::ContactManager()
{
    cout << "\n default constructor...\n";
    FirstName = "shubhu";
    LastName = "kunde";
    number = 9876543;
    email = "sk@gmail.com";
}
ContactManager::ContactManager(string FirstName, string LastName, unsigned long number, string email)
{
    this->FirstName = FirstName;
    this->LastName = LastName;
    this->number = number;
    this->email = email;
}
void ContactManager::Display()
{
    cout << "\n First Name::" << FirstName << "\t Last Name::" << LastName << "\t Number::" << number << "\t Email::" << email << endl;
}