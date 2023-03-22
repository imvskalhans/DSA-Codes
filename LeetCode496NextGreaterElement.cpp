/*
LeeCode 496. Next Greater Element I
You are given two arrays (without duplicates) nums1 and nums2 where nums1’s elements are subset of nums2. Find all the next greater numbers for nums1's elements in the corresponding places of nums2.
The Next Greater Number of a number x in nums1 is the first greater number to its right in nums2. If it does not exist, output -1 for this number.

*/
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <stack>
using namespace std;

vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums)
{
    vector<int> result;
    unordered_map<int, int> m;
    stack<int> s;
    for (int i = 0; i < nums.size(); i++)
    {
        while (!s.empty() && s.top() < nums[i])
        {
            m[s.top()] = nums[i];
            s.pop();
        }
        s.push(nums[i]);
    }
    for (int i = 0; i < findNums.size(); i++)
    {
        if (m.find(findNums[i]) != m.end())
        {
            result.push_back(m[findNums[i]]);
        }
        else
        {
            result.push_back(-1);
        }
    }
    return result;
}

int main()
{
    vector<int> findNums = { 4, 1, 2 };
    vector<int> nums = { 1, 3, 4, 2 };
    vector<int> result = nextGreaterElement(findNums, nums);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}