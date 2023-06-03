class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums[nums.size()-1];
        int sum = 0;
        for(int i = 0 ; i< k ; i++)
        {
            sum += n + i;
        }
        return sum;
    }
};
