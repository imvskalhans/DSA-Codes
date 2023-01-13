#include<iostream>
using namespace std;
int  main()
{ int i=0,j=1;
int size;
cin>>size;

    int a[size],b[size],count[100];
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<=size;i++)
    {
        b[i]=a[i];
    }
    for(i=0;i<size;i++)
    {
        int d=0;
        for(j=0;j<size;j++)
        {
            if(a[i]==a[j])
                {
                    d++;
                    
                count[i]=d;
                    
                }
            
        }
       
            if(d>=2)
                {
                    cout<<a[i]<<" is duplicate - no of times--"<<d<<endl;
                    //break;
                }
                else{
                    cout<<a[i]<<" is unique"<<endl;
                }
        }
    
}


