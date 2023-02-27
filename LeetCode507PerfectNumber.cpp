/*
leetcode 507. Perfect Number
perfect number
We define the Perfect Number is a positive integer that is equal to the sum of all its positive divisors except itself.
Now, given an integer n, write a function that returns true when it is a perfect number and false when it is not.

*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
    bool checkPerfectNumber(int num)
    {
        int sum = 0;
        for (int i = 1; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                sum += i;
            }
        }
        return sum == num;
    }
    int main()
    {
        int num;
        cout << "enter num" << endl;
        cin >> num;
        cout << checkPerfectNumber(num) << endl;
    }