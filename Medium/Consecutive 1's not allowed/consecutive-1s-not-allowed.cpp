//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	    // code here
int mod = 1000000007;
        vector<vector<int>>dp(2,vector<int>(n,-1));
        dp[0][n-1] = 1;
        dp[1][n-1] = 1;
        for(int i = n-2; i >= 0; i--)
        {
            dp[0][i] = (dp[0][i+1] + dp[1][i+1])%mod;
            dp[1][i] = dp[0][i+1];
        }
        return (dp[0][0]+dp[1][0])%mod;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends