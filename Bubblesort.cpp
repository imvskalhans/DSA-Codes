#include<iostream>
using namespace std;

int bubblesort(int arr[],int s)
{
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                swap(arr[j],arr[j+1]);
            }

        }
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
   bubblesort(arr,5);

}