#include<iostream>
using namespace std;

int getpivot(int arr[], int s , int e)
{
    int first=s,last=e;
    
    
     int mid=first + (last-first)/2;
    while(first<last)
    {
      
        if(arr[mid]>arr[0])
        {
           first=mid+1;
           
        }
        
        else
        {
            last=mid;
        }
        mid=first + (last-first)/2;
    }
      
    return first;
    
}

int main()
{
    int arr[100]={7,8,9,1,2,3,4,5};
    int size=8;
    cout<<" index of pivot element is "<<getpivot(arr,0,size-1)<<endl;
}