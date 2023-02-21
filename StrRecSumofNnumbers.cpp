#include<iostream>
using namespace std;
int sumn( int n,int& sum,int & fact)
{
    //base case
    if(n<1)
    {
        cout<<" factorial = "<<fact<<endl;
        return sum;
    }
    //recursive call
    
    sum=sum+n;
    fact=fact*n;
    sumn(n-1,  sum,fact);
    
    
}

int main()
{
    int n;//cout<<"Enter";
    cin>>n;
    int sum=0;
    int fact=1;
    //int c=1;
    
   int result= sumn(n,sum,fact);
    cout<<"sum = "<<result<<endl;
}