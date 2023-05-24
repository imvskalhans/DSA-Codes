class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> freq;
        for(char c : s)
        {
            freq[c]++;
        }
        int appearnce = freq[s[0]];
        for(auto f : freq)
        {
            if(appearnce != f.second)
            {
                return false;
            }
        }
        return true;
    }
};