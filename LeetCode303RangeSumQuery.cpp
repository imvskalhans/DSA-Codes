/*
LeeCode 303 Range Sum Query - Immutable
Given an integer array nums, find the sum of the elements between indices i and j (i ≤ j), inclusive.

*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class NumArray
{   
    vector<int> sum;
public:
    NumArray(vector<int> &nums)
    {
        sum.resize(nums.size() + 1);
        sum[0] = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum[i + 1] = sum[i] + nums[i];
        }
    }
    int sumRange(int i, int j)
    {
        return sum[j + 1] - sum[i];
    }
};
int main()
{
    vector<int> nums = { -2, 0, 3, -5, 2, -1 };
    NumArray numArray(nums);
    cout << numArray.sumRange(0, 2) << endl;
    cout << numArray.sumRange(2, 5) << endl;
    cout << numArray.sumRange(0, 5) << endl;
    return 0;
}