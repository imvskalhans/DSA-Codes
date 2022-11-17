#include<iostream>
using namespace std;
int main()
{
    int a[5]={-12,-33,-32,-2,-4};
    int MAX=a[0],MIN=a[0];
    int i=0;
    while(i<5)
    {
        if(a[i]>MAX)
        {
            MAX=a[i];
        }
        if(a[i]<MIN)
        {
            MIN=a[i];
        }
       
        i++;

    }
    cout<<MAX<<endl;
    cout<<MIN<<endl;
}