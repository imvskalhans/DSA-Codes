/*
LeetCode 75. Sort Colors
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
You must solve this problem without using the library's sort function.

*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

void sortColors(vector<int>& nums) {
    int n = nums.size();
    int i=0;
    int j=0;
    int k=n-1;
    while(j<=k)
    {
        if(nums[j]==0)
        {
            swap(nums[i],nums[j]);
            i++;
            j++;
        }
        else if(nums[j]==1)
        {
            j++;
        }
        else
        {
            swap(nums[j],nums[k]);
            k--;
        }
    }
}

int main()
{
    vector<int> nums;
    int n;
    cout << "Enter the number of elements in the array: ";
    while(n)
    {
        cin >> n;
        nums.push_back(n);
    }
    sortColors(nums);
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
}