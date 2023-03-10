/*
leetcode 504. Convert to base 7
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string convertToBase7(int num)
{
    if (num == 0)
    {
        return "0";
    }
    string result = "";
    int remainder;
    bool is_negative = num < 0;
    if (is_negative)
    {
        num = -num;
    }
    while (num != 0)
    {
        remainder = num % 7;
        num = num / 7;
        result = to_string(remainder) + result;
    }
    if (is_negative)
    {
        result = "-" + result;
    }
    return result;
}
/*

string convertToBase7(int num)
{
    int sign = 1;
    if (num < 0)
    {
        num = -num;
        sign = -sign;
    }

    string ans = "";
    do
    {
        char tmp = '0' + num % 7;
        ans = tmp + ans;
        num /= 7;
    } while (num);
    if (sign == -1)
        ans = '-' + ans;
    return ans;
}

string base7(int num)
{
    string ans;
    while (num != 0)
    {
        int r = num % 7;
        num = num / 7;
        ans += to_string(r);
    }
    if (ans.empty())
    {
        return "0";
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
*/
int main()
{
    int num = 100;
    cout << convertToBase7(num) << endl;
    return 0;
}
