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
        char start='A'+i-1;
       while(j<=n)
       {
        cout<<start<<" "; //use count=A and increment
        start++;
        j++;
       }
       cout<<endl;
       
        i=i+1;
        
        
    }
}