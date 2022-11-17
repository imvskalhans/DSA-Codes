#include<iostream>
using namespace std;
int main()
{ 
int sum=0;
    int a[10]={1,2,3,4,5,6,7,8,9};
    int x=5;
 bool p=true;
   
    for(int i=0;i<10;i++)
    {
        if(x==a[i])
        {
         p=false;

        }
    }
      if(p==false)
      {
        cout<<"number found";
      }
       
    
    
}