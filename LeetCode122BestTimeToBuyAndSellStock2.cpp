/*

*/
#include <iostream>
#include <vector>
using namespace std;
//
int maxProfit(vector<int> &prices)
{
    int maxProfit = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        if (prices[i] > prices[i - 1])
        {
            maxProfit += prices[i] - prices[i - 1];
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