/*
LeetCode1550. Three Consecutive Odds
Given an integer array arr, return true if there are three consecutive odd numbers in the array. Otherwise, return false.

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool threeConsecutiveOdds(vector<int> &arr)
{
    int n = arr.size() - 1;
    for (int i = 0; i <= n - 2; i++)
    {
        if (arr[i] % 2 == 1)
        {
            if (arr[i + 1] % 2 == 1)
            {
                if (arr[i + 2] % 2 == 1)
                {
                    return true;
                }
            }
        }
    }
    return false;
}

int main()
{
    vector<int> arr = {2, 6, 4, 1};
    cout << threeConsecutiveOdds(arr) << endl;
    return 0;
}