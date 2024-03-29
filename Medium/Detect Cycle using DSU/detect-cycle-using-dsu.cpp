//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
  int findparent(int vertex, vector<int>& parent){
        if(vertex == parent[vertex]){
            return vertex;
        }
        return parent[vertex] = findparent(parent[vertex], parent);
    }
	int detectCycle(int n, vector<int>adj[]){
	    vector<int> parent(n), depth(n, 1);
	    map<pair<int, int>, int> mp;
	    for(int i = 0; i < n; i++){
	        parent[i] = i;
	    }
	    for(int i = 0; i < n; i++){
	        for(int j = 0; j < adj[i].size(); j++){
	            int a = i;
	            int b = adj[i][j];
	            if(mp.find({a, b}) != mp.end() or mp.find({b, a}) != mp.end()){
	                continue;
	            }
	            mp[{a, b}] = 1;
	            int a_parent = findparent(a, parent);
	            int b_parent = findparent(b, parent);
	            if(a_parent != b_parent){
	                if(depth[a_parent] > depth[b_parent]){
	                    parent[b_parent] = a_parent;
	                    depth[a_parent] += depth[b_parent];
	                }else if(depth[a_parent] < depth[b_parent]){
	                    parent[a_parent] = b_parent;
	                    depth[b_parent] += depth[a_parent];
	                }else{
	                    parent[a_parent] = b_parent;
	                    depth[b_parent] += depth[a_parent];
	                }
	            }else{
	                return 1;
	            }
	        }
	    }
	    return 0;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		int ans = obj.detectCycle(V, adj);
		cout << ans <<"\n";	}
	return 0;
}
// } Driver Code Ends