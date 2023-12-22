//{ Driver Code Starts
// A C++ program to print elements with count more than n/k

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
    // Calculate the minimum count required for an element to appear more than n/k times.
    int minCount = n / k;

    // Using unordered_map to store the count of each element.
    unordered_map<int, int> countMap;

    // Traverse the array to count occurrences of each element.
    for (int i = 0; i < n; i++) {
        countMap[arr[i]]++;
    }

    // Count the elements appearing more than n/k times.
    int result = 0;
    for (auto& it : countMap) {
        if (it.second > minCount) {
            result++;
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
        int n, i;
        cin >> n;

        int arr[n];

        for (i = 0; i < n; i++) cin >> arr[i];
        int k;
        cin >> k;
        Solution obj;
        cout << obj.countOccurence(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends