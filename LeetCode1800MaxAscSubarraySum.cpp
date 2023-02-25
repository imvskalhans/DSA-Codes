/*
leetcode 1800. Maximum Ascending Subarray Sum
Easy
Given an array of positive integers nums, return the maximum possible sum of an ascending subarray in nums.
A subarray is defined as a contiguous sequence of numbers in an array.
A subarray [numsl, numsl+1, ..., numsr-1, numsr] is ascending if for all i where l <= i < r, numsi < numsi+1.
Note that a subarray of size 1 is ascending.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxAscendingSum(vector<int> &nums)
{
    int n = nums.size();
    int sum = nums[0];
    int maxSum = nums[0];
    for (int i = 1; i < n; i++)
    {
        if (nums[i] > nums[i - 1])
        {
            sum = sum + nums[i];
        }
        else
        {
            sum = nums[i];
        }
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}
int main()
{
    int n;
    cout << "enter n" << endl;
    cin >> n;
    vector<int> nums(n);
    cout << "enter nums" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int result = maxAscendingSum(nums);
    cout << result << " ";
}