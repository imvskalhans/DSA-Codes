#include<iostream>
using namespace std;

int binarysearch(int arr[], int size,int key)
{
    int first=0,last=size-1;
    
    
     int mid=first + (last-first/2);
    while(first<=last)
    {
      
        if(key==arr[mid])
        {
            cout<<arr[mid]<<"number found  at index i"<<mid<<endl;
           
        }
        if(key>arr[mid])
        {
            first=mid+1;
        }
        else
        {
            last=mid-1;
        }
        mid=first + (last-first/2);
        }
    
        
    
    return -1;
    
}

int main()
{
    int key,size;
    int arr[5]={0,2,2,4,5};
    int search =binarysearch(arr,5,2);
    cout<< "index" <<search<<endl;
    
} 