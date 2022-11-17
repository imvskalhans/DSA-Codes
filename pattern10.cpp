#include<iostream>
using namespace std;
int main()
{
    int n,i ;
    char ch=65;
     
    cout<<"enter n"<<endl;
    cin>>n ;
    i=1;
    while(i<=n)
    { int j=1;
   
        
        
       while(j<=n)
       {
        cout<<ch<<" "; //use count=A and increment
        ch++;
        j++;
       }
       cout<<endl;
       ch=ch-2;
        i=i+1;
        
        
    }
}