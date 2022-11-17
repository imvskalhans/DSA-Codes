#include<iostream>
using namespace std;
int main()
{
    int n,i;
    
    
     
    cout<<"enter n"<<endl;
    cin>>n ;
    i=1;
    while(i<=n)
    { int j=1;
        int k=n;
       while(j<=n)
       {
        
        cout<<k<<" ";
        
        j++;
        k--;
       }
       cout<<endl;
       
        i=i+1;
        
        
    }
}