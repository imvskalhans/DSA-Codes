/*
1492. The kth Factor of n
Medium
962
236
Companies
You are given two positive integers n and k. A factor of an integer n is 
defined as an integer i where n % i == 0.
Consider a list of all factors of n sorted in ascending order, 
return the kth factor in this list or return -1 if n has less than k factors.

 
*/


#include<iostream>
#include<vector>
using namespace std;

int kthFactor(int n, int k) {
        int count=0,i=1;
        while(i<=n)
          {
                if(n%i==0)
            {
                count++;
            }
             if(count==k)
            {
                return i;
            }
            i++;
        }
         return -1;
    }

    int main()
{
    int n , k;
    cout<<"enter n and k"<<endl;
    cin>>n;
    cin>>k;
  
    int result=kthFactor(n,k);
    cout<<"kth factor of n is = "<<result<<endl;
}