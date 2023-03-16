/*
LeetCode 2574. Left and Right Sum Differences
You are given an array nums of n integers. You want to minimize the value of
the following expression:
abs(∑nums[i] from i=0 to i=n−1) − abs(∑nums[i] from i=0 to i=n−1)
where abs(x) is the absolute value of x.
Return the minimum possible value of this expression.
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

vector<int> leftRigthDifference(vector<int> &nums)
{
    vector<int> leftsum;
    vector<int> rightsum;
    vector<int> answer(nums.size());
    int sum = 0;
    leftsum.push_back(0);
    int i = 0;
    for (; i < nums.size() - 1; i++)
    {
        sum = sum + nums[i];
        leftsum.push_back(sum);
    }
    sum = sum + nums[i];
    for (int i = 0; i < nums.size(); i++)
    {
        sum = sum - nums[i];
        rightsum.push_back(sum);
    }
    for (int i = 0; i < nums.size(); i++)
    {
        answer[i] = abs(leftsum[i] - rightsum[i]);
    }
    return answer;
}

int main()
{
    cout << "Enter the number of elements in the array: ";
    vector<int> nums;
    int input;
    while (input)
    {
        cin >> input;
        nums.push_back(input);
    }
    vector<int> answer = leftRigthDifference(nums);
    for(int i=0;i<answer.size();i++)
    {
        cout<<answer[i]<<" ";
    }
}