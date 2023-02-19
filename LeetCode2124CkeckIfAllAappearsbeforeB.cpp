/*

*/

#include<iostream>
using namespace std;

  bool checkString(string s) {
        int j=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='b')
            {
              j=i;
            break;  
            }
            
        }
        cout<<j<<endl;
        for( ;j<s.size();j++)
        {
            if(s[j]=='a')
            {
                return false;
            }
        }
        return true;
        
    }

    int main()
{
    string s;
    cout<<"enter the string s"<<endl;
    getline (cin, s);
    bool result = checkString(s);
    cout<<result;
}