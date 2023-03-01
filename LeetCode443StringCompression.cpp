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