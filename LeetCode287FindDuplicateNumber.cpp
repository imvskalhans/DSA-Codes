/*
23 Jan solution by Vishal Singh
Leetcode
287. Find the Duplicate Number
Medium
Given an array of integers nums containing n + 1 integers where each
integer is in the range [1, n] inclusive.
There is only one repeated number in nums, return this repeated number.
You must solve the problem without modifying the array nums and
uses only constant extra space.

*/ 




           /* 
           few test cases will fail
            int n = nums.size() - 1;
        int expectedSum = (n*(n+1))/2;
        int actualSum = 0,i=0;
        if(nums[i]==nums[i+1]) return nums[i];
        for(int i : nums) {
            actualSum += i;
            
        }
        return actualSum - expectedSum;
    }
    */

    //revise it

#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(vector<int>& nums) 
      {
    int left = 1, right = nums.size() - 1;
    while (left < right) 
    {
        int mid = left + (right - left) / 2;
        int count = 0;
        for (int i : nums) {
            if (i <= mid) {
                count++;
            }
        }
        if (count > mid) {
            right = mid;
        } else {
            left = mid + 1;
        }
   
    }  
      return left; 
}

int main()
{
    vector<int> nums;
    cout<<"enter array nums"<<endl;
     int input;
    while (cin >> input) {
        nums.push_back(input);
    }
    int result=findDuplicate(nums);
    cout<<"duplicate number = "<<result<<endl;
}