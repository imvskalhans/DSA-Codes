
#include<iostream>
using namespace std;
int  main()
{ int i=0,j=0;
    int a[5]={1,2,3,4,5};
   int b[7]={3,4,5,6,7,8,9};
   int c[5],k=0;
    
    for(i=0;i<5;i++)
    {
        for(j=0;j<7;j++)
        {
            if(a[i]==b[j])
                {
                    while(k<=4)
                    {
                         c[k]=a[i]; 
                         k++;  
                    }
                    
                }
            
        }
       
    }
        for(int m=0;m<6;m++)
        {
            cout<<c[m];
        }
       
           
        
    
}

