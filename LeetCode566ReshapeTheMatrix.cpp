/*
LeetCode 566. Reshape the Matrix
In MATLAB, there is a very useful function called 'reshape', which can reshape a matrix into a new one with different size but keep its original data.
You're given a matrix represented by a two-dimensional array, and two positive integers r and c representing the row number and column number of the wanted reshaped matrix, respectively.
The reshaped matrix need to be filled with all the elements of the original matrix in the same row-traversing order as they were.
If the 'reshape' operation with given parameters is possible and legal, output the new reshaped matrix; Otherwise, output the original matrix.
*/

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>> &nums, int r, int c)
{
    int row = nums.size();
    int col = nums[0].size();
    if (row * col != r * c)
    {
        return nums;
    }
    vector<vector<int>> result(r, vector<int>(c));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int index = i * col + j;
            result[index / c][index % c] = nums[i][j];
        }
    }
    return result;
}   

int main()
{
    vector<vector<int>> nums = {{1, 2}, {3, 4}};
    int r = 1;
    int c = 4;
    vector<vector<int>> result = matrixReshape(nums, r, c);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
/*
approach 2
vector<vector<int>> matrixReshape(vector<vector<int>> &nums, int r, int c)
{
    int row = nums.size();
    int col = nums[0].size();
    if (row * col != r * c)
    {
        return nums;
    }
    vector<vector<int>> result(r, vector<int>(c));
    for (int i = 0; i < row * col; i++)
    {
        result[i / c][i % c] = nums[i / col][i % col];
    }
    return result;
}
*/