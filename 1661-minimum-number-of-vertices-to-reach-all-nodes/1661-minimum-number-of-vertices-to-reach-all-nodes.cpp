class Solution {
public:
//revisit this question

    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
    vector<int> indegree(n, 0);

    // Calculate the indegree of each vertex
    for (const auto& edge : edges) {
        int to_node = edge[1];
        indegree[to_node]++;
    }

    vector<int> result;
    for (int i = 0; i < n; i++) {
        if (indegree[i] == 0) {
            result.push_back(i);
        }
    }

    return result;
    }
};