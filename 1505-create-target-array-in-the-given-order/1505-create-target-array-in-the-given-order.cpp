class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ans;
        int j = 0;
        for(int i : nums)
        {
            ans.insert(ans.begin() + index[j++], i);
        }
        return ans;
    }
};