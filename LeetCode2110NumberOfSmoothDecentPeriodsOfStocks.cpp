/*
LeetCode 2110. Number of Smooth Decent Periods of Stocks
You are given a string s representing the prices of a stock in a certain period. The stock price on the ith day is represented by the ith character of s, which is a digit from '0' to '9' inclusive.
A smooth decent period is a subsequence of the given string s such that:
*/
#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

    long long getDescentPeriods(vector<int> & prices)
    {
        long long count = 1;
        int l = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] + 1 != prices[i - 1])
            {
                l = i;
                count++;
            }
            else
                count += i - l + 1;
        }
        return count;
    }

int main()
{
    vector<int> prices = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    cout << getDescentPeriods(prices) << endl;
    return 0;
}