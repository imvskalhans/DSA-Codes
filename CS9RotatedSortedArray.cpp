#include<iostream>

using namespace std;

int getpivot(int arr[], int s , int e)
{
    int first=s,last=e;
    
    
     int mid=first + (last-first)/2;
    while(first<last)
    {
      
        if(arr[mid]>=arr[0])
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
int binarysearch(int arr[], int s, int e, int key)
 {
    int first=s,last=e;
    int mid=first+(last-first)/2;
    while(first<=last)
    {
        if(arr[mid]==key)
        {
            return mid;
          
        }
        if(key>arr[mid])
        {
            first=mid+1;
        }
        else{
            last=mid-1;
        }
        mid=first+(last-first)/2;

    }
    cout<<"element not found"<<endl;
    return -1;

 }

int rotatedsearch(int arr[],int s, int e, int key)
{
   
    int pivot=getpivot(arr,0,6);
    if(key>=arr[pivot]&&key<=arr[6])
    {
        
        return binarysearch(arr,pivot,6,key);
        cout<<"bs ="<<binarysearch(arr,pivot,6,key)<<endl;

    }
    else
    {
        return binarysearch(arr,0,pivot-1,key);
         cout<<"bs ="<<binarysearch(arr,0,pivot-1,key)<<endl;

    }
   

}
int main()
{
    int arr[10]={7,8,9,1,2,3,4};
    int key;
    cout<<"enter the key value"<<endl;
    cin>>key;

    
     cout<<" index of pivot element is "<<getpivot(arr,0,6)<<endl;

    cout<<" index of rotaed element is "<<rotatedsearch(arr,0,6,key)<<endl;

}