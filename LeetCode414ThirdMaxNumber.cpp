/*
LeeCode 414. Third Maximum Number
Easy
You are given three integers a, b, and c. Return the largest number among them.
Follow up: Could you solve it without using any built-in function?
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int thirdMax(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return 0;
    if (n == 1)
        return nums[0];
    if (n == 2)
        return max(nums[0], nums[1]);
    int first = nums[0];
    int second = INT_MIN;
    int third = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] > first)
        {
            third = second;
            second = first;
            first = nums[i];
        }
        else if (nums[i] > second && nums[i] < first)
        {
            third = second;
            second = nums[i];
        }
        else if (nums[i] > third && nums[i] < second)
        {
            third = nums[i];
        }
    }
    if (third == INT_MIN)
        return first;
    return third;
}
/*
//approach 2
// int thirdMax(vector<int> &nums)
    sort(nums.begin(),nums.end());
        int count=1;
        for(int i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]!=nums[i+1])
            {
                count++;
            }
            if(count==3)
            {
                return nums[i];
            }
        }
        return nums[nums.size()-1];
    }
*/
int main()
{
    vector<int> nums;
    cout << "enter nums" << endl;
    int input;
    while (std::cin >> input)
    {
        nums.push_back(input);
    }
    int result = thirdMax(nums);
    cout << result << " ";
}

