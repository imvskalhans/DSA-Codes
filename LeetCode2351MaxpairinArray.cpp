/*
LeetCode 2351. Maximum Pair in Array
Given an array of integers nums, you are allowed to choose one element of nums and change it by any value in one move.
Return the maximum possible sum of an array after modifying exactly one element with this operation.

*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

vector<int> numberOfPairs(vector<int> &nums)
{
    vector<int> answer(2);
    answer[1] = nums.size();
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            i += 1;
            answer[0]++;
            answer[1] -= 2;
        }
    }
    return answer;
}


int main()
{
        vector<int> nums;
        int input;
        cout<<"Enter the numbers: ";
        while (cin >> input)
        {
            nums.push_back(input);
        }
        vector<int> result = numberOfPairs(nums);
        cout << result[0] << " ";
        cout << result[1] << endl;
}