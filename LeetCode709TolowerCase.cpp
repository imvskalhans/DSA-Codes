/*
LEETCODE
709. To Lower Case
Easy
Given a string s, 
return the string after replacing every uppercase letter with the 
same lowercase letter.

 

*/
#include<iostream>
using namespace std;

string toLowerCase(string s) {
        string ans;
        
        for(int i=0;i<s.size();i++)
        {char ch=s[i];
            if(ch>='A'&&ch<='Z')
            {
                ch=ch-'A'+'a';
                
            }
            ans.push_back(ch);
        }
        return ans;
}

int main()
{
    cout<<"enter the string"<<endl;
    string s;
    getline(cin,s);
    string result=toLowerCase(s);
    cout<<result<<endl;

}