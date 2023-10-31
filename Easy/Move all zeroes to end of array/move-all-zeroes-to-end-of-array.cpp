//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    	    int count = 0; // Count of non-zero elements

    // Traverse the array
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count] = arr[i]; // Move non-zero elements to the front
            if (i != count) {
                arr[i] = 0; // Assign zero to the current position
            }
            count++;
        }
    }
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends