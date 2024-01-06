//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int primes(int x){
        int ans=0;
        for(int i=2;i*i<=x;i++){
            while(x%i==0){
                ans++;
                x=x/i;
            }
        }
        if(x!=1) ans++;
        return ans;
    }
	int sumOfPowers(int a, int b){
	    int ans=0;
	    for(int i=a;i<=b;i++){
	        ans+=primes(i);
	    }
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, b;
		cin >>  a >> b;
		Solution obj;
		int ans = obj.sumOfPowers(a, b);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends