//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> A, long long N, long long M){
    //code
       if (M == 0 || N == 0) return 0;

    // Step 1: Sort the array in non-decreasing order
    std::sort(A.begin(), A.end());

    // Step 2: Initialize pointers and minimum difference
    int left = 0;
    int right = M - 1;
    long long minDifference = LLONG_MAX;

    // Step 3 to 7: Sliding window approach
    while (right < N) {
        // Step 4: Calculate the current difference
        long long currentDifference = A[right] - A[left];

        // Step 5: Update the minimum difference
        minDifference = std::min(minDifference, currentDifference);

        // Step 6: Move the right pointer one step to the right
        left++;
        right++;
    }

    // Step 8: Return the minimum difference
    return minDifference;
    }
};

//{ Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
// } Driver Code Ends