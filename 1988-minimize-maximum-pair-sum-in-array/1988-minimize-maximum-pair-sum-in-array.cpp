class Solution {
public:
    int minPairSum(vector<int>& nums) {
        //sort nums in ascending orders
        sort(nums.begin() , nums.end());
        
        int n = nums.size()-1;
        int ans = INT_MIN;

        //now pair 1st and last,2nd and 2nd last till mid to minimize the max pair sum
        for(int i=0; i<=n/2; i++)
        {
            int pair = nums[i] + nums[n-i];
            ans = max(ans, pair);
        }
        return ans;
    }
};