/*
24 jan solution by Vishal Singh
LeetCode
1480. Running Sum of 1d Array
Easy

Companies
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.


 */
 #include<iostream>
 #include<vector>
using namespace std;


vector<int> runningSum(vector<int>& nums) {
        for(int i=1;i<nums.size();i++)
        {
            nums[i]=nums[i]+nums[i-1];
        }
        return nums;
    }

int main()
{
    vector<int> nums;
    cout<<"enter nums"<<endl;
     int input;
    while (std::cin >> input) {
        nums.push_back(input);
    }
    vector<int> result=runningSum(nums);
    cout<<"Running Sum = ";
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
}
