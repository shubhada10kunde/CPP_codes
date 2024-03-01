#include "ContactManager.hpp"

using namespace std;

ContactManager::ContactManager()
{
    std::cout << "\n default constructor...\n";
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
        std::cout << "first name::" << info[i].FirstName << "\tlast name::" << info[i].LastName << "\tnumber::" << info[i].number << "\temail::" << info[i].email << endl;
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
    std::cout << "\n select contact to edit:";
    int id;
    cin >> id;

    std::cout << "Enter first name::";
    cin >> info[id - 1].FirstName;

    std::cout << "\n Enter last name::";
    cin >> info[id - 1].LastName;

    std::cout << "\n enter number::";
    cin >> info[id - 1].number;

    std::cout << "\n enter new email::";
    cin >> info[id - 1].email;

    ListAllContacts();
}

/**
 * @brief function to edit first name
 */

void ContactManager::EditFirstName()
{
    std::cout << "\n select contact to edit first name:";
    int id;
    cin >> id;

    std::cout << "Enter first name::";
    cin >> info[id - 1].FirstName;

    ListAllContacts();
}

/**
 * @brief function to edit last name
 */

void ContactManager::EditLastName()
{
    std::cout << "\n select contact to edit last name:";
    int id;
    cin >> id;

    std::cout << "Enter last name::";
    cin >> info[id - 1].LastName;
    ListAllContacts();
}

/**
 * @brief function to edit phone number
 */

void ContactManager::EditPhoneNumber()
{
    std::cout << "\n select contact to edit phone number:";
    int id;
    cin >> id;

    std::cout << "Enter phone number::";
    cin >> info[id - 1].number;
    ListAllContacts();
}

/**
 * @brief function to edit email
 */

void ContactManager::EditEmail()
{
    std::cout << "\n select contact to edit email:";
    int id;
    cin >> id;

    std::cout << "Enter email::";
    cin >> info[id - 1].email;
    ListAllContacts();
}

void ContactManager::Remove()
{
    // select by id which contact u want to remove
    int id;
    std::cout << "\n Enter id of the contact to remove user::";
    cin >> id;
    // system("cls");

    if (id >= 1 && id <= info.size())
    {
        info[id - 1].FirstName = "";
        info[id - 1].LastName = "";
        info[id - 1].number = 0;
        info[id - 1].email = "";

        // points to the beginning of the vector & delete the elements from the vector
        info.erase(info.begin() + (id - 1));
        cout << "contact removed successfully.\n";
    }
    else
    {
        std::cout << "Invalid Id.No contact removed.\n";
    }
    ListAllContacts();
}

void ContactManager::RemoveFirstName()
{
    int id;
    std::cout << "\n Enter id of the contact to remove firstname::";
    cin >> id;

    if (id >= 1 && id <= info.size())
    {
        info[id - 1].FirstName = " ";
        info.erase(info.begin() + (id - 1));
    }
    ListAllContacts();
}

void ContactManager::RemoveLastName()
{
    int id;
    std::cout << "\n Enter id of the contact to remove last name::";
    cin >> id;

    if (id >= 1 && id <= info.size())
    {
        info[id - 1].LastName = "";
        info.erase(info.begin() + (id - 1));
    }
    ListAllContacts();
}

void ContactManager::RemoveNumber()
{
    int id;
    cout << "\n Enter id of the contact to remove phone number::";
    cin >> id;

    if (id >= 1 && id <= info.size())
    {
        info[id - 1].number = 0;
        info.erase(info.begin() + (id - 1));
    }
    ListAllContacts();
}

void ContactManager::RemoveEmail()
{
    int id;
    cout << "\n Enter id of the contact to remove email::";
    cin >> id;

    if (id >= 1 && id <= info.size())
    {
        info[id - 1].email = "";
        info.erase(info.begin() + (id - 1));
    }
    ListAllContacts();
}

void ContactManager::SearchFirstName()
{
    string FirstName;
    std::cout << "\n enter firstname to search contact::";
    cin >> FirstName;
    bool found = false;
    for (int i = 0; i < info.size(); ++i) // it can store the maximum size of a theoretically possible array or an object.
    {                                     // ensures that the loop can handle the maximum possible size of an object, as size_t
        if (info[i].FirstName == FirstName)
        {
            found = true;
            cout << "first name::" << info[i].FirstName << "\tlast name::" << info[i].LastName << "\tnumber::" << info[i].number << "\temail::" << info[i].email << endl;
        }

        // ListAllContacts();
    }
    if (!found)
    {
        cout << "first name not found::\n";
    }
    // ListAllContacts();
}

void ContactManager::SearchLastName()
{
    string LastName;
    std::cout << "\n enter firstname to search contact::";
    cin >> LastName;
    bool found = false;
    for (int i = 0; i < info.size(); ++i) // it can store the maximum size of a theoretically possible array or an object.
    {                                     // ensures that the loop can handle the maximum possible size of an object, as size_t
        if (info[i].LastName == LastName)
        {
            found = true;
            cout << "first name::" << info[i].FirstName << "\tlast name::" << info[i].LastName << "\tnumber::" << info[i].number << "\temail::" << info[i].email << endl;
        }

        // ListAllContacts();
    }
    if (!found)
    {
        cout << "last name not found::\n";
    }
    // ListAllContacts();
}

void ContactManager::SearchEmail()
{
    string email;
    std::cout << "\n enter phone no to search contact::";
    cin >> email;
    bool found = false;
    for (size_t i = 0; i < info.size(); ++i) // it can store the maximum size of a theoretically possible array or an object.
    {                                        // ensures that the loop can handle the maximum possible size of an object, as size_t
        if (info[i].email == email)
        {
            found = true;
            cout << "first name::" << info[i].FirstName << "\tlast name::" << info[i].LastName << "\tnumber::" << info[i].number << "\temail::" << info[i].email << endl;
        }

        // ListAllContacts();
    }
    if (!found)
    {
        cout << "email not found::\n";
    }
    // ListAllContacts();
}
void ContactManager::backup()
{
    ofstream outFile("backup.txt");
    if (outFile.is_open())
    {
        for (const auto &entry : info)
        {
            outFile << entry.FirstName << "," << entry.LastName << "," << entry.number << "," << entry.email << endl;
        }
        outFile.close();
        cout << "Backup of contact created\n";
    }
    else
    {
        cout << "Unable to Backup\n";
    }
    // backup = info;
}

// void ContactManager::restore()
// {
//     //string restFile;
//     ifstream ifFile("backup.txt");
//     while(!ifFile.eof())
//     {
//     ifFile>>info;
//     }
//     if (!ifFile.is_open())
//     {
//         cout << "could not open file\n";
//     }
// }