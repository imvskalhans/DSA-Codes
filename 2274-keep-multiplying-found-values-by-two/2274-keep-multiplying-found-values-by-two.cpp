class Solution {
public:
    bool binarySearch(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        
        while (left <= right) 
        {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] == target) 
            {
                return true;
            } 
            else if (nums[mid] > target) 
            {
                right = mid - 1;
            } else 
            {
                left = mid + 1;
            }
        }
        
        return false;
    }
    
    int findFinalValue(vector<int>& nums, int original) 
    {
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < nums.size(); i++) 
        {
            if (binarySearch(nums, original)) 
            {
                original *= 2;
            } 
            else 
            {
                return original;
            }
        }
        return original;
    }
};
