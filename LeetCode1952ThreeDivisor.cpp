/*
LeetCode 1952. Three Divisors
Given an integer n, return true if n has exactly three positive divisors. Otherwise, return false.
An integer m is a divisor of n if there exists an integer k such that n = k * m.

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isThree(int n)
{
    int count = 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
        if (count > 1)
            break;
    }
    return count == 1;
}

int main()
{
    int n = 4;
    cout << isThree(n) << endl;
    return 0;
}
