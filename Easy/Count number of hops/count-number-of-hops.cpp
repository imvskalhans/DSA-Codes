//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        
        // your code here
                if(n==1) return 1;
        if(n==2) return 2;
        if(n==3) return 4;
        long a=1,b=2,c=4,ans=0;

        for(int i=4;i<=n; i++){
            ans = (a+b+c)%1000000007;
            a=b;
            b=c;
            c=ans;
        }

        return ans;
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends