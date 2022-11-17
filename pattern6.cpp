#include<iostream>
using namespace std;
int main()
{
    int n,i ;
    cout<<"enter n"<<endl;
    cin>>n ;
    i=1;
    while(i<=n)
    { int j=1,k=0;
        k=k+i;
        
       while(j<=i)
       {
        
        cout<<k <<" ";  //or use cout<<i+j-1;
        k++;
        j++;
       }
       cout<<endl;
        i=i+1;
        
    }
    

}