/*
LeetCode 1636. Sort Array by Increasing Frequency
Given an array of integers nums, sort the array in increasing order based on the frequency of the values. If multiple values have the same frequency, sort them in decreasing order.
Return the sorted array.

*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

vector<int> frequencySort(vector<int> &nums)
{
    vector<int> answer;
    sort(nums.begin(), nums.end());
    int count = 1;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            count++;
        }
        else
        {
            answer.push_back(count);
            count = 1;
        }
    }
    answer.push_back(count);
    sort(answer.begin(), answer.end());
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }
    cout << endl;
    return answer;
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
    vector<int> result = frequencySort(nums);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}