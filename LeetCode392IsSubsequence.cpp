/*

*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool isSubsequence(string s, string t) {
         int i = 0, j = 0;
    while (i < s.length() && j < t.length()) {
        if (s[i] == t[j]) {
            i++;
        }
        j++;
    }
    return i == s.length();
        
}

int main()
{
    string s;
    cout<<"enter the string s"<<endl;
    getline (cin, s);
    string t;
    cout<<"enter the string t"<<endl;
    getline (cin, t);
    bool result = isSubsequence(s,t);
    cout<<result;
}