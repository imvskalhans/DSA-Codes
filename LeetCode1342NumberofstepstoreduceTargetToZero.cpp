/*
leetcode 1342. Number of Steps to Reduce a Number to Zero
Given a non-negative integer num, return the number of steps to reduce it to zero. If the current number is even, you have to divide it by 2, otherwise, you have to subtract 1 from it.

*/


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int numberOfSteps(int num)
{
    int count = 0;
    if (num % 2 == 1)
    {
        count = 1;
    }
    while (num != 0)
    {
        num = num / 2;
        count++;
        if (num % 2 == 1)
        {
            num = num - 1;
            count++;
        }
    }
    return count;
}

int main()
{
    int num = 14;
    cout << numberOfSteps(num) << endl;
    return 0;
}
