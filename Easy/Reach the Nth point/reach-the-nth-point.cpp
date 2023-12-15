//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		int nthPoint(int n){
		    // Code here
		        int mod=1e9+7;
		    if(n==1) return 1;
		    if(n==2) return 2;
		    int f=1;
		    int s=2;
		    for(int i=3;i<=n;i++){
		        int t=(f+s)%mod;
		        f=s;
		        s=t;
		    }
		    return s;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends