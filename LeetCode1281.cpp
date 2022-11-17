#include<iostream>
using namespace std;
int main()
{
    int n,s=0,p=1; 
    cout<<"enter the number"<<endl;
    cin>>n;
    while(n!=0)
    {
        int d=n%10;
        s=s+d;
        p=p*d;
        n=n/10;
        
    }
    cout<<"sum of digit = "<<s<<"  product of digit = "<<p<<endl;
}