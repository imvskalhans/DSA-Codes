/*



class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> subset;
        backtrack(res, subset, nums, 0);
        return res;
    }
    
private:
    void backtrack(vector<vector<int>>& res, vector<int>& subset, vector<int>& nums, int start) {
        res.push_back(subset);
        for (int i = start; i < nums.size(); i++) {
            subset.push_back(nums[i]);
            backtrack(res, subset, nums, i+1);
            subset.pop_back();
        }
    }
};

*/

