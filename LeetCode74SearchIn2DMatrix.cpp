 #include<iostream>
 #include<vector>
 #include<algorithm>
 #include <iomanip>
using namespace std;

bool binarysearch(vector<vector<int>> nums ,int i, int j,int col, int target)
{
  int  s=i,e=j+col,temp=i;
    while(s<=e)
    {
        int mid = s+ (e-s)/2;
        if(target==nums[temp][mid])
        {
            return true;
        }
        else if(target<nums[temp][mid])
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }

    }
    return false;
}



bool searchMatrix(vector<vector<int>> &nums, int target)
{
    int row=nums.size();
    int col=nums[0].size();
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j=j+col)
        {
            if(nums[i][j]<=target&&nums[i][j+col-1]>=target)
            {
              return binarysearch(nums,i,j,col,target);
            }

        }
    }
    return false;


}


int main() {
    int nRows, mCols, target;
    cout<<"enter no of rows and columns"<<endl;
    cin >> nRows >> mCols>>target;
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

    bool result = searchMatrix(my2dvector,target);
    cout<<result;
    /*cout<<"new wave form matrix"<<endl;
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
    */

}