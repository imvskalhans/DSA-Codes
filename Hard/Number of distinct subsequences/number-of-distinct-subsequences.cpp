//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:	
  const int MOD = 1000000007;
	int distinctSubsequences(string s)
	{
	    // Your code goes here
	       int n = s.length();
    vector<long long> dp(n + 1, 0);

    dp[0] = 1; // Empty subsequence
    vector<int> lastIndex(26, -1);

    for (int i = 1; i <= n; i++) {
        dp[i] = (2 * dp[i - 1]) % MOD;

        if (lastIndex[s[i - 1] - 'a'] != -1) {
            dp[i] = (dp[i] - dp[lastIndex[s[i - 1] - 'a']] + MOD) % MOD;
        }

        lastIndex[s[i - 1] - 'a'] = i - 1;
    }

    return static_cast<int>(dp[n] - 1) +1; // Subtract 1 to exclude the empty string
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

        Solution ob;
   		cout << ob.distinctSubsequences(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends