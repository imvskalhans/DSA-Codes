/*

*/

#include<iostream>
using namespace std;
  double myPow(double x, int n) {
            // base cases
    if (n == 0) {
        return 1;
    }
    if (n == 1) {
        return x;
    }
    if (n == -1) {
        return 1 / x;
    }
    
    // recursive relation
    double ans = myPow(x, n / 2);
    
    if (n % 2 == 0) 
    {
        return ans * ans;
    } 
    else 
    {
        if (n > 0)
         {
            return x * ans * ans;
        } 
        else
        {
            return (1 / x) * ans * ans;
        }
    }
}
int main()
{
    int x,n;
    cout<<"enter x and n respectively "<<endl;
    cin>>x>>n;
    cout<<myPow(x,n)<<endl;
}
