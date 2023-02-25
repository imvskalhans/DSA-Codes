/*
leetcode 628 Maximum Product of Three Numbers
Easy
Given an integer array nums, find three numbers whose product is maximum and return the maximum product.

*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maximumProduct(vector<int> &nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int maxProduct = nums[n - 1] * nums[n - 2] * nums[n - 3];
    maxProduct = max(maxProduct, nums[0] * nums[1] * nums[n - 1]);
    return maxProduct;
}
int main()
{
    int n;
    cout << "enter n" << endl;
    cin >> n;
    vector<int> nums(n);
    cout << "enter nums" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int result = maximumProduct(nums);
    cout << result << " ";
}
/*
best solution

    class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int min1=INT_MAX;
        int min2=INT_MAX;
        int max1=INT_MIN;
        int max2=INT_MIN;
        int max3=INT_MIN;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>=max1){
                max3=max2;
                max2=max1;
                max1=nums[i];
        }else if(nums[i]>=max2){
            max3=max2;
            max2=nums[i];
        }else if(nums[i]>=max3){
            max3=nums[i];
        }
        if(nums[i]<=min1){
            min2=min1;
            min1=nums[i];
        }else if(nums[i]<=min2){
            min2=nums[i];
        }
    }

    int ans=max((min1*min2*max1),(max1*max2*max3));
    return ans;
    }
};
*/