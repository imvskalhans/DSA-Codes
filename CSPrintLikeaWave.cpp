#include <bits/stdc++.h> 
#include<iostream>
#include<vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
  vector<int>v;
 for(int i=0;i<mCols;i++){
     if(i%2==0)
     {
         for(int j=0;j<nRows;j++)
         v.push_back(arr[j][i]);
     }
     else
     {
         for(int j=nRows-1;j>=0;j--)
         v.push_back(arr[j][i]);
     }
 }
 return v;
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

    vector<int> result = wavePrint(my2dvector,nRows,mCols);
    cout<<"new wave form matrix"<<endl;
    int k=0;
    for(int i = 0; i < nRows; i++)
    {
        for(int j = 0; j < mCols; j++)
        {
            cout << result[k] << " ";
            k++;
        }
        cout <<endl;
    }
    return 0;
}
