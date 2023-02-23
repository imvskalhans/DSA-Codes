/*

*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

string sortSentence(string s)
{
    vector<string> words; 
    string word = "";
    for (char c : s)
    {
        if (c == ' ')
        {
            words.push_back(word);
            word = "";
        }
        else
        {
            word += c;
        }
    }
    words.push_back(word);
    string result = "";
    for (int i = 1; i <= 9; i++)
    {
        for (string w : words)
        {
            if (w[w.size() - 1] == i + '0')
            {
                result += w.substr(0, w.size() - 1) + " ";
            }
        }
    }
    return result.substr(0, result.size() - 1);

}


int main()
{
    string s;
    cout << "enter the string s" << endl;
    getline(cin, s);
    string result = sortSentence(s);
    cout << result;
}