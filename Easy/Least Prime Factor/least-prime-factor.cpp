//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> leastPrimeFactor(int n) {
        // code 
           vector<int> leastPrime(n + 1, 0);

        for (int i = 2; i <= n; i++) {
            if (leastPrime[i] == 0) {
                leastPrime[i] = i;
                for (int j = i * i; j <= n; j += i) {
                    if (leastPrime[j] == 0) {
                        leastPrime[j] = i;
                    }
                }
            }
        }

        vector<int> result(n + 1);
        for (int i = 1; i <= n; i++) {
            if (leastPrime[i] == 0) {
                result[i] = 1;  // 1 is its own least prime factor
            } else {
                result[i] = leastPrime[i];
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
        int n;
        cin >> n;
        Solution ob;
        vector<int>ans = ob.leastPrimeFactor(n);
        for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
        cout<<endl;  
    }
    return 0;
}

// } Driver Code Ends