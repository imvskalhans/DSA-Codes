class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
    string concatStr;
    for(auto word: words)
    {
        concatStr += word;
        if(concatStr == s) return true;
    }
    return false;
    }
};