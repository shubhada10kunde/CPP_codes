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
    ContactManager(); // default constructor                                                    // default constructor
    // ContactManager(std::string, std::string, unsigned long, std::string); // parameterised constructor

    // member functions to add , edit , list , delete
    void Add(std::string, std::string, unsigned long, std::string);
    void ListAllContacts();
    void edit();
    void del();
    void list();
    void search();

    void Display();
    // std::string FirstName;
    // std::string LastName;
    // unsigned long number;
    // std::string email;
    std::vector<struct data> info;
};