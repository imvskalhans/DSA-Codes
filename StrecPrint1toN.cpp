#include<iostream>
using namespace std;
void printn( int c, int n)
{
    //base case
    if(c==n)
    {
        return;
    }
    //recursive call
    cout<<" "<<c<<" ";
   // c=c+1;
    //c++;
    printn(++c,n);
    
}

int main()
{
    int n;//cout<<"Enter";
    cin>>n;
    int c=1;
    
    printn(c,n);
}