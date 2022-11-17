#include<iostream>
using namespace std;
int main()
{
    int n,i ;
     
    cout<<"enter n"<<endl;
    cin>>n ;
    i=1;
    while(i<=n)
    { int j=1;
   
        
       char ch=65; 
       while(j<=n)
       {

        cout<<ch<<" ";
        ch++;
        j++;
       }
       cout<<endl;
       
        i=i+1;
        
        
    }
}