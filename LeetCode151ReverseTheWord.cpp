/*
leetcode 151. Reverse Words in a String
Given an input string s, reverse the order of the words.
A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.
Return a string of the words in reverse order concatenated by a single space.
Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
string reverseWords(string s)
{
    int i = 0;
    int j = 0;
    int n = s.size();
    while (i < n)
    {
        while (i < n && s[i] == ' ')
        {
            i++;
        }
        j = i;
        while (j < n && s[j] != ' ')
        {
            j++;
        }
        reverse(s.begin() + i, s.begin() + j);
        i = j;
    }
    reverse(s.begin(), s.end());
    return s;
}
int main()
{
    string s;
    cout << "enter string" << endl;
    getline(cin, s);
    cout << reverseWords(s) << endl;
}
/*
approach: 2
   string reverseWords(string s) {
      string ans;
    string word;
    for(int i = 0; i <= s.size(); i++) {
        if(i == s.size() || s[i] == ' ') {
            if(!word.empty()) {
                if(!ans.empty()) ans = " " + ans;
                ans = word + ans;
                word.clear();
            }
        } else {
            word.push_back(s[i]);
        }
    }
    return ans;
    }
*/