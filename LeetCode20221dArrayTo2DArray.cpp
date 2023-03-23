/*
LeeCode 2021: 1d Array to 2d Array
You are given a 0-indexed 1-dimensional (1D) integer array original, and two integers, m and n. You are tasked with creating a 2-dimensional (2D) array with m rows and n columns using all the elements from original.
The elements from indices 0 to n - 1 (inclusive) of original should form the first row of the constructed 2D array, the elements from indices n to 2 * n - 1 (inclusive) should form the second row of the constructed 2D array, and so on.
Return an m x n 2D array constructed according to the above procedure, or an empty 2D array if it is impossible.
*/

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> construct2DArray(vector<int> &original, int m, int n)
{
    int size = original.size();
    if (size != m * n)
    {
        return {};
    }
    vector<vector<int>> result(m, vector<int>(n));
    for (int i = 0; i < size; i++)
    {
        result[i / n][i % n] = original[i];
    }
    return result;
}

int main()
{
    vector<int> original = {1, 2, 3, 4};
    int m = 2;
    int n = 2;
    vector<vector<int>> result = construct2DArray(original, m, n);
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