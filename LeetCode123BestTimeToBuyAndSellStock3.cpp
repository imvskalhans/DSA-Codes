/*
LeeCode 123 Best Time to Buy and Sell Stock III
Hard
Say you have an array for which the ith element is the price of a given stock on day i.
Design an algorithm to find the maximum profit. You may complete at most two transactions.
Note: You may not engage in multiple transactions at the same time (i.e., you must sell the stock before you buy again).

*/

#include <iostream>
#include <vector>
using namespace std;
//
int maxProfit(vector<int> &prices)
{
    int maxProfit = 0;
    int minPrice = INT_MAX;
    for (int i = 0; i < prices.size(); i++)
    {
        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
        }
        else if (prices[i] - minPrice > maxProfit)
        {
            maxProfit = prices[i] - minPrice;
        }
    }
    return maxProfit;
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