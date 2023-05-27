class Solution {
public:
    bool judgeCircle(string moves) {
        unordered_map<char,int> freq;
        for(char c : moves)
        {
            freq[c]++;
        }
        if(freq['U'] == freq['D'] && freq['L'] == freq['R'])
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};