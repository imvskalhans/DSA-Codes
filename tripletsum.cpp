#include <iostream> 
using namespace std;
int main()
{

int i=0,j=0,k=0,sum=0;
int size,s;
cin>>size;
cin>>s;

    int arr[size];
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
   
    //Write your code here for(int i=0;i<arr;i++)
    for( i=0;i<size-2;i++)
    {       
           sum =arr[i]+arr[i+1]+arr[i+2];
            if(sum==s)
            {
                cout<<s<<"found"<<arr[i]<<"and"<<arr[i+1]<<arr[i+2]<<endl;
                arr[i]=754765476;
                
            }   
    }
}