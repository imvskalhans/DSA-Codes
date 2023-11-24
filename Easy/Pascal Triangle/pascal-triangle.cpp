//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// #define ll long long
class Solution{
public:
    vector<long long> nthRowOfPascalTriangle(int n) {
        long long mod = 1000000007;
        vector<long long> al(n, 0);

        al[0] = 1;

        for (int i = 0; i < n - 1; i++) {
            for (int j = n - 1; j >= 1; j--) {
                al[j] = (al[j] % mod + al[j - 1] % mod) % mod;
            }
        }
        return al;
    }
};


//{ Driver Code Starts.


void printAns(vector<long long> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends