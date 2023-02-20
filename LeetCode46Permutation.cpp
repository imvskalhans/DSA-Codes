/*

*/
#include<iostream>
#include<vector>
using namespace std;

   void solve(vector<int> nums, vector<vector<int>>& ans , int index)
    {
        //base case
        if(index>=nums.size()){
            ans.push_back(nums);
            return;
        }
        
        
        for(int i=index;i<nums.size();i++)
        {
            swap(nums[index],nums[i]);
            solve(nums,ans,index+1);
            //backtracking
            swap(nums[index],nums[i]);
        }
        
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index=0;
        solve(nums,ans,index);
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
    vector<vector<int>> result = permute(nums);
    for(int i=0; i< result.size();i++){
        for(int j=0; j< result[0].size();j++){
        cout<<" "<<result[i][j]<<" ";
        }cout<<endl;
    }
    
}