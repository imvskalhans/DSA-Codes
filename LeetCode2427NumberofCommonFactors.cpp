/*
LeetCode 2427. Number of Common Factors
Given two positive integers n and m, return the number of positive integers less than or equal to min(n, m) that share a common factor with both n and m.

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int commonFactors(int a, int b)
{
    int maxi = max(a, b);
    int count = 0;
    for (int i = 1; i <= maxi / 2; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            count++;
        }
    }
    return (a == b) ? count + 1 : count;
}

int main()
{
    int n = 12;
    int m = 18;
    cout << commonFactors(n, m) << endl;
    return 0;
}