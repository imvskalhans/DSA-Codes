//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution{
    public:


bool match(string wild, string pattern) {
            int n = wild.length(), m = pattern.length();
        vector<vector<int>> arr(n + 1, vector<int>(m + 1, 0));

        arr[n][m] = 1;

        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                if (wild[i] == pattern[j] && arr[i + 1][j + 1] == 1) {
                    arr[i][j] = 1;
                }
                if (wild[i] == '?' && arr[i + 1][j + 1] == 1) {
                    arr[i][j] = 1;
                }
                if (wild[i] == '*' && (arr[i + 1][j + 1] == 1 || arr[i + 1][j] == 1)) {
                    while (j-- > 0) {
                        arr[i][j] = 1;
                    }
                }
            }
        }

        return arr[0][0] == 1;
}
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        string wild, pattern;
        cin>>wild>>pattern;
        
        Solution ob;
        bool x=ob.match(wild, pattern);
        if(x)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
    return 0;
}
// } Driver Code Ends