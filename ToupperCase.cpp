/*
Practice
*/


#include<iostream>
using namespace std;

string toLowerCase(string s) {
        string ans;
        
        for(int i=0;i<s.size();i++)
        {char ch=s[i];
            if(ch>='a'&&ch<='z')
            {
                ch=ch-'a'+'A';
                
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