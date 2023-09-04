//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void dfs(vector<vector<char>>& mat, int i, int j) {
        if (i < 0 || i >= mat.size() || j < 0 || j >= mat[0].size() || mat[i][j] != 'O') {
            return;
        }
        
        mat[i][j] = '-';
        
        // Explore neighbors
        dfs(mat, i + 1, j);
        dfs(mat, i - 1, j);
        dfs(mat, i, j + 1);
        dfs(mat, i, j - 1);
    }
    
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        // code here
                if (n == 0 || m == 0) {
            return mat;
        }
        
        // Traverse the boundary and mark 'O' cells as '-' if they are not surrounded by 'X'
        for (int i = 0; i < n; ++i) {
            if (mat[i][0] == 'O') {
                dfs(mat, i, 0);
            }
            if (mat[i][m - 1] == 'O') {
                dfs(mat, i, m - 1);
            }
        }
        
        for (int j = 0; j < m; ++j) {
            if (mat[0][j] == 'O') {
                dfs(mat, 0, j);
            }
            if (mat[n - 1][j] == 'O') {
                dfs(mat, n - 1, j);
            }
        }
        
        // Replace remaining 'O' with 'X' and revert '-' back to 'O'
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (mat[i][j] == 'O') {
                    mat[i][j] = 'X';
                } else if (mat[i][j] == '-') {
                    mat[i][j] = 'O';
                }
            }
        }
        
        return mat;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends