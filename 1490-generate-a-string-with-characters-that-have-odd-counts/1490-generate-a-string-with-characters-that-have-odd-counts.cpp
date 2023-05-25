class Solution {
public:
    string generateTheString(int n) {
    string ans;
    // Repeat a character an n-1 number of times
    for (int i = 0; i < n-1; i++) 
    {
        ans += 'a';
    }
    return (n%2 == 0) ? ans+'b' : ans+'a';
    }
};