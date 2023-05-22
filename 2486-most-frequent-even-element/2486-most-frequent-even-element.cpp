class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> mp;
        int maxi = -1;
        for(int i = 0 ; i<nums.size() ; i++)
       {
           mp[nums[i]]++;
       }
       for(auto i : mp)
       {
           if(i.first % 2 == 0)
           {
               maxi = max(maxi , i.second);
           }
       }
       for(auto i : mp)
       {
           if(i.first % 2 == 0 && i.second == maxi)
           {
               ans.push_back(i.first);
           }
       }
       sort(ans.begin(),ans.end());
       return (ans.empty()) ? -1 : ans[0];
    }
};