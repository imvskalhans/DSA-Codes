/*
LeetCode 1588. Sum of All Odd Length Subarrays
Given an array of positive integers arr, calculate the sum of all possible odd-length subarrays.
A subarray is a contiguous subsequence of the array.
Return the sum of all odd-length subarrays of arr.
*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int sumOddLengthSubarrays(vector<int> &arr)
{
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int temp = 0;
        for (int j = i; j < arr.size(); j++)
        {
            temp += arr[j];
            if ((j - i + 1) % 2 == 1)
            {
                sum += temp;
            }
        }
    }
    return sum;
}

int main()
{
    vector<int> arr = {1, 4, 2, 5, 3};
    cout << sumOddLengthSubarrays(arr) << endl;
    return 0;
}
