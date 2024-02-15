// #include <bits/stdc++.h>
#include <iostream>
#include <string>

class ContactManager
{
public:
    ContactManager();                                                     // default constructor
    ContactManager(std::string, std::string, unsigned long, std::string); // parameterised constructor

    // member functions to add , edit , list , delete
    void Add();
    void Display();

    std::string FirstName;
    std::string LastName;
    unsigned long number;
    std::string email;
};