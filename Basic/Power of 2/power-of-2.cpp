//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        
    // If n is less than or equal to 0, it cannot be a power of 2.
    if (n <= 0) {
        return false;
    }
    
    // Count the number of set bits (1s) in the binary representation of n.
    int count = 0;
    while (n > 0) {
        count += n & 1;
        n >>= 1; // Right shift n by 1 bit.
    }
    
    // If there is only one set bit, it's a power of 2.
    return count == 1;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{

    int t;
    cin>>t;//testcases

    for(int i=0;i<t;i++)
    {
        long long n; //input a number n
        cin>>n;

        Solution ob;
         if(ob.isPowerofTwo(n))//Now, if log2 produces an integer not decimal then we are sure raising 2 to this value
             cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;

    }

    return 0;
}

// } Driver Code Ends