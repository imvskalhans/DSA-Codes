//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
            long max_sum = 0;
    long current_sum = 0;

    // Calculate the sum of the first subarray of size K
    for (int i = 0; i < K; ++i) {
        max_sum += Arr[i];
        current_sum += Arr[i];
    }

    // Iterate through the array starting from index K
    for (int i = K; i < N; ++i) {
        // Subtract the first element of the previous subarray
        // and add the current element to get the sum of the new subarray
        current_sum = current_sum - Arr[i - K] + Arr[i];
        // Update max_sum if the current_sum is greater
        max_sum = max(max_sum, current_sum);
    }

    return max_sum;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends