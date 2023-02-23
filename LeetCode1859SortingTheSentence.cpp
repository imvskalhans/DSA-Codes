/*
1859. Sorting the Sentence
A sentence is a list of words that are separated by a single space with no leading or trailing spaces. Each word consists of lowercase and uppercase English letters.
A sentence can be shuffled by appending the 1-indexed word position to each word then rearranging the words in the sentence.
For example, the sentence "This is a sentence" can be shuffled as "sentence4 a3 is2 This1" or "is2 sentence4 This1 a3".
Given a shuffled sentence s containing no more than 9 words, reconstruct and return the original sentence.

*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;
//
// Created by Vishal on 2021/8/3.
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

// Driver Code
int main()
{
    string s;
    cout << "enter the string s" << endl;
    getline(cin, s);
    string result = sortSentence(s);
    cout << result;
}