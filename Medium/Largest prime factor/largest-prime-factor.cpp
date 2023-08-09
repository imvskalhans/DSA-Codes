//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    long long int largestPrimeFactor(int N){
        // code here
            long long int largestFactor = -1;

    // Divide N by 2 until it's no longer divisible by 2
    while (N % 2 == 0) {
        largestFactor = 2;
        N /= 2;
    }

    // Try dividing N by odd numbers starting from 3
    for (long long int i = 3; i * i <= N; i += 2) {
        while (N % i == 0) {
            largestFactor = i;
            N /= i;
        }
    }

    // If N is still greater than 2, it must be a prime factor
    if (N > 2) {
        largestFactor = N;
    }

    return largestFactor;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends