//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
            vector<vector<int>> result;
    int n = arr.size();

    if (n < 4) {
        return result; // Not enough elements for a quadruplet.
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 3; i++) {
        // Avoid duplicate values for i
        if (i > 0 && arr[i] == arr[i - 1]) {
            continue;
        }

        for (int j = i + 1; j < n - 2; j++) {
            // Avoid duplicate values for j
            if (j > i + 1 && arr[j] == arr[j - 1]) {
                continue;
            }

            int left = j + 1;
            int right = n - 1;

            while (left < right) {
                int sum = arr[i] + arr[j] + arr[left] + arr[right];

                if (sum == k) {
                    result.push_back({arr[i], arr[j], arr[left], arr[right]});

                    // Move left and right pointers to avoid duplicates
                    while (left < right && arr[left] == arr[left + 1]) left++;
                    while (left < right && arr[right] == arr[right - 1]) right--;

                    left++;
                    right--;
                } else if (sum < k) {
                    left++;
                } else {
                    right--;
                }
            }
        }
    }

    return result;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends