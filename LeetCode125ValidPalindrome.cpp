/*
Leetcode
125. Valid Palindrome
Easy
A phrase is a palindrome if, after converting all uppercase letters into 
lowercase letters and removing all non-alphanumeric characters, 
it reads the same forward and backward. Alphanumeric characters include 
letters and numbers.
Given a string s, return true if it is a palindrome, or false otherwise.

 
*/


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

    bool isPalindrome(string s)
    {
       string ans;
       transform(s.begin(), s.end(), s.begin(), ::toupper);
       for(int i=0;i<s.length();i++)
       {
           if((s[i]>=65&&s[i]<=90)||(s[i]>=48&&s[i]<=57))
           {
               ans.push_back(s[i]);
           }
       }
       int j=ans.size()-1;
       for(int i=0;i<ans.size();i++)
       {
           if(ans[i]==ans[j--])
           {

           }
           else
           {
               return false;
           }
       }
       return true;

        
    }

    int main()
{
    string s;
    cout<<"enter the string"<<endl;
    getline (cin, s);
    bool result = isPalindrome(s);
    cout<<result;
}