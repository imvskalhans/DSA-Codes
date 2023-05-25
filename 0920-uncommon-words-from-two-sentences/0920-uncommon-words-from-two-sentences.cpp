class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> words;
        string word = "";
        for(char c : s1)
        {
            if(c == ' ' || c == '\0')
            {
                words.push_back(word);
                word = "";
            }
            else
            {
                word += c;
            }
        }
        words.push_back(word);
        word = "";
        for(char c : s2)
        {
            if(c == ' ' || c == '\0')
            {
                words.push_back(word);
                word = "";
            }
            else
            {
                word += c;
            }
        }
        words.push_back(word);
        word = "";
        unordered_map<string,int> wordfreq;
        for(string s : words)
        {
            wordfreq[s]++;
        }
        int count = 0;
        vector<string> ans;
        for(auto s : wordfreq)
        {
            if(s.second == 1)
            {
                ans.push_back(s.first);
            }
        }
        return ans;
    }
};