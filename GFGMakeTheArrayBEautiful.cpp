/*
Given an array of positive and negative integers. You have to make the array beautiful. An array is beautiful if two adjacent integers, arr[i] and arr[i+1] have the same sign. And you can do the following operation any number of times until the array becomes beautiful.

If two adjacent integers have different signs, remove them.
Return the beautiful array after performing the above operation.

Note: An empty array is also a beautiful array. There can be many adjacent integers with different signs. So remove adjacent integers with different signs from left to right.

Example 1:

Input: 4 2 -2 1
Output: 4 1
Explanation: As at indices 1 and 2 , 2 and -2 have
different sign, they are removed. And the  the final
array is: 4 1
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

vector<int> makeArrayBeautiful(vector<int> &arr)
{
    vector<int> res;
    for (int i = 0; i < arr.size(); i++)
    {
        if (res.size() == 0)
        {
            res.push_back(arr[i]);
        }
        else
        {
            if (res.back() * arr[i] < 0)
            {
                res.pop_back();
            }
            else
            {
                res.push_back(arr[i]);
            }
        }
    }
    return res;
}