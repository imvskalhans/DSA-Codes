/*
1752. Check if Array Is Sorted and Rotated
Easy 
Given an array nums, return true if the array was originally sorted in 
non-decreasing order, then rotated some number of positions (including zero). 
Otherwise, return false.
There may be duplicates in the original array.
Note: An array A rotated by x positions results in an array B of the same 
length such that A[i] == B[(i+x) % A.length], where % is the modulo operation.
*/
#include<bits/stdc++.h> 
#include<iostream>
using namespace std;

int peaksearch(int arr[], int size)
{
    int first=0,last=size-1;
    int ans=-1;
    
    
     int mid=first + (last-first)/2;
    while(first<=last)
    {
      
        if(arr[mid]>=arr[mid-1])
        {
            
            ans=mid;
             first=mid+1;
        }
         else
        {
            last=mid-1;
        }
        
       
        mid=first + (last-first)/2;
        }
    
        
    
    return arr[ans];
    
}


int main()
{
    // Get the array
    int arr[] = {2,1,3,4};
 
    // Compute the sizes
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // Print the array
    cout << "Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
 
    // Find the maximum element
    int m=*max_element(arr, arr + n);
    int search =peaksearch(arr,n);
    cout<<"peak value =" <<search<<endl;
   
    if(m==search)
    {
        cout<<"true"<<endl;
    }
    else
    {
    cout<<"false"<<endl;
    }
    
} 