//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        // Your code here
            int xorResult = m ^ n;

    // If M and N are the same, return -1
    if (xorResult == 0) {
        return -1;
    }

    // Find the position of the rightmost set bit in the XOR result
    int position = 1;
    while ((xorResult & 1) == 0) {
        xorResult >>= 1;
        position++;
    }

    return position;
    }
};

//{ Driver Code Starts.

// Driver Code
int main()
{   
    int t;
    cin>>t; //input number of testcases
    while(t--)
    {
         int m,n;
         cin>>m>>n; //input m and n
         Solution ob;
         cout << ob.posOfRightMostDiffBit(m, n)<<endl;
    }
    return 0;     
} 
// } Driver Code Ends