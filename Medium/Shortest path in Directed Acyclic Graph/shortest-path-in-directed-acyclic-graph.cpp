//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
    
  public:
    void dfs(int node,vector<bool> &vis,vector<int> &topo,vector<pair<int,int>> adj[]){
      vis[node]=true;
      for(auto x:adj[node]){
          if(!vis[x.first])dfs(x.first,vis,topo,adj);
      }
      topo.push_back(node);
  }
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        // code here
          vector<pair<int,int>> adj[N];
        for(auto x:edges){
            adj[x[0]].push_back({x[1],x[2]});
        }
        vector<bool> vis(N,false);
        vector<int> topo;
        for(int i=0;i<N;i++){
            if(!vis[i]){
                dfs(i,vis,topo,adj);
            }
        }
        reverse(topo.begin(),topo.end());
        vector<int> dis(N,INT_MAX);
        dis[0]=0;
        for(int i=0;i<N;i++){
            if(dis[topo[i]]!=INT_MAX){
                for(auto x:adj[topo[i]]){
                    if(dis[topo[i]]+x.second<dis[x.first]){
                        dis[x.first]=dis[topo[i]]+x.second;
                    }
                }
            }
        }
        for(int i=0;i<N;i++){
            if(dis[i]==INT_MAX)dis[i]=-1;
        }
        return dis;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends