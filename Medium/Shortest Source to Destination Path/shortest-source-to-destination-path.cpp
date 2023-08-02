//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:

    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        // code here
        queue<pair<int,pair<int,int>>> q;
        q.push({0,{0,0}});
        int dx[] = {-1,1,0,0};
        int dy[] = {0,0,1,-1};
        while(q.size()!=0){
            auto temp = q.front();
            q.pop();
            int dis=temp.first;
            int i=temp.second.first;
            int j=temp.second.second;
            if(i==X and j==Y)return dis;
            for(int k=0;k<4;k++){
                int newi = i+dx[k];
                int newj = j+dy[k];
                if(newi>=0 and newj>=0 and newi<N and newj<M and A[newi][newj]==1){
                    A[newi][newj]=0;
                    q.push({dis+1,{newi,newj}});
                }
            }
        }
        return -1;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}
// } Driver Code Ends