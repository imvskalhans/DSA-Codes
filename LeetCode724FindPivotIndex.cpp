/*
23 Jan solution by Vishal Singh
Leetcode
724. Find Pivot Index
Easy
Given an array of integers nums, calculate the pivot index of this array.
The pivot index is the index where the sum of all the numbers strictly to the left of the index 
is equal to the sum of all the numbers strictly to the index's right.
If the index is on the left edge of the array, then the left sum is 0 because there are no elements
to the left. This also applies to the right edge of the array.
Return the leftmost pivot index. If no such index exists, return -1.

//best approach of solution
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total_sum = accumulate(nums.begin(), nums.end(), 0); 
        int left_sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (left_sum == total_sum - left_sum - nums[i]) {
                return i;
            }
            left_sum += nums[i];
        }
        return -1;
    }
};




*/


#include<iostream>
#include<vector>
using namespace std;

//this approach of mine still need some correction
 int pivotIndex(vector<int>& nums) {
        int start = 0, end = nums.size()-1;
        int mid = start + (end-start)/2;
        while(start<=end)
        { 
           // int mid = start + (end-start)/2;
            long int sum1 = 0;
            for(int i=0;i<mid;i++)
            {
                sum1=sum1+nums[i];
            }
            long int sum2 = 0;
            for(int i=mid+1;i<=end;i++)
            {
                sum2=sum2+nums[i];
            }
            if(sum1 == sum2)
            {
                return mid;
            }
            else if(sum1 < sum2)
            {
                start = mid+1;
            }
            else
            {
                end = mid-1;
            }
            mid = start + (end-start)/2;
        }
        return -1;
    } 

    int main()
{
    vector<int> nums;
    cout<<"enter nums"<<endl;
     int input;
    while (std::cin >> input) {
        nums.push_back(input);
    }
    double result=pivotIndex(nums);
    cout<<"pivot index = "<<result<<endl;
}