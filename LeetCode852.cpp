#include<iostream>
#include<vector>
using namespace std;
/*
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
*/
int peakIndexInMountainArray(vector<int>& arr) {
         int first=0,last=arr.size()-1;
    
    
     int mid=first + (last-first)/2;
    while(first<last)
    {
      
        if(arr[mid]<arr[mid+1])
        {
          
             first=mid+1;
        }
         else
        {
            last=mid;
        }
        
       
        mid=first + (last-first)/2;
    }
    cout<<"peak element "<<arr[mid]<<endl;
    return mid;
}

int main()
{
    vector<int> nums;
    cout<<"enter nums"<<endl;
     int input;
    while (std::cin >> input) {
        nums.push_back(input);
    }
    int result=peakIndexInMountainArray(nums);
    cout<<"peak index = "<<result<<" ";
}