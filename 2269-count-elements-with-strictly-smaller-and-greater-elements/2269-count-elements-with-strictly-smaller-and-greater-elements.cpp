class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i = 0;
        int j = nums.size()-1;
        if(j<2) return 0 ;
        while( i<j && nums[i]==nums[i+1]) i++;
        if(i==j) return 0;
        while( j>0 && nums[j]==nums[j-1]) j--;
        return j-i-1;
    }
};