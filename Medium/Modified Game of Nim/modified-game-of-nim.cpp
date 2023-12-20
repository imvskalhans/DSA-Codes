//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int findWinner(int n, int A[]){
        // code here
    int xorSum = 0;

    // Calculate the initial XOR of the array
    for (int i = 0; i < n; ++i) {
        xorSum ^= A[i];
    }

    // If the XOR is initially zero or the array length is even, player 1 wins; otherwise, player 2 wins
    return (xorSum == 0 || n % 2 == 0) ? 1 : 2;
    
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i = 0;i < n;i++)
            cin>>A[i];
        
        Solution ob;
        cout<<ob.findWinner(n, A)<<"\n";
    }
    return 0;
}
// } Driver Code Ends