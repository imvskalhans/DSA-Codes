/*
Leetcode 345

*/
#include<iostream>
using namespace std;

    string reverseVowels(string s) {
   int i = 0, j = s.size() - 1;
        while (i < j) {
            if (isVowel(s[i]) && isVowel(s[j])) {
                swap(s[i], s[j]);
                i++;
                j--;
            } else if (isVowel(s[i])) {
                j--;
            } else {
                i++;
            }
        }
        return s;
    }
    
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }


/*

few test case fails


class Solution {
public:
    string reverseVowels(string s) {
        //transform(s.begin(),s.end(),s.begin(),::tolower);
        int i=0;
        for(;i < s.size();i++) {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') {
                int j=i+1;
                for(;j > s.size();j--) {
                    if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U') {
                        swap(s[i],s[j]);
                        break;
                    }
                }
                //i=j;
            }
        }
        return s;
    }
};
*/

 int main()
{
    string s;
    cout<<"enter the string s"<<endl;
    getline (cin, s);
    string result = reverseVowels(s);
    cout<<result;
}