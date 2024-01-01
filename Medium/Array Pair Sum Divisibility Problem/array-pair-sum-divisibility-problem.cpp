//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
           unordered_map<int, int> freq;

    // Count the frequency of each remainder when divided by k
    for (int num : nums) {
        int remainder = (num % k + k) % k;
        freq[remainder]++;
    }

    // Check if each remainder has a pair
    for (auto it : freq) {
        int remainder = it.first;
        int count = it.second;

        if (remainder == 0) {
            // Even occurrences of remainder 0 are required
            if (count % 2 != 0) {
                return false;
            }
        } else if (2 * remainder == k) {
            // Odd occurrences of half of k are not allowed
            if (count % 2 != 0) {
                return false;
            }
        } else {
            // Remainders other than 0 and half of k must have a matching remainder
            int complement = k - remainder;
            if (freq.find(complement) == freq.end() || freq[complement] != count) {
                return false;
            }
        }https://media.geeksforgeeks.org/img-practice/prod/courses/1/Web/Content/3-90-fab-v3_1703855049.svg
    }

    return true;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends