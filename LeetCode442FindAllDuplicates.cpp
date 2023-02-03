/*
442. Find All Duplicates in an Array
Medium
Given an integer array nums of length n where all the integers of nums 
are in the range [1, n] and each integer appears once or twice, return 
an array of all the integers that appears twice.
You must write an algorithm that runs in O(n) time and uses only constant extra space.

 
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==nums[i+1])
            {
                ans.push_back(nums[i]);
            }
        }
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
    vector<int> result=findDuplicates(nums);
    cout<<"duplicates = ";
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
}