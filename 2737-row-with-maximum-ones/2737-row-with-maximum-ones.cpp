class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        //         {index,frequency}
        vector<int> res{-1, -1};
        for(int i = 0; i < mat.size(); ++i){
            int one = count(mat[i].begin(), mat[i].end(), 1);
            if(one > res[1])
                res = {i, one};
        }
        return res;
    }
};
/*
class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int m = mat.size(); // number of rows
        int n = mat[0].size(); // number of columns

        int maxOnes = 0; // maximum count of ones
        int maxRow = -1; // index of the row with maximum count of ones

        for (int i = 0; i < m; i++) 
        {
            int onesCount = 0; // count of ones in the current row

            for (int j = 0; j < n; j++) 
            {
                if (mat[i][j] == 1) 
                {
                    onesCount++;
                }
            }

            if (onesCount > maxOnes) 
            {
                maxOnes = onesCount;
                maxRow = i;
            }
        }

        if (maxRow == -1) 
        {
            return { -1, 0 };
        } 
        else 
        {
            return { maxRow, maxOnes };
        }
    }
};
*/