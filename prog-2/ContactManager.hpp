// #include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>

struct data
{
    std::string FirstName;
    std::string LastName;
    unsigned long number;
    std::string email;
};

class ContactManager
{
public:
    std::vector<struct data> info;

    ContactManager(); // default constructor                                                    // default constructor
    // ContactManager(std::string, std::string, unsigned long, std::string); // parameterised constructor

    // member functions to add , edit , list , delete
    void Add(std::string, std::string, unsigned long, std::string);
    void ListAllContacts();

    // functions to edit contact details
    void edit();
    void EditFirstName();
    void EditLastName();
    void EditPhoneNumber();
    void EditEmail();

    // functions to delete details from the system
    void Remove();
    void RemoveFirstName();
    void RemoveLastName();
    void RemoveNumber();
    void RemoveEmail();

    void SearchFirstName();
    void SearchLastName();
    void SearchNumber();
    void SearchEmail();

    void backup();
    void restore();

    // void Display();

    // std::string FirstName;
    // std::string LastName;
    // unsigned long number;
    // std::string email;
};