/*
LeetCode 396. Rotate Function
You are given an integer array nums of length n. Assume arrk to be an array obtained by rotating the array nums k positions clock-wise. We define the rotation function F on nums as follow:
F(k) = 0 * arrk[0] + 1 * arrk[1] + ... + (n - 1) * arrk[n - 1].
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int maxRotateFunction(vector<int> &nums)
{
    long long int initialsum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        initialsum += nums[i] * i;
    }

cout<<"Initial sum = "<<initialsum<<endl;
    int len = nums.size();
    int k = len-1;

    while (k--)
    {
        int temp = nums[len - 1];
        long long int tempsum = 0;
        for (int i = len - 1; i > 0; i--)
        {
            nums[i] = nums[i - 1];
            // tempsum += nums[i]*i;
        }
        nums[0] = temp;
        cout<<"Temp nums = ";
        for (int i = 0; i < nums.size(); i++)
        {
            cout<<nums[i]<<" ";
        }

        // calculating tempsum
        for (int i = 0; i < nums.size(); i++)
        {
            tempsum += nums[i] * i;
        }
        cout<<"Temp sum = "<<tempsum<<endl;

        initialsum = max(initialsum, tempsum);
        cout<<"Initial sum max = "<<initialsum<<endl;
    }
    return initialsum;
}

int main()
{
    vector<int> nums;
    int input;
    while (cin >> input)
    {
        nums.push_back(input);
    }
    cout << maxRotateFunction(nums) << endl;
    return 0;
}