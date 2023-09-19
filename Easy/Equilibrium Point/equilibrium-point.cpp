//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
#include <bits/stdc++.h>


class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
    // Calculate the total sum of the array
    long long totalSum = accumulate(a, a + n, 0LL);

    long long leftSum = 0;
    
    for (int i = 0; i < n; i++) {
        // Subtract the current element from the total sum to get rightSum
        long long rightSum = totalSum - leftSum - a[i];
        
        // Check if leftSum and rightSum are equal
        if (leftSum == rightSum) {
            return i + 1; // Return the equilibrium point (1-based index)
        }
        
        // Add the current element to leftSum for the next iteration
        leftSum += a[i];
    }
    
    return -1; // If no equilibrium point is found
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends