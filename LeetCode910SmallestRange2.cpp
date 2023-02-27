/*
leetcode 910. Smallest Range II
You are given an integer array nums and an integer k.
In one operation, you can choose any index i where 0 <= i < nums.length and change nums[i] to nums[i] + x where x is an integer from the range [-k, k]. You can apply this operation at most once for each index i.
The score of nums is the difference between the maximum and minimum elements in nums.
Return the minimum score of nums after applying the mentioned operation at most once for each index in it.
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int smallestRangeII(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());
    int min = nums[0];
    int max = nums[nums.size() - 1];
    int diff = max - min;
    if (diff <= 2 * k)
    {
        return 0;
    }
    else
    {
        for (int i = 0; i < nums.size() - 1; i++)
        {
            int a = nums[i] + 2 * k;
            int b = nums[i + 1] - 2 * k;
            int newDiff = max(a, max) - min(a, min);
            if (newDiff < diff)
            {
                diff = newDiff;
            }
            newDiff = max(b, max) - min(b, min);
            if (newDiff < diff)
            {
                diff = newDiff;
            }
        }
        return diff;
    }
}
int main()
{
    vector<int> nums;
    int k;
    cout << "enter k" << endl;
    cin >> k;
    cout << "enter nums" << endl;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    cout << smallestRangeII(nums, k) << endl;
}