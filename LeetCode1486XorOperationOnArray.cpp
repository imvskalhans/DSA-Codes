/*
22 Jan solution by Vishal Singh
Leetcode
1486. XOR Operation in an Array
Easy
You are given an integer n and an integer start.
Define an array nums where nums[i] = start + 2 * i (0-indexed) 
and n == nums.length.
Return the bitwise XOR of all elements of nums.
*/



#include<iostream>
using namespace std;


int xorOperation(int n, int start) {
      
      int nums[n];
        int ans = 0;

        //defining array
        for(int i = 0; i < n; i++)
            nums[i] = start + 2 * i;

        //XOR operation 
        for(int i = 0; i < n; i++)
            ans = ans ^ nums[i];

        return ans;
    }

int main()
{
    int n,start;
    cout<<"enter n and start intervals respectively"<<endl;
    cin>>n;
    cin>>start;
    int result=xorOperation(n,start);
    cout<<"Xor = "<<result<<endl;
}


/*
      wrong approach
       int nums[n];
        int ans=0;
        for(int i=start;i<=n;i=start + 2 * i)
        {
            ans=ans^nums[i];
        }
        return ans;
    }
    */

 /*
 another approach
 int ans=start;
        for(int i=1;i<n;i++)
        {
            int k=start + 2 * i ;
            ans ^=k;
        }
        return ans;

*/