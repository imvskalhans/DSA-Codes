//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        int totalSum = 0;
    for (int i = 0; i < N; i++)
        totalSum += arr[i];

    if (totalSum % 2 != 0)
        return 0;

    int targetSum = totalSum / 2;

    return fun(0,N, targetSum, arr) ? 1 : 0;
}

bool fun(int pos, int n, int sum, int arr[]) {
    if (sum < 0)
        return false;
    if (pos == n)
        return sum == 0;

    return fun(pos + 1, n, sum - arr[pos], arr) || fun(pos + 1, n, sum, arr);
}
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends