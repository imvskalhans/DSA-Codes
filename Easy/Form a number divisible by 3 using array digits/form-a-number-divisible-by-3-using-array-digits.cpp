//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isPossible(int N, int arr[]) {
        // code here
            int sumOfDigits = 0;

    // Calculate the sum of all digits in the array
    for (int i = 0; i < N; i++) {
        int num = arr[i];
        while (num > 0) {
            sumOfDigits += num % 10;
            num /= 10;
        }
    }

    // Check if the sum of digits is divisible by 3
    if (sumOfDigits % 3 == 0) {
        return 1; // It's possible to construct a divisible number
    } else {
        return 0; // Not possible to construct a divisible number
    }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution ob;
        cout << ob.isPossible(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends