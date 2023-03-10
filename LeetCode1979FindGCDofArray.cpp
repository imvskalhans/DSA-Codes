/*
leetcode 1979. Find Greatest Common Divisor of Array
The greatest common divisor of two positive integers is the largest integer that evenly divides both numbers.
For example, the GCD of 8 and 12 is 4.
Given an integer array nums, return the greatest common divisor of the smallest number and largest number in nums.
The greatest common divisor of two numbers a and b is the greatest integer that evenly divides both a and b.
 

*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findGCD(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int i = nums[0];
    for (; i > 0; i--)
    {
        if (nums[0] % i == 0 && nums[nums.size() - 1] % i == 0)
        {
            return i;
        }
    }
    return i;
}

int main()
{
    vector<int> nums = {2, 5, 6, 9, 10};
    cout << findGCD(nums) << endl;
    return 0;
}