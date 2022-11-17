#include <iostream> 
using namespace std;
int main()
{

int i=0,j=0,ans=0;
int size;
cin>>size;

    int arr[size];
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
   
    //Write your code here for(int i=0;i<arr;i++)
    for( i=0;i<size;i++)
    {        int d=0;
        for( j=0;j<size;j++)
        {
            if(arr[i]==arr[j])
                {
                    d++;
                }
        }
            if(d>=2)
                {
                    //cout<<a[i]<<" is duplicate"<<endl;
                    //break;
                ans=arr[i];
                }
              
        }
   cout<<ans<<"is duplicate"<<endl;
    }
    