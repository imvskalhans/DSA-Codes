#include<iostream>
using namespace std;

bool possiblesolution(int arr[],int m , int n, int mid)
{
    int pagesum=0;
    int stucount=1;
    
    for(int i=0;i<n;i++)
    {
         if(pagesum+arr[i]<=mid){
        pagesum=pagesum+arr[i];
        cout<<"pagesum= "<<pagesum<<endl;
         }
       else{
        stucount++;
        if(stucount>m||arr[i]>mid)
        {
            return false;
        }
        pagesum=arr[i];
       }
      

    }
 return true;

}

int bookallocation(int arr[],int m, int n)
{
    int s=0;
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        sum=sum+arr[i];
    }
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;
    cout<<"mid"<<mid<<endl;
    while(s<=e)
    {
        if(possiblesolution(arr,m,n,mid))
        {
            ans=mid; 
            e=mid-1;
            cout<<"end"<<e<<endl;

        }
        else{
            s=mid+1;
            cout<<"start"<<s<<endl;
        }
        mid=s+(e-s)/2;
    }
    cout<< "answeerrrr "<<ans<<endl;
    return ans;
}

int main()
{
    //book allocation
    int m,n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[100]={10,20,30,40};
    cout<<"enter numbers of students"<<endl;
    cin>>m;
    int answer = bookallocation(arr,m,n);
    cout<<"book allocation answer = "<<answer<<endl;

}