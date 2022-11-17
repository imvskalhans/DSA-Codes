#include<iostream>
using namespace std;
int main()
{
    int n,i;
    char ch=68;
    
     
    cout<<"enter n"<<endl;
    cin>>n ;
    i=1;
    while(i<=n)
    { int j=1;
   
    
        
       while(j<=i)
       {
        char chh=ch-i+j;
        cout<<chh<<" ";
        
        j++;
       }
       cout<<endl;
       
        i=i+1;
        
        
    }
}