/*
LeeCode 2348 Number of Zero Filled Subarray
Given an array of integers nums, return the number of zero-filled subarrays.
A subarray is defined as a non-empty contiguous sequence of elements in the array.
A subarray [nums[l], nums[l+1], ..., nums[r-1], nums[r]] is zero-filled if all the elements
are 0 except for nums[l] and nums[r].
For example, the array [1,0,0,2,0,3] has three zero-filled subarrays: [1,0,0,2,0,3],
[0,0], and [0,3].

*/
#include<iostream>
#include<vector>

using namespace std;

int numberOfZeroFilledSubarray(vector<int>& nums)
{
    int count = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            int j = i + 1;
            while (j < n && nums[j] == 0)
                j++;
            count += (j - i) * (j - i + 1) / 2;
            i = j - 1;
        }
    }
    return count;
}
int main()
{
    vector<int> nums = { 1,0,0,2,0,3 };
    cout << numberOfZeroFilledSubarray(nums) << endl;
    return 0;
}