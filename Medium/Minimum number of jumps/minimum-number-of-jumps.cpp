//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
    if (n <= 1) {
        return 0; // If the array has only one element or is empty, no jumps are needed.
    }

    if (arr[0] == 0) {
        return -1; // If the first element is 0, we can't move forward.
    }

    int currentMaxReach = arr[0]; // Maximum index you can reach in the current jump.
    int currentEnd = arr[0];      // End of the current jump.
    int minJumps = 1;            // Initialize jumps to 1 because the first jump is from the first element.

    for (int i = 1; i < n; i++) {
        if (i == n - 1) {
            return minJumps; // Reached the end of the array, return the minimum jumps.
        }

        currentMaxReach = max(currentMaxReach, i + arr[i]); // Update the maximum index you can reach.

        if (i == currentEnd) {
            if (currentMaxReach <= i) {
                return -1; // Can't move forward from this position.
            }

            currentEnd = currentMaxReach; // Update the end of the current jump.
            minJumps++; // Increase the jump count.
        }
    }

    return -1; // If we haven't reached the end of the array, return -1 as it's not possible.
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends