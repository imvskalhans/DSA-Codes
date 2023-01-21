#include<iostream>
using namespace std;

/*int rotate(int arr[],int s,int k)
{
   int j=0;
    while(j<k)
    {
       int temp=arr[0];
       int i=0;
        for(;i<s-1;i++)
        {
            arr[i]=arr[i+1];
        }
        arr[i]=temp;
        j++;

    }
    for(int i=0;i<s;i++)
    {
        cout<< arr[i]<<" ";

    }
    
}
*/
int rotate(int arr[],int s,int k)
{
   int j=0;
    while(j<k)
    {
       int temp=arr[s-1];
       int i=s;
        for(;i>0;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[i]=temp;
        j++;

    }
    for(int i=0;i<s;i++)
    {
        cout<< arr[i]<<" ";

    }
    
}

int main()
{
    int k;
    cout<<"k =";
    cin>>k;
   
    int arr[100]={1,2,3,4,5,6,7};
    int search =rotate(arr,7,k);
  
}

