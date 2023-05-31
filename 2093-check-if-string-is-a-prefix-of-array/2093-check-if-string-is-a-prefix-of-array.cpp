class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
    string concatStr;
    int i = 0;

    while (i < words.size() && concatStr.length() < s.length()) 
    {
        concatStr += words[i];
        i++;
    }

    return concatStr == s; 
    }
};