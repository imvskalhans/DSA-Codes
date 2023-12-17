//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    // code here
	        if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return arr[0];
    }

    int incl = max(arr[0], arr[1]);
    int excl = arr[0];

    for (int i = 2; i < n; i++) {
        int new_excl = max(incl, excl);
        incl = excl + arr[i];
        excl = new_excl;
    }

    return max(incl, excl);
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends