//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int isPerfectNumber(long long N) {
        // code here
            // Handle the case when N is less than 2
    if (N <= 1) {
        return 0; // N cannot be a perfect number
    }

    long long sum_of_factors = 1; // Initialize the sum with 1 (1 is always a factor)

    // Check for factors from 2 to sqrt(N)
    for (long long i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            // If i is a factor of N, add both i and N/i to the sum
            sum_of_factors += i;
            if (i != N / i) {
                sum_of_factors += N / i;
            }
        }
    }

    // Check if the sum of factors is equal to N
    if (sum_of_factors == N) {
        return 1; // N is a perfect number
    } else {
        return 0; // N is not a perfect number
    }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    }
    return 0;
}
// } Driver Code Ends