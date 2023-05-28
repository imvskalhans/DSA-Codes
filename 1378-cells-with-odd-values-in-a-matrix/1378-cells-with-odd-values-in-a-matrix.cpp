class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
    vector<vector<int>> matrix(m, vector<int>(n, 0)); // Initialize matrix

    // Perform increment operations
    for (auto index : indices) 
    {
        int row = index[0];
        int col = index[1];

        // Increment row elements
        for (int c = 0; c < n; c++) 
        {
            matrix[row][c]++;
        }

        // Increment column elements
        for (int r = 0; r < m; r++) 
        {
            matrix[r][col]++;
        }
    }

    int count = 0; // Count of odd-valued cells

    // Count odd-valued cells
    for (int r = 0; r < m; r++) 
    {
        for (int c = 0; c < n; c++) 
        {
            if (matrix[r][c] % 2 != 0) 
            {
                count++;
            }
        }
    }

    return count; // Return the count of odd-valued cells 
    }
};