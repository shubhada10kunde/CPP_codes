#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string str = "abbbccdghyhbc";
    unordered_map<char, int> freq; // key, value pair

    // count ferquency of each character
    // iterates over each character in the string
    for (char ch : str)
    {
        freq[ch]++; // If the character is seen for the first time, it's added to the map with a count of 1. If it's seen again, the count is incremented.
    }

    cout << "character with more than one occurence::" << endl;
    for (auto it : freq) // This loop iterates over each element in the freq map. Each element it is a pair
    {
        if (it.second > 1) // it.first is the character and it.second is the frequency count of that character.
        {
            cout << it.first << " appears " << it.second << " times" << endl;
        }
    }

    return 0;
}