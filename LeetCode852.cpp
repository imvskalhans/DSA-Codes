#include<iostream>
using namespace std;

int peaksearch(int arr[], int size)
{
    int first=0,last=size-1;
    int ans=-1;
    
    
     int mid=first + (last-first/2);
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
        
       
        mid=first + (last-first/2);
        }
    
        
    
    return arr[ans];
    
}

int main()
{
    int key,size;
    int arr[100]={0,2,3,4,5,2,0};
    int search =peaksearch(arr,7);
    cout<<"peak value =" <<search<<endl;
    
} 