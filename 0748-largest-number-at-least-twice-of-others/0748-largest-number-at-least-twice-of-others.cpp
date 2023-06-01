class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int> temp = nums;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        if(nums[n-1] >= nums[n-2] * 2)
        {
            for(int i = 0 ; i < n ; i++)
            {
                if (temp[i] == nums[n-1])
                {
                    return i;
                }
            }
        }
        return -1;
    }
};