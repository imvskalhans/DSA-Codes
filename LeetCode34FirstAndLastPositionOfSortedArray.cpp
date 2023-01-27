/*
34. Find First and Last Position of Element in Sorted Array
Medium
Given an array of integers nums sorted in non-decreasing order, 
find the starting and ending position of a given target value.
If target is not found in the array, return [-1, -1].
You must write an algorithm with O(log n) runtime complexity.


*/

#include<iostream>
#include<vector>
using namespace std;



vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        vector<int> isempty(2,-1);
        for(int i=0;i<nums.size();i++)
       {
           if(nums[i]==target)
           {
               v.push_back(i);
               break;
           }
       }
        for(int j=nums.size()-1; j>=0 ;j--)
       {
           if(nums[j]==target)
           {
               v.push_back(j);
               break;
           }

       }
       if(v.empty())
       {
           return isempty;
       }
       else
       {
           return v;
       }
 }

int main()
{
    int target;
    cout<<"enter target";
    cin>>target;
    vector<int> nums;
    cout<<"enter nums"<<endl;
     int input;
    while (std::cin >> input) {
        nums.push_back(input);
    }
    vector<int> result = searchRange(nums,target); 
for (int i : result) {
    cout << i << " ";
}
}