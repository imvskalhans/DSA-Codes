#include<iostream>
using namespace std;

// Approach 1























// approach 2

int selectionsort(int arr[],int s)
{
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s-1;j++)
        {
            if(arr[i]<arr[j])
            {
                swap(arr[j],arr[i]);
            }

        }
    }
 cout<<"sorted array using selection sort"<<endl;
 for(int i=0; i<s;i++)
 {
    cout<<"  "<<arr[i];
 }
}


int main()
{
    int arr[100]={64,25,12,22,11};
   selectionsort(arr,5);

}