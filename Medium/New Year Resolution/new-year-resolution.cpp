//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
    
    public:
    int isPossible(int N , int coins[]) 
    {
    int dp[N + 1][2025];

    // Base case: No days and no coins
    for (int j = 0; j <= 2024; ++j) {
        dp[0][j] = 0;
    }
    dp[0][0] = 1;

    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j <= 2024; ++j) {
            // Copy the previous day's result
            dp[i][j] = dp[i - 1][j];

            // If the current coin value is less than or equal to j
            // and using the current coin on the ith day is possible
            if (coins[i - 1] <= j) {
                dp[i][j] = dp[i][j] || dp[i - 1][j - coins[i - 1]];
            }
        }
    }

    // Check for merchandise eligibility (2024, divisible by 20 or 24)
    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j <= 2024; ++j) {
            if (dp[i - 1][j]) {
                dp[i][j] = 1; // Extend the result from the previous day
                int newCoin = j + coins[i - 1];
                if (newCoin == 2024 || newCoin % 20 == 0 || newCoin % 24 == 0) {
                    return 1; // Merchandise eligibility achieved
                }
            }
        }
    }

    return dp[N][2024];
    }
    
};




//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int coins[N];
        for(int i=0 ; i<N ; i++)
            cin>>coins[i];

        Solution ob;
        cout << ob.isPossible(N,coins) << endl;
    }
    return 0;
}
// } Driver Code Ends