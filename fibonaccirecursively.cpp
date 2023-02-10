/*

class Solution {
public:
    int fib(int n) {
        vector<int> dp(100,-1);
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++) dp[i]=dp[i-1]+dp[i-2];
        return dp[n];
    }
};
*/
#include<iostream>
using namespace std;

int fibo(int n)
{    
   if(n==1)
   return 0;
   if(n==2)
   return 1;
   return fibo(n-1)+fibo(n-2);
}

int main()
{
int n;
    cout<<"enter the n"<<endl;
    cin>>n;
    cout<<fibo(n);
    return 0;
}