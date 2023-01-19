
#include<iostream>
using namespace std;

int insertionsort(int arr[],int s)
{
    
    for(int i=1;i<s;i++)
    {
        int temp = arr[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
 cout<<"sorted array using Bubble sort"<<endl;
 for(int i=0; i<s;i++)
 {
    cout<<"  "<<arr[i];
 }
}


int main()
{
    int arr[100]={64,25,12,22,11};
   insertionsort(arr,5);

}