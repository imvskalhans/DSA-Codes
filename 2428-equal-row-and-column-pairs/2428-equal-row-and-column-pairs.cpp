class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        int count = 0;

        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                vector<int> row = grid[i];
                vector<int> column;
                for (int k = 0; k < n; k++) 
                {
                    column.push_back(grid[k][j]);
                }

                if (row == column)
                {
                    count++;
                }
            }
        }

        return count;
    }
};