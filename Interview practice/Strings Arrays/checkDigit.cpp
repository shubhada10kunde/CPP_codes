#include <iostream>
using namespace std;

int main()
{
    string str = "iprogrammer12sk5to7";
    for (int i = 0; i < str.length(); i++)
    {
        if (isdigit(str[i]))
        {
            cout << "index=" << i << " digit:" << str[i] << endl;
        }
        else if (isalpha(str[i]))
        {
            cout << "index=" << i << " alphabet:" << str[i] << endl;
        }
    }

    return 0;
}