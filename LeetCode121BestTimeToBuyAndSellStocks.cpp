/*
leetcode 121. Best Time to Buy and Sell Stock (Easy)
Say you have an array for which the ith element is the price of a given stock on day i.
If you were only permitted to complete at most one transaction (i.e., buy one and sell one share of the stock), design an algorithm to find the maximum profit.
Note that you cannot sell a stock before you buy one.
*/
#include <iostream>
#include <vector>
using namespace std;
//

int maxProfit(vector<int>& prices) {
    int maxProfit = 0;
    int minPrice = INT_MAX;
    for (int i = 0; i < prices.size(); i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }
        else if (prices[i] - minPrice > maxProfit) {
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
