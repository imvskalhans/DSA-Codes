/*
LeetCode 1309. Decrypt String from Alphabet to Integer Mapping
Given a string s formed by digits ('0' - '9') and '#' . We want to map s to English lowercase characters as follows:
Characters ('a' to 'i') are represented by ('1' to '9') respectively.
Characters ('j' to 'z') are represented by ('10#' to '26#') respectively.
Return the string formed after mapping.
It's guaranteed that a unique mapping will always exist.
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
string freqAlphabets(string s)
{
    string result;
    int size = s.size();
    for (int i = 0; i < size; i++)
    {
        if (i + 2 < size && s[i + 2] == '#')
        {
            result += 'j' + (s[i] - '0') * 10 + (s[i + 1] - '0') - 10;
            i += 2;
        }
        else
        {
            result += 'a' + s[i] - '1';
        }
    }
    return result;
}
int main()
{
    string s = "10#11#12";
    cout << freqAlphabets(s) << endl;
    return 0;
}