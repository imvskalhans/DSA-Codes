class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        //optimized
        unordered_map<long long,long long>m;
        long long n=nums.size();
        long long total=n*(n-1)/2;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]-i]++;
        }
        unsigned long long count=0;
        for(auto it:m)
        {
            if(it.second>1)
            {
                count+=((it.second * (it.second-1)) / 2);
            }
        }
        return total-count;

        //TLE
        // int count = 0;
        // for (int i = 0; i < nums.size()-1; i++) 
        // {
        //     for (int j = i + 1; j < nums.size(); j++) 
        //     {
        //         if ((j - i) != (nums[j] - nums[i])) 
        //         {
        //             count++;
        //         }
        //     }
        // }
        // return count;
    }
};