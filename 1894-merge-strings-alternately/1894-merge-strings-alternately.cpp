class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0;
        string ans = "";
        while(i<word1.size() && i<word2.size())
        {
            ans = ans + word1[i] + word2[i];
            i++;
        }
        if(word1.size()>word2.size())
        {
            for( ; i<word1.size()  ; i++)
            {
                ans.push_back(word1[i]);
            }
        }
        else
        {
            for( ; i<word2.size()  ; i++)
            {
                ans.push_back(word2[i]);
            }
        }
        return ans;
    }
};