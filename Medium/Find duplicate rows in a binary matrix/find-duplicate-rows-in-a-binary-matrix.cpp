//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution
{   
    public:
    vector<int> repeatedRows(vector<vector<int>> &matrix, int M, int N) 
    { 
        // Your code here
         unordered_set<string> seenRows;
    vector<int> duplicateRows;

    for (int i = 0; i < M; ++i) {
        string rowStr = "";
        for (int j = 0; j < N; ++j) {
            rowStr += to_string(matrix[i][j]);
        }

        if (seenRows.count(rowStr) > 0) {
            duplicateRows.push_back(i);
        } else {
            seenRows.insert(rowStr);
        }
    }

    return duplicateRows;
    } 
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        vector<int> ans = ob.repeatedRows(matrix, row, col);


        for (int i = 0; i < ans.size(); ++i)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}



// } Driver Code Ends