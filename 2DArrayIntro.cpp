#include<iostream>
using namespace std;
 
 int main()
 {
    int row,col;
    cout<<"enter the rows and columns"<<endl;
    cin>>row;
    cin>>col;
    int arr[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"printing the array"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    //sum of the rows of 2d array

    cout<<"row sum of 2d array"<<endl;
    int sum=0;int maxi=-1,c=-1;
    for(int i=0;i<row;i++)
    {
        int sum=0;
        for(int j=0;j<col;j++)
        { 
            sum=sum+arr[i][j]; 
            if(maxi<sum){
            maxi=sum;
            c=i;}  
        } 
    }
    cout<<maxi<<endl;
     cout<<c;

    //reversing/transpose the 2d matrix

    //multiplicaton of 2d array

    //addition of 2d matrix




 }