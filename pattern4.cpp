#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter n"<<endl;
    cin>>n ;
    i=1;
    while(i<=n)
    {
        int j=1;
        
       while(j<=i)
       {
        
        cout<<"*";

        j++;
       }
       cout<<endl;
        i=i+1;
        
    }
}
