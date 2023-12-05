//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
    // Sort the array in non-decreasing order
 sort(arr, arr + n);
        
        int ans = arr[n - 1] - arr[0];
        
        for(int i = 1; i < n; i++){
            if(arr[i] < k)
                continue;
                
            int MIN = min(arr[0] + k, arr[i] - k);
            int MAX = max(arr[n - 1] - k, arr[i - 1] + k);
            
            ans = min(ans, MAX - MIN);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends