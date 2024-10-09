#include <iostream>
using namespace std;

int reverseOfDigit(int digit)
{
    int sum = 0;
    while (digit != 0)
    {
        int mod = digit % 10;
        sum = sum * 10 + mod;
        digit = digit / 10;
    }
    return sum;
}

int main()
{
    int digit;
    cout << "enter digit" << endl;
    cin >> digit;

    cout << "reverse of digit::" << reverseOfDigit(digit) << endl;
    return 0;
}