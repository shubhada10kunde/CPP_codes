#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "enter a charachter::" << endl;
    cin >> ch;

    // if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
    // {
    //     cout << "given character is a vowel" << endl;
    // }
    // else
    // {
    //     cout << "given character is consonant" << endl;
    // }

    // using switch statement
    switch (ch)
    {
    case 'a':
        cout << "vowel" << endl;
        break;
    case 'A':
        cout << "vowel" << endl;
        break;
    case 'e':
        cout << "vowel" << endl;
        break;
    case 'E':
        cout << "vowel" << endl;
        break;
    case 'i':
        cout << "vowel" << endl;
        break;
    case 'I':
        cout << "vowel" << endl;
        break;
    case 'o':
        cout << "vowel" << endl;
        break;
    case 'O':
        cout << "vowel" << endl;
        break;
    case 'u':
        cout << "vowel" << endl;
        break;
    case 'U':
        cout << "vowel" << endl;
        break;

    default:
        cout << "consonant" << endl;
        break;
    }

    return 0;
}