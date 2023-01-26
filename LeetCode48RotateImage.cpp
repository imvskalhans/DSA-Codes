#include<iostream>
 #include<vector>
 #include<algorithm>
 #include <iomanip>
using namespace std;

vector<vector<int>> rotate(vector<vector<int>>& matrix) {

vector<vector<int>> ans (matrix.size(), vector<int>(matrix[0].size()));
int col=(matrix[0].size()-1);
         for(int i=0;i<matrix.size();i++)
		 {
			 for(int j=0;j<matrix[0].size();j++)
			 {
				 ans[j][i]=matrix[col][j];
			 }
             col--;
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
    vector<vector<int>> result = rotate(my2dvector);
    cout<<"rotated matrix "<<endl;
    for(int i=0;i<result.size();i++)
    {
        for(int j=0;j<result[0].size();j++){
        cout<<result[i][j]<<" ";
    }cout<<endl;
}
}