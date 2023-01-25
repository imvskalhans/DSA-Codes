/*
leetcode
54. Spiral Matrix
Given an m x n matrix, return all elements of the matrix in spiral order.

 */
 #include<iostream>
 #include<vector>
 #include<algorithm>
 #include <iomanip>
using namespace std;

 vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<int> ans;
        int count=0;
        //indexes
        int srow=0;
        int scol=0;
        int erow=row-1;
        int ecol=col-1;

        while(count<row*col)
        {
            //printing the starting row
            for(int i=scol;i<=ecol&&count<row*col;i++)
            {
                ans.push_back(matrix[srow][i]);
                count++;
            }srow++;
             //printing the ending col
            for(int i=srow;i<=erow&&count<row*col;i++)
            {
                ans.push_back(matrix[i][ecol]);
                count++;
            }ecol--;
             //printing the ending col
            for(int i=ecol;i>=scol&&count<row*col;i--)
            {
                ans.push_back(matrix[erow][i]);
                count++;
            }erow--;
             //printing the starting row
            for(int i=erow;i>=srow&&count<row*col;i--)
            {
                ans.push_back(matrix[i][scol]);
                count++;
            }scol++;
        }
        return ans;
    }

int main() {
    int nRows, mCols;
    cout<<"enter no of rows and columns"<<endl;
    cin >> nRows >> mCols;
    cout<<"enter the matrix entries"<<endl;
    vector<vector<int>> my2dvector(nRows, vector<int>(mCols));

    for (int i = 0; i < nRows; i++) {
        for (int j = 0; j < mCols; j++) {
            cin >> my2dvector[i][j];
        }
    }

    cout<<"entered matrix is - "<<endl;
    
    for (int i = 0; i < my2dvector.size(); i++) {
        for (int j = 0; j < my2dvector[i].size(); j++) {
            std::cout << my2dvector[i][j] << " ";
        }
        std::cout << std::endl;
    }
    vector<int> result = spiralOrder(my2dvector);
    cout<<"spiral order "<<endl;
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }cout<<endl;
}