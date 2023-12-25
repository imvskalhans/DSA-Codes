//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function for finding determinant of matrix.
    int determinantOfMatrix(vector<vector<int> > matrix, int n)
    {
        // code here 
             // Base case: if the matrix is 1x1, return its only element
        if (n == 1) {
            return matrix[0][0];
        }

        int det = 0;

        // Iterate over the first row elements
        for (int i = 0; i < n; i++) {
            // Calculate the sign multiplier
            int sign = (i % 2 == 0) ? 1 : -1;

            // Calculate the minor matrix
            vector<vector<int>> minorMatrix(n - 1, vector<int>(n - 1));
            for (int j = 1; j < n; j++) {
                for (int k = 0; k < n; k++) {
                    if (k < i) {
                        minorMatrix[j - 1][k] = matrix[j][k];
                    } else if (k > i) {
                        minorMatrix[j - 1][k - 1] = matrix[j][k];
                    }
                }
            }

            // Recursive call to calculate determinant of the minor matrix
            int minorDet = determinantOfMatrix(minorMatrix, n - 1);

            // Add the contribution of the current element to the determinant
            det += sign * matrix[0][i] * minorDet;
        }

        return det;
    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        int result = ob.determinantOfMatrix(matrix, n);
        cout<<result<<endl;
    }
    return 0;
}
// } Driver Code Ends