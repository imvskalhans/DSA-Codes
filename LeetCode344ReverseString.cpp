#include<iostream>
using namespace std;

  string reverseString(string s) {
        int f=0,l=s.size()-1;
        while(f<=l)
        {
            swap(s[f++],s[l--]);
        }
        return s;
    }
     int main()
{
    string s;
    cout<<"enter the string s"<<endl;
    getline (cin, s);
    string result = reverseString(s);
    cout<<result;
}