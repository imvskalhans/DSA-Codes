/*

*/

#include<iostream>
using namespace std;
//approach one
int firstUniqChar(string s)
{
    int l=s.size()-1;
    int i=0,j=0;
    for(i=0;i<=l;i++)
    {
        for(j=0;j<=l;j++)
        {
            if(i!=j&&s[i]==s[j])
            {
                break;
            }
        }
        if(j==l+1)
        {
            return i;
        }
    }
    return -1;
}
// approach two best one
int firstUniqChar2(string s)
{
    int l=s.size()-1;
    int ch[26]={0};
    for(auto &c : s)
    {
        ch[(c-'a')]++;
    }
    for(int i=0;i<=l;i++)
    {
        if(ch[s[i]-'a']==1)
        {
            cout<<"character is "<<s[i]<<endl;
            return i;
        }
    }
    return -1;
}


int main()
{
    cout<<"enter the string"<<endl;
    string command;
    getline(cin,command);
    int result=firstUniqChar(command);
    cout<<"index of first unique char "<<result<<endl;
    int result2=firstUniqChar2(command);
    cout<<"index of first unique char "<<result2<<endl;
}