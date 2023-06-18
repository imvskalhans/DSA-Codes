//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int N, int K) {
        // code here
          int step = N/K;
        int left = step/2;
        int right = left;
        if(step%2==1)left++;
        int i = K*left;
        int j = N+1-K*right;
        if(step%2==1){
            if(N%K==0)return i;
            return i+1;
        }
        if(N%K==0)return j;
        return j-1;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends