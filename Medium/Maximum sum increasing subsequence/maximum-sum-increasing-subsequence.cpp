//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	        int maxSum[n];  // Create an array to store maximum sum subsequence ending with arr[i]
    
    // Initialize maxSum for all elements as their own value
    for (int i = 0; i < n; i++) {
        maxSum[i] = arr[i];
    }

    // Compute maximum sum values
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j] && maxSum[i] < maxSum[j] + arr[i]) {
                maxSum[i] = maxSum[j] + arr[i];
            }
        }
    }

    // Find the maximum value in maxSum
    int result = maxSum[0];
    for (int i = 1; i < n; i++) {
        if (maxSum[i] > result) {
            result = maxSum[i];
        }
    }

    return result;
	}  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends