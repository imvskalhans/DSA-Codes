 #include<iostream>
 #include<vector>
using namespace std;
  
   vector<vector<int>> threeSum(vector<int>& nums) {
   vector<int> ans;
        int a=0,b=0,c=0;
    for (int i=0; i<nums.size()-1; i++)
    {
        for (int j=i+1; j<nums.size(); j++)
        {
            for (int k=j+1; k<nums.size(); k++)
            {
            if (nums[i] + nums[j] + nums[k] == 0)
            {
                a = i;
                b = j;
                c = k;
                ans.push_back(a);
                ans.push_back(b);
                ans.push_back(c);

            }
            }
        }
        
    }
    return ans;
   }