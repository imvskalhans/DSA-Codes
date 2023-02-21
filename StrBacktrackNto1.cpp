#include<iostream>
using namespace std;
void printn( int n,int c)
{
    //base case
    if(c>n)
    {
        return;
    }
    //recursive call
    
   
    printn(n, c+1);
    //backtrack
    
    cout<<" "<<c<<" ";
    
}

int main()
{
    int n;//cout<<"Enter";
    cin>>n;
    //int c=1;
    
    printn(n,1);
}