//{ Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long countWays(int n, int k){
        // code here
           if (n == 1) {
            return k;
        }

        const long long mod = 1e9 + 7;
        
        long long withoutSameColor = k;
        long long withSameColor = 0;

        for (int i = n - 2; i >= 0; i--) {
            long long prevWithoutSameColor = withoutSameColor;
            withoutSameColor = (((k - 1) * (withoutSameColor + withSameColor)) % mod);
            withSameColor = prevWithoutSameColor;
        }

        return (withoutSameColor + withSameColor) % mod;
    }
};

//{ Driver Code Starts.

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		Solution ob;
		cout<<ob.countWays(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends