#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
    string str = "iprogrammer";

    for (int i = 0; i < str.length(); i++)
    {
        if (i % 2 != 0 && islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
    }
    cout << str << endl;

    return 0;
}
