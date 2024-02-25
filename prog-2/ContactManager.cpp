#include "ContactManager.hpp"
using namespace std;

ContactManager::ContactManager()
{
    cout << "\n default constructor...\n";
    // FirstName = "shubhu";
    // LastName = "kunde";
    // number = 9876543;
    // email = "sk@gmail.com";
}
// ContactManager::ContactManager(string FirstName, string LastName, unsigned long number, string email)
// {
//     this->FirstName = FirstName;
//     this->LastName = LastName;
//     this->number = number;
//     this->email = email;
// }

// void ContactManager::Display()
// {
// cout << "\n First Name::" << FirstName << "\t Last Name::" << LastName << "\t Number::" << number << "\t Email::" << email << endl;
//}

void ContactManager::Add(string FirstName, string LastName, unsigned long number, string email)
{
    struct data temp;
    temp.FirstName = FirstName;
    temp.LastName = LastName;
    temp.number = number;
    temp.email = email;
    info.push_back(temp);
}

/**
 * @brief function to print all contact information in the system
 */

void ContactManager::ListAllContacts()
{
    for (int i = 0; i < info.size(); i++)
    {
        cout << "first name::" << info[i].FirstName << "\tlast name::" << info[i].LastName << "\tnumber::" << info[i].number << "\temail::" << info[i].email << endl;
    }
}

/**
 * @brief function to edit contacts in the system
 */

void ContactManager::edit()
{
    // list function call to show total contacts in the system
    // ListAllContacts();

    // select which contact we want to edit
    cout << "\n select contact to edit first name:";
    int id;
    cin >> id;

    cout << "Enter first name::";
    cin >> info[id - 1].FirstName;

    cout << "\n Enter last name::";
    cin >> info[id - 1].LastName;

    cout << "\n enter number::";
    cin >> info[id - 1].number;

    cout << "\n enter new email::";
    cin >> info[id - 1].email;
}

/**
 * @brief function to edit first name
 */

void ContactManager::EditFirstName()
{
    cout << "\n select contact to edit:";
    int id;
    cin >> id;

    cout << "Enter first name::";
    cin >> info[id - 1].FirstName;
}