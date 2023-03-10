/*
leetcode 2169. Count Optimal Decisions for a Target Number
You are given an integer array nums and an integer target.
You want to build an expression out of nums by adding one of the symbols '+' and '-' before each integer in nums and then concatenate all the integers.
For example, if nums = [2, 1], you can add a '+' before 2 and a '-' before 1 and concatenate them to build the expression "+2-1".
Return the number of different expressions that you can build, which evaluates to target.

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int countOperations(int num1, int num2)
{
    long long int count = 0;
    while (num1 != 0 && num2 != 0)
    {
        if (num1 > num2)
        {
            num1 = num1 - num2;
        }
        else
        {
            num2 = num2 - num1;
        }
        count++;
    }
    return count;
}

int main()
{
    int num1 = 2;
    int num2 = 3;
    cout << countOperations(num1, num2) << endl;
    return 0;
}