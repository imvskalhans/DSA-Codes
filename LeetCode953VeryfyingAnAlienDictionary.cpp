/*
LeetCode 953. Verifying an Alien Dictionary
In an alien language, surprisingly they also use english lowercase letters, but possibly in a different order. The order of the alphabet is some permutation of lowercase letters.
Given a sequence of words written in the alien language, and the order of the alphabet, return true if and only if the given words are sorted lexicographicaly in this alien language.
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool isAlienSorted(vector<string>& words, string order)
{
    int size = words.size();
    if (size == 1)
    {
        return true;
    }
    vector<int> orderMap(26);
    for (int i = 0; i < 26; i++)
    {
        orderMap[order[i] - 'a'] = i;
    }
    for (int i = 0; i < size - 1; i++)
    {
        string word1 = words[i];
        string word2 = words[i + 1];
        int size1 = word1.size();
        int size2 = word2.size();
        int size = min(size1, size2);
        for (int j = 0; j < size; j++)
        {
            if (word1[j] != word2[j])
            {
                if (orderMap[word1[j] - 'a'] > orderMap[word2[j] - 'a'])
                {
                    return false;
                }
                break;
            }
            if (j == size - 1 && size1 > size2)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    vector<string> words = { "hello", "leetcode" };
    string order = "hlabcdefgijkmnopqrstuvwxyz";
    cout << isAlienSorted(words, order) << endl;
    return 0;
}
