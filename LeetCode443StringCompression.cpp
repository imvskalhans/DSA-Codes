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
approach 2
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