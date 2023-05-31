class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int ans = 0;
        
        for(auto word : words){
            int index = s.find(word);
            if(index == 0) ans++;
        }
        return ans;
    }
};