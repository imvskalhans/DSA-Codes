//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
      long long int help(int ind, int N, int coins[], int sum,vector<vector<long long int>>& dp){
        if(ind==N-1){
            return (sum%coins[N-1]==0);
        }
        
        if(dp[ind][sum]!=-1){
            return dp[ind][sum];
        }
        
        long long int notTake= help(ind+1,N,coins,sum,dp);
        long long int take=0;
        if(coins[ind]<=sum){
            take=help(ind,N,coins,sum-coins[ind],dp);
        }
        
        return dp[ind][sum]= take+notTake;
    }
        long long int count(int coins[], int N, int sum) {
        vector<vector<long long int>> dp(N,vector< long long int>(sum+1,-1));
        return help(0,N,coins,sum,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends