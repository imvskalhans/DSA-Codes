/*
LeeCode 123 Best Time to Buy and Sell Stock III
Hard
You are given an array prices where prices[i] is the price of a given stock on the ith day.
Find the maximum profit you can achieve. You may complete at most two transactions.
Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).
*/

#include <iostream>
#include <vector>
using namespace std;
//
int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    if (n == 0)
        return 0;
    vector<int> left(n, 0);
    vector<int> right(n, 0);
    int minPrice = prices[0];
    for (int i = 1; i < n; i++)
    {
        minPrice = min(minPrice, prices[i]);
        left[i] = max(left[i - 1], prices[i] - minPrice);
    }
    int maxPrice = prices[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        maxPrice = max(maxPrice, prices[i]);
        right[i] = max(right[i + 1], maxPrice - prices[i]);
    }
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        result = max(result, left[i] + right[i]);
    }
    return result;
}


int main()
{
    vector<int> nums;
    cout << "enter nums" << endl;
    int input;
    while (std::cin >> input)
    {
        nums.push_back(input);
    }
    int result = maxProfit(nums);
    cout << result << " ";
}