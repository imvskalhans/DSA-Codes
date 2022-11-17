#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter the n"<<endl;
    cin>>n;
    int i=2;
    while(i<=n)
    {
        if(i%2==0)
        {
            sum=sum+i;
         
           
        }
       
            i=i+1;

        }
    
    cout<< sum<<endl;
}