#include<iostream>
using namespace std;
int main()
{
    int n,i, k=1;
    cout<<"enter n"<<endl;
    cin>>n ;
    i=1;
    while(i<=n)
    {
        int j=1;
        
       while(j<=i)
       {
        
        cout<<k <<" ";
        k++;
        j++;
       }
       cout<<endl;
        i=i+1;
        
    }
    

}