/*
LeetCode 315. Count of Smaller Numbers After Self
Given an integer array nums, return the number of smaller numbers that are
to the right of each element.

*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

vector<int> countSmaller(vector<int>& nums) {
    vector<int> ans(nums.size());
    vector<int> sorted;
    for (int i = nums.size() - 1; i >= 0; --i) {
        auto it = lower_bound(sorted.begin(), sorted.end(), nums[i]);
        ans[i] = it - sorted.begin();
        sorted.insert(it, nums[i]);
    }
    return ans;
}

int main()
{
    vector<int> nums;
    int n;
    cout << "Enter the number of elements in the array: ";
    while(n)
    {
        cin >> n;
        nums.push_back(n);
    }
    vector<int> result = countSmaller(nums);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }

}

/*
Approach 1: Brute Force

Code 1:
class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        vector<int> ans(nums.size());
        vector<int> sorted;
        for (int i = nums.size() - 1; i >= 0; --i) {
            auto it = lower_bound(sorted.begin(), sorted.end(), nums[i]);
            ans[i] = it - sorted.begin();
            sorted.insert(it, nums[i]);
        }
        return ans;
    }
};


*/