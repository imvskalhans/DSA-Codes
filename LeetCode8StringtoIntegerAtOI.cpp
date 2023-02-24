/*
created by: Vishal Singh
LeetCode8StringtoIntegerAtOI

*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;
//
// Created by Vishal on 2021/8/3.
int myAtoi(string s)
{
    int sign = 1;
    int ans = 0;
    s.erase(std::remove_if(s.begin(), s.end(), ::isspace),
            s.end());
    int i = 0;
    for (; i < s.size(); i++)
    {

        if (s[i] == '-')
        {
            sign = sign * (-1);
        }
        else if (isdigit(s[i]))
        {
            int num = s[i] - '0';
            //ans = ans * 10 + num; overflow
            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && num > 7))
            {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
        }
        else
        {
            break;
        }
    }
    return ans * sign;
}
// Driver Code
int main()
{
    string s;
    cout << "enter the string s" << endl;
    getline(cin, s);
    int result = myAtoi(s);
    cout << result;
}