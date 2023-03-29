/*
LeetCode 2357. Make Array Zero by Subtracting Equal Amounts
Given an array of integers nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
Return the minimum number of elements to remove such that the running sum of the remaining elements is equal to 0.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int minimumOperations(vector<int> &nums)
{
    int count = 0;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum -= nums[i];
        count++;
        if (sum == 0)
        {
            break;
        }
    }
    return count;
}
int main()
{
    vector<int> nums = { 1, 1, 4, 2, 3 };
    int result = minimumOperations(nums);
    cout << result << endl;
    return 0;
}