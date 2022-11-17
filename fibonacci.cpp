#include<iostream>
using namespace std;
int main()
{
int n;
    cout<<"enter the n"<<endl;
    cin>>n;
    cout<<"0"<<" 1"; 
    int a=0,b=1;
    
    for(int i=1;i<=n;i++)
    {
      int c=a+b;
       cout<<" "<< c;
      a=b;
       b=c ;
       

    }
}