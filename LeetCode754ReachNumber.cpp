/*
leetcode 754. Reach a Number
Medium

*/

#include<iostream>
#include<vector>
using namespace std;

int reachNumber(int target)
{
    int i = 1;
    int sum = 0;
    while (sum < target)
    {
        sum = sum + i;
        i++;
    }
    if (sum == target)
    {
        return i - 1;
    }
    else
    {
        int diff = sum - target;
        if (diff % 2 == 0)
        {
            return i - 1;
        }
        else
        {
            if (i % 2 == 0)
            {
                return i;
            }
            else
            {
                return i + 1;
            }
        }
    }
}

int main()
{
    int target;
    cout << "Enter the target: ";
    cin >> target;
    cout << reachNumber(target);
    return 0;
}