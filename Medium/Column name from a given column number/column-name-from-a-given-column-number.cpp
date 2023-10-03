//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string colName (long long int N)
    {
        // your code here
            string result = "";

    while (N > 0) {
        int remainder = (N - 1) % 26;
        result = char('A' + remainder) + result;
        N = (N - 1) / 26;
    }

    return result;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}

// } Driver Code Ends