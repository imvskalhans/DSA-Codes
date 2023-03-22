/*
LeeCode 172 Factorial Trailing Zeros
Given an integer n, return the number of trailing zeroes in n!.

*/
#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

int trailingZeroes(int n)
{
    int count = 0;
    while (n > 0)
    {
        count += n / 5;
        n /= 5;
    }
    return count;
}
