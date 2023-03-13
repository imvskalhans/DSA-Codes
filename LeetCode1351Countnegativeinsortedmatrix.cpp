/*
leetcode 1351. Count Negative Numbers in a Sorted Matrix
Given a m * n matrix grid which is sorted in non-increasing order both row-wise and column-wise.
Return the number of negative numbers in grid.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int countNegatives(vector<vector<int>> &grid)
{
    int count = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            if (grid[i][j] < 0)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    vector<vector<int>> grid;
    int input;
    cout << "Enter the numbers: ";
    while (cin >> input)
    {
        grid.push_back(input);
    }
    int result = countNegatives(grid);
    cout << result;
}