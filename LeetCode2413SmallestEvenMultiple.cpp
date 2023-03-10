/*
leetcode 2413 Smallest Even Multiple
Given an integer n, return the smallest positive integer
that is a multiple of n and is divisible by every number
from 1 to n. The tests are generated such that the answer
always exists.

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int smallestEvenMultiple(int n)
{
    return (n % 2 == 0) ? n : n * 2;
}

int main()
{
    int n = 3;
    cout << smallestEvenMultiple(n) << endl;
    return 0;
}