/*
LeeCode 1323. Maximum 69 Number
Easy
Given a positive integer num consisting only of digits 6 and 9.
Return the maximum number you can get by changing at most one digit (6 becomes 9, and 9 becomes 6).
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maximum69Number(int num)
{
    int n = num;
    int count = 0;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    int result = 0;
    int temp = 0;
    int i = 0;
    while (num > 0)
    {
        temp = num % 10;
        if (temp == 6)
        {
            result = result + 9 * pow(10, i);
            break;
        }
        else
        {
            result = result + temp * pow(10, i);
        }
        num = num / 10;
        i++;
    }
    while (num > 0)
    {
        temp = num % 10;
        result = result + temp * pow(10, i);
        num = num / 10;
        i++;
    }
    return result;
}
int main()
{
    int num;
    cout << "enter num" << endl;
    cin >> num;
    int result = maximum69Number(num);
    cout << result << " ";
}
