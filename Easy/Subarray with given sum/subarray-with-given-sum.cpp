//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
       vector<int> result; // Initialize the result vector with size 2
    int left = 0, right = 0;
    long long currentSum = 0;

    while (right < n && left <= right) {
        while (right < n && currentSum < s) {
            currentSum += arr[right];
            right++;
        }

        while (left <= right && currentSum > s) {
            currentSum -= arr[left];
            left++;
        }

        if (currentSum == s) {
            if (left == 0 && right == 0) break;
            // Subarray found, set the left and right indices directly
            result.push_back(left + 1); // 1-based indexing
            result.push_back(right);
            return result; // Return the result immediately when a subarray is found
        }
    }

    // If no subarray with sum s is found
    result.push_back(-1);
    return result;
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends