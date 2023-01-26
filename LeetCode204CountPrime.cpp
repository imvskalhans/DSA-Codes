#include<iostream>
using namespace std;
int main()
    {
        int n;
        cout << "enter number" << endl;
        cin >> n;
    
        int d=0;
       for(int j=2;j<=n;j++){ int k=0;
    for(int i=1;i<=j;i++)
    {
        if(j%i==0)
        {
            k++;
        }
    }
     if(k==2)
{
    d++;

}
}
   cout<<d;     
    }
    


        
    
