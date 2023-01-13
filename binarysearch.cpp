#include<iostream>
using namespace std;
int main()
{
    int key,first=0,last=4 ,mid,n=5;
    int arr[5]={1,2,3,4,5};
    key=5;
    while(n>0)
    {
        mid=(first+last)/2;
    
        if(key==arr[mid])
        {
            cout<<arr[mid]<<"number found  at index i"<<mid<<endl;
            break;
        }
        else
        {
        if(key>arr[mid])
        {
            first=mid+1;
        }
        else
        {
            last=mid-1;
        }
        n--;
        }
    }
    return 0;
    
    
} 