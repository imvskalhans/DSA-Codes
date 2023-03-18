/*

*/
 #include<iostream>
 #include<vector>
 #include<algorithm>
 #include <iomanip>
using namespace std;

bool checkXMatrix(vector<vector<int>>& grid){
        int sum = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                if(i==j || i+j==grid.size()-1){
                    if(grid[i][j]==0)
                    {
                        return false;
                    }
                }
                else
                {
                    if(grid[i][j]!=0)
                    {
                        return false;
                    }
                }
            }
        }
        
        return true;
    }

int main() 
{
    int nRows, mCols;
    cout<<"enter no of rows and columns"<<endl;
    cin >> nRows >> mCols;
    cout<<"enter the matrix entries"<<endl;
    vector<vector<int>> mat(nRows, vector<int>(mCols));

    for (int i = 0; i < nRows; i++) {
        for (int j = 0; j < mCols; j++) {
            cin >> mat[i][j];
        }
    }
    int result = checkXMatrix(mat);
    cout << "output = " << result << endl;
}