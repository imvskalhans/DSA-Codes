#include<iostream>
using namespace std;
int  main()
{ int i=0,j=1;

    int x[5]={1,2,3,4,5};
 while(j<=4)
   { 
    swap(x[i],x[j]);
    i=i+2;
    j=j+2;
    }
    for(i=0;i<=4;i++)
    {
        cout<<x[i]<<" ";
    }
    
}



