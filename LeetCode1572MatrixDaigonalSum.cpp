/*

*/
 #include<iostream>
 #include<vector>
 #include<algorithm>
 #include <iomanip>
using namespace std;

int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(i==j || i+j==mat.size()-1){
                    sum+=mat[i][j];
                }
            }
        }
        return sum;
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
    int result = diagonalSum(mat);
    cout << "output = " << result << endl;
}