//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int isRepresentingBST(int arr[], int N)
    {
        // code here
            // Check for array size less than 2
    if (N <= 1)
        return 1;

    // Check for duplicates in the array
    for (int i = 0; i < N - 1; ++i)
    {
        if (arr[i] == arr[i + 1])
            return 0;
    }

    // Check if the array is sorted
    for (int i = 0; i < N - 1; ++i)
    {
        if (arr[i] > arr[i + 1])
            return 0;
    }

    return 1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int arr[N];
        for(int i=0;i<N;i++)cin>>arr[i];
        Solution ob;
        cout<<ob.isRepresentingBST(arr,N)<<endl;
    }
    return 0;
}
// } Driver Code Ends