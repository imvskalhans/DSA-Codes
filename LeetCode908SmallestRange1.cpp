/*
leetcode 908. Smallest Range I
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
int smallestRangeI(vector<int> &nums, int k)
{
    int min = *min_element(nums.begin(), nums.end());
    int max = *max_element(nums.begin(), nums.end());
    int diff = max - min;
    if (diff <= 2 * k)
    {
        return 0;
    }
    else
    {
        return diff - 2 * k;
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
    cout << smallestRangeI(nums, k) << endl;
   
}