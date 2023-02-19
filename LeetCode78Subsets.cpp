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
#include<iostream>
#include<vector>
using namespace std;


void solve(vector<int> nums, int index , vector<int> output , vector<vector<int>>& ans)
    {
        //base case
        if(index>=nums.size())
        {
            ans.push_back(output);
            return;
        }

        //exclude call
        solve(nums,index+1,output, ans);

        //include call
        output.push_back(nums[index]);
        solve(nums,index+1,output, ans);
    }

vector<vector<int>> subsets(vector<int>& nums) {
         vector<vector<int>> ans;
         vector<int> output;
         int index=0;
         solve(nums,index,output, ans);
         return ans;
    }

int main()
{
    vector<int> nums;
    cout<<"enter nums"<<endl;
     int input;
    while (std::cin >> input) {
        nums.push_back(input);
    }
    vector<vector<int>> result=subsets(nums);
    cout<<"power set  = ";
    for(int i=0;i<result.size();i++)
    {
        for(int j=0;j<result[0].size();j++){
           cout<<result[i][j]<<" "; 
        }cout<<endl;
        
    }
}