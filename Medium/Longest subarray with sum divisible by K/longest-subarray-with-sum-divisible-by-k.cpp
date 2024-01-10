//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	       unordered_map<int, int> prefixSumIndex;
    int maxLength = 0;
    int currentSum = 0;

    // Initialize the hashmap with (0, -1) to handle the case when the subarray starts from the beginning
    prefixSumIndex[0] = -1;

    for (int i = 0; i < n; ++i) {
        currentSum += arr[i];
        int remainder = (currentSum % k + k) % k; // Handle negative remainder

        if (prefixSumIndex.find(remainder) != prefixSumIndex.end()) {
            maxLength = max(maxLength, i - prefixSumIndex[remainder]);
        } else {
            prefixSumIndex[remainder] = i;
        }
    }

    return maxLength;
	}
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}

// } Driver Code Ends