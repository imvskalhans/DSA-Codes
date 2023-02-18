/*

*/

#include<iostream>
#include<vector>
using namespace std;
//try2
int repeatedChar2(string s)
{
    int mini = s.size();
    int st = 0;
    int ch[26] = {0};
    for (auto &c : s) {
        ch[c - 'a']++;
    }
    for (int i = 0; i < s.size(); i++) {
        if (ch[s[i] - 'a'] == 2) {
            mini = min(mini, i - st);
            cout << "Repeated character is " << s[i] << endl;
            st = i;
        }
    }
    return abs(mini);
}

// approach two best one
int repeatedChar(string s)
{
    int l=s.size()-1;
    vector<int> ans;
    //int mini=s.size();
    for(int i=0;i<=l;i++)
    {
        for(int j=0;j<=l;j++)
        {
            if(i!=j&&s[i]==s[j])
            {
                cout<<"repeated char   "<<s[i]<<endl;
                int k=abs(j-i);
                cout<<"k   "<<k<<endl;
                ans.push_back(k);
            }
        }
    }
    return l;
}


int main()
{
    cout<<"enter the string"<<endl;
    string command;
    getline(cin,command);
    int result=repeatedChar(command);
    cout<<"index of first repeated char "<<result<<endl;
    int result2=repeatedChar2(command);
    cout<<"index of first repeated char "<<result2<<endl;
}