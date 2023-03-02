/*
leetcode 443. String Compression
Given an array of characters chars, compress it using the following algorithm:

*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int compress(vector<char> &chars)
{
    int n = chars.size();
    int i = 0;
    int j = 0;
    while (i < n)
    {
        int count = 0;
        while (j < n && chars[i] == chars[j])
        {
            j++;
            count++;
        }
        chars[i] = chars[i];
        i++;
        if (count > 1)
        {
            string s = to_string(count);
            for (int k = 0; k < s.size(); k++)
            {
                chars[i] = s[k];
                i++;
            }
        }
    }
    return i;
}
int main()
{
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int result = compress(chars);
    cout << result << endl;
}
/*
approach 2 wrong
int compress(vector<char>& chars) {
    //int count[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
    int count[26] = {0};
    for(char c : chars)
    {
        count[c - 'a']++;
    }
    string ans = "";
    for(int i = 0; i < 26; i++)
    {
        if(count[i] > 0)
        {
            ans += (char)('a' + i);
            if(count[i] > 1)
            {
                ans += to_string(count[i]);
            }
        }
    }
    int len = ans.length();
    for(int i =0 ; i<len; i++)
    {
        chars[i]=ans[i];
    }
    return len;
}
*/
/*
best approach
class Solution {
public:
    int compress(vector<char>& chars) {
       int i=0;
       int j=0;
       int len=chars.size();
        int count=1;
       vector<char>vx;
       while(i<len){
           for(int j=i+1;j<len;j++){
               if(chars[i]==chars[j])
                   count++;
               else
                   break;
           }
           if(count==1)
           vx.push_back(chars[i]);
           else{
               string str=to_string(count);
               vx.push_back(chars[i]);
               for(int z=0;z<str.length();z++){

                   vx.push_back(str[z]);
               }
           }
           i=i+count;
           count=1;
       }
        chars=vx;
        return chars.size();
    }
};

// anather app
class Solution {
public:
    int compress(vector<char>& chars) {
        string res = "";
        for (int i = 0; i < chars.size(); i++) {
            int len = 0;
            for (int j = i; j < chars.size(); j++) {
                if (chars[i] == chars[j]) {
                    len++;
                } else {
                    break;
                }
            }
            if (len == 1) {
                res += chars[i];
            } else {
                res += chars[i];
                res += to_string(len);
            }
            i += len - 1;
        }
        int mid = res.length();
        for (int i = 0; i < mid; i++) {
            chars[i] = res[i];
        }
        return mid;
    }
};


//approach

class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int ansIndex=0;
        int n=chars.size();
        while(i<n){
            int j=i+1;
            while(j<n && chars[i]==chars[j]){
                j++;
            }

            chars[ansIndex++]=chars[i];
            int count=j-i;
            if(count>1){
                string cnt=to_string(count);
                for(char ch:cnt){
                    chars[ansIndex++]=ch;
                }
            }
        i=j;
        }
        return ansIndex;

    }
};
*/