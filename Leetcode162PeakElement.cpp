/*

162. Find Peak Element
Medium
A peak element is an element that is strictly greater than its neighbors.
Given a 0-indexed integer array nums, find a peak element, and return its 
index. If the array contains multiple peaks, return the index to any of 
the peaks.
You may imagine that nums[-1] = nums[n] = -∞. In other words, an element 
is always considered to be strictly greater than a neighbor that is 
outside the array.
You must write an algorithm that runs in O(log n) time.


class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        {
            return 0;
        }
        if(n<3&&n>1)
        {
            if(nums[0]>nums[1])
            {
                return 0;
            }
            else{
                return 1;
            }
        }
    
        for(int i=1;i<n-1;i++)
        {
            if(nums[i]>nums[i-1]&&nums[i]>nums[i+1])
            {
                return i;
            }
        }return 0 //check edge case foe 0th index and n-1 index i.e first and last index;
    }
}; 
*/
#include<iostream>
#include<vector>
using namespace std;

int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1) {
            return 0;
        }
        if(n==2) {
            return nums[0] > nums[1] ? 0 : 1;
        }
    
        for(int i=1;i<n-1;i++) {
            if(nums[i]>nums[i-1]&&nums[i]>nums[i+1]) {
                return i;
            }
        }
        return nums[0] > nums[n-1] ? 0 : n-1;
}


int main()
{
    vector<int> nums;
    cout<<"enter nums"<<endl;
     int input;
    while (std::cin >> input) {
        nums.push_back(input);
    }
    double result=findPeakElement(nums);
    cout<<"peak element index = "<<result<<endl;
}