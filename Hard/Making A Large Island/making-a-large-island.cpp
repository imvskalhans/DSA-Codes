//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    int largestIsland(vector<vector<int>>& grid) 
    {
        // Your code goes here.
         int n = grid.size();
        int maxSize = 0;
        
        // Create a map to store the area of each island
        unordered_map<int, int> islandArea;
        int islandId = 2;  // Start with 2 as island IDs, 0 and 1 are used
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    int area = getIslandArea(grid, i, j, islandId);
                    maxSize = max(maxSize, area);
                    islandArea[islandId] = area;
                    islandId++;
                }
            }
        }
        
        // Try changing each '0' to '1' and connect neighboring islands
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 0) {
                    unordered_set<int> connectedIslands;
                    
                    for (pair<int, int> neighbor : neighbors) {
                        int ni = i + neighbor.first;
                        int nj = j + neighbor.second;
                        
                        if (ni >= 0 && ni < n && nj >= 0 && nj < n && grid[ni][nj] > 1) {
                            connectedIslands.insert(grid[ni][nj]);
                        }
                    }
                    
                    int totalArea = 1;  // Count '0' as part of the area
                    for (int island : connectedIslands) {
                        totalArea += islandArea[island];
                    }
                    
                    maxSize = max(maxSize, totalArea);
                }
            }
        }
        
        return maxSize;
    }
    
private:
    vector<pair<int, int>> neighbors = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    
    int getIslandArea(vector<vector<int>>& grid, int i, int j, int islandId) {
        int n = grid.size();
        if (i < 0 || i >= n || j < 0 || j >= n || grid[i][j] != 1) {
            return 0;
        }
        
        grid[i][j] = islandId;
        int area = 1;
        
        for (pair<int, int> neighbor : neighbors) {
            int ni = i + neighbor.first;
            int nj = j + neighbor.second;
            
            area += getIslandArea(grid, ni, nj, islandId);
        }
        
        return area;
    
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){

        int n;
        cin>>n;
        vector<vector<int>>grid(n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>grid[i][j];
        Solution ob;
        cout<<ob.largestIsland(grid)<<endl;
    }
    return 0;
}

// } Driver Code Ends