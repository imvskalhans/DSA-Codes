#include<iostream>
//#include<string>

using namespace std;

string reverseString(string s, int i , int n)
{
    //base condition
    if(i>n-i)
   {
    return s;
   } 
    swap(s[i],s[n-i]);
   // cout <<s<<endl;
    return reverseString(s,i+1,n); 
}

int main()
{
    string s;
    cout<<"enter the string s"<<endl;
    getline (cin, s);
    int i=0,n=s.size()-1;

    string s2 =reverseString(s,i,n);
    cout<<s2;
}