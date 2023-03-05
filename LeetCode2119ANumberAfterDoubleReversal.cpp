/*
leetcode 2119 A Number After Double Reversal
Given a number n, find the smallest number that has exactly the same digits existing in the number n and is greater in value than n. If n is the greatest possible number with its set of digits, then return -1.

*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int reverse(int n)
{
    int rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    return rev;
}

int main()
{
    int n;
    cin >> n;
    int rev = reverse(n);
    int ans = reverse(rev);
    if(ans==n)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
}