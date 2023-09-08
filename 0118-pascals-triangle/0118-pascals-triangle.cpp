class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        //create a 2d vector of numRows size to store answer
        vector<vector<int>> ans(numRows);

        //loop to generate pascals triangle
        for(int i = 0; i<numRows ; i++)
        {
            //resize the vector for new row as row + 1
            ans[i].resize(i+1);

            //intialize first and last elemet to be 1
            ans[i][0] = ans[i][i] = 1;

            //traverse remaing element and generate values
            for(int j = 1 ; j<i ; j++)
            {
                //ans will be sum of two value of row above that is i-1 row
                ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
            }
        }
        return ans;
    }
};