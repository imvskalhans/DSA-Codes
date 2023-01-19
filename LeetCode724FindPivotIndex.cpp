#include<iostream>
using namespace std;
int pivot(int arr[],int size)
{
    int first=0,last=size-1;
    int ls=0,rs=0;
     int mid=first + (last-first/2);
     int sumls(int mid)
     {
     for(int i=0;i<mid;i++)
     {
        ls=ls+arr[i];
     }
     return ls;
     }
     int sumrs(int mid){
     for(int i=mid+1;i<=last;i++)
     {
        rs=rs+arr[i];
     }
     return rs;
     }
    while(first<=last)
    {
      int pivotele(int rs,int ls){
        if(ls==rs)
        {
            cout<<"piviot found"<<mid<<endl;  
        }
         else if(rs>ls)
         {
                mid=mid+1;
                return mid;
         }
         else{
            mid=mid-1;
            return mid;
         }
      }
        
        }
    
}
int main()
{
    int size;
    int arr[100]={1,7,3,6,5,6};
    int search =pivot(arr,6);
   cout<<"peak value =" <<pivot<<endl;
    
} 