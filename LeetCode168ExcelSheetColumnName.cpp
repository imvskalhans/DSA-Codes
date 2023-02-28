/*
leetcode 168. Excel Sheet Column Title
Given a positive integer, return its corresponding column title as appear in an Excel sheet.

*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
string convertToTitle(int columnNumber)
{
    int n = columnNumber;
    string ans;
    while (n > 0)
    {
        n = n - 1;
        int d = n % 26;
        ans = char('A' + d) + ans;
        n = n / 26;
    }
    return ans;
}
int main()
{
    int n;
    cout << "enter column number" << endl;
    cin >> n;
    string result = convertToTitle(n);
    cout << result << endl;
}