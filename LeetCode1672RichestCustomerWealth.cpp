/*
LeeCode 1672 Richest Customer Wealth
You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.
*/
#include <iostream>
#include <vector>
using namespace std;

int maximumWealth(vector<vector<int>> &accounts)
{
    int maxWealth = 0;
    for (int i = 0; i < accounts.size(); i++)
    {
        int temp = 0;
        for (int j = 0; j < accounts[i].size(); j++)
        {
            temp += accounts[i][j];
        }
        if (temp > maxWealth)
        {
            maxWealth = temp;
        }
    }
    return maxWealth;
}

int main()
{
    vector<vector<int>> accounts = {{1, 2, 3}, {3, 2, 1}};
    cout << maximumWealth(accounts) << endl;
    return 0;
}