//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
            if (n == 0)
        return 0;
    if (n == 1)
        return arr[0];

    // Create a DP array to store the maximum loot at each house
    int dp[n];

    // Base cases for the first two houses
    dp[0] = arr[0];
    dp[1] = max(arr[0], arr[1]);

    // Fill in the DP array using a bottom-up approach
    for (int i = 2; i < n; i++)
    {
        dp[i] = max(dp[i - 1], dp[i - 2] + arr[i]);
    }

    // The final answer will be in dp[n-1]
    return dp[n - 1];
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends