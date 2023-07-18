//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    // Code here
		    int n = str.length();
		 
		    int dp[n+1][n+1];
		 
		    for (int i=n; i>=0; i--)
		    {
		        for (int j=n; j>=0; j--)
		        {
		            if(i==n or j==n) dp[i][j]=0;
		            else if (str[i] == str[j] && i!=j)
		                dp[i][j] =  1 + dp[i+1][j+1];   
		            else
		                dp[i][j] = max(dp[i][j+1], dp[i+1][j]);
		        }
		    }
		    
		    return dp[0][0];
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends