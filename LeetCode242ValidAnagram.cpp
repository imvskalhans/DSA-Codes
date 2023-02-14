/*

lc 242 valid anagram 
//best approach

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) 
            return false;
        int freq[26] = {0};
        for (int i = 0; i < s.size(); i++) { 
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++)
            if (freq[i]) 
                return false;
        return true;
    }
};

*/

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;


bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
       if(s.size()!=t.size())
        {
            return false;
        }
          return s==t;
        
        
    }

    int main()
{
    string s;
    cout<<"enter the string s"<<endl;
    getline (cin, s);
    string t;
    cout<<"enter the string t"<<endl;
    getline (cin, t);
    bool result = isAnagram(s,t);
    cout<<result;
}
