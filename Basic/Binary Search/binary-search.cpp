//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
 int binarysearch(int arr[], int n, int k) {
    int s = 0;         // Initialize the start index as 0
    int e = n - 1;     // Initialize the end index as n-1

    // Perform binary search until the start index is less than or equal to the end index
    while (s <= e) {
        int mid = s + (e - s) / 2;   // Calculate the middle index

        if (arr[mid] == k) {         // If the middle element is the target, return its index
            return mid;
        } else if (arr[mid] > k) {   // If the middle element is greater than the target, search in the left half
            e = mid - 1;
        } else {                     // If the middle element is less than the target, search in the right half
            s = mid + 1;
        }
    }

    return -1;    // Return -1 if the target element is not found in the array
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
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends