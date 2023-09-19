//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
#include <algorithm>
#include <iostream>
class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
    int candidate = -1;
    int vote = 0;

    // Find the candidate element
    for (int i = 0; i < size; i++) {
        int ele = a[i];
        if (vote == 0) {
            candidate = ele;
        }
        if (ele == candidate) {
            vote++;
        } else {
            vote--;
        }
    }

    // Count the occurrences of the candidate element
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] == candidate) {
            count++;
        }
    }

    // If the candidate element appears more than half the times, it's the majority element
    if (count > size / 2) {
        return candidate;
    } else {
        return -1; // No majority element
    }
        
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends