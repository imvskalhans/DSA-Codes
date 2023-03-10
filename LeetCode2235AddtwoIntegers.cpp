/*
leetcode 2235 Add two Integers
Given two integers a and b, return the sum of the two integers without using the operators + and -.

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sum(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    int num1 = 2;
    int num2 = 3;
    cout << sum(num1, num2) << endl;
    return 0;
}
