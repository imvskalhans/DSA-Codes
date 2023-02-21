#include<iostream>
using namespace std;
void printn( int n)
{
    //base case
    if(n==0)
    {
        return;
    }
    //recursive call
    cout<<" "<<n<<" ";
   
    printn(n-1);
    
}

int main()
{
    int n;//cout<<"Enter";
    cin>>n;
    //int c=1;
    
    printn(n);
}