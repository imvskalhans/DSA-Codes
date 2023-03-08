/*
leetcode 1910. Remove All Occurrences of a Substring
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string removeOccurrences(string s, string part)
{
    int n = s.size();
    int m = part.size();
    int i = 0;
    while (i < n)
    {
        if (s[i] == part[0])
        {
            int j = 0;
            while (j < m && i + j < n && s[i + j] == part[j])
            {
                j++;
            }
            if (j == m)
            {
                s.erase(i, m);
                n = s.size();
                i = 0;
            }
            else
            {
                i++;
            }
        }
        else
        {
            i++;
        }
    }
    return s;
}

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    string part;
    cout << "Enter the substring: ";
    cin >> part;
    cout << removeOccurrences(s, part);
    return 0;
}

/*
class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.length()!=0 && s.find(part)< s.length())
        {
            s.erase(s.find(part),part.length());
        }
        return s;
    }

};

class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n=part.size();
        int i=0;
        while(true)
        {
            i=s.find(part);
            if(i == string::npos)
            {
                break;
            }
            s.erase(i,n);
        }
        return s;
    }
};

class Solution {
public:
    string removeOccurrences(string s, string part) {

        int pos = s.find(part);
        while (pos != string:: npos){
            s.erase(pos, part.size());
            pos = s.find(part);
        }
        return s;
    }
};
*/