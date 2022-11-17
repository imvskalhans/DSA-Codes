#include<iostream>
using namespace std;
int main()
{ 
int sum=0;
    int a[100]={1,2,3,4,5,6,7,8,9};
   
    for(int i=0;i<100;i++)
    {
        sum=sum+a[i];
    }
    cout<<"sum ="<<sum;
}