/*
leetcode 1512. Number of Good Pairs
Given an array of integers nums.
A pair (i,j) is called good if nums[i] == nums[j] and i < j.
Return the number of good pairs.

*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int numIdenticalPairs(vector<int> &nums)
{
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    vector<int> nums;
    int input;
    cout << "Enter the numbers: ";
    while (cin >> input)
    {
        nums.push_back(input);
    }
    int result = numIdenticalPairs(nums);
    cout << result;
}