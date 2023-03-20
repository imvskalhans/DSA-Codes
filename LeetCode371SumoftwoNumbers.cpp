/*
LeetCode 371. Sum of Two Integers
Calculate the sum of two integers a and b, but you are not allowed to use the operator + and -.
*/
#include<iostream>
#include<vector>

using namespace std;

int getSum(int a, int b)
{
    int sum = a ^ b;
    int carry = (a & b) << 1;
    if (carry != 0)
        return getSum(sum, carry);
    else
        return sum;
}

int main()
{
    int a = 1;
    int b = 2;
    cout << getSum(a, b) << endl;
    return 0;
}