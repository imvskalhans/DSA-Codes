#include <iostream> 
using namespace std;
int main()
{

int i=0,j=0,ans=0;
int size,s;
cin>>size;
cin>>s;

    int arr[size];
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
   
    //Write your code here for(int i=0;i<arr;i++)
    for( i=0;i<size;i++)
    {        int d=0;
        for( j=i+1;j<size;j++)
        {
         int   sum =arr[i]+arr[j];
            if(sum==s)
            {
                cout<<s<<"found"<<arr[i]<<"and"<<arr[j]<<endl;
                arr[j]=754765476;
            }
               
        }
           
    }
}