#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=0;
    while(n>=pow(2,i))
    {
        if(n==pow(2,i))
        {
            cout<<"true"<<endl;
            break;
        }
        i++;
        
    }cout<<false;
}
