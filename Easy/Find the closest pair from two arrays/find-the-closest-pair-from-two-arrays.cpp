//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function teamplate for C++

class Solution{
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
        //code here
 vector<int> ans;
    int diff = INT_MAX; // Initialize the minimum difference with a large value

    // Sort the arrays in non-decreasing order
    sort(arr, arr + n);
    sort(brr, brr + m);

    // Initialize pointers for both arrays
    int i = 0, j = m - 1;

    while (i < n && j >= 0) {
        int pairSum = arr[i] + brr[j];
        int pairDiff = abs(x - pairSum);

        // Check if the current pair has a smaller difference
        // than the previously found closest pair
        if (pairDiff < diff) {
            // Update the closest pair and its difference
            ans.clear(); // Clear the previous closest pair
            ans.push_back(arr[i]);
            ans.push_back(brr[j]);
            diff = pairDiff;
        }

        // Move pointers based on the pair sum
        if (pairSum < x)
            i++;
        else
            j--;
    }

    return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	int m,n,x;
	while(t--)
    {
        cin>>n>>m;
        int a[n],b[m];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        for(int i=0;i<m;i++)
            cin>>b[i];
            
        cin>>x;
        
        vector<int> ans;
        Solution ob;
        ans = ob.printClosest(a, b, n, m, x);
        cout << abs(ans[0] + ans[1] - x) << endl;
        
    }
    return 0;
}

// } Driver Code Ends