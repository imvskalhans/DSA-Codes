class Solution {
public:
//revisit the problem
    double dfs(unordered_map<string, unordered_map<string, double>>& graph, const string& source, const string& target, unordered_set<string>& visited) {
        // Step 4a: Check if source and target are the same
        if (source == target) {
            return 1.0;
        }

        // Step 4b: Mark the current variable as visited
        visited.insert(source);

        // Step 4c: Perform DFS on neighbors
        for (const auto& neighbor : graph[source]) {
            const string& next = neighbor.first;
            const double weight = neighbor.second;

            if (visited.find(next) == visited.end()) {
                // Step 4c (recursive call)
                double result = dfs(graph, next, target, visited);
                if (result != -1.0) {
                    return weight * result;
                }
            }
        }

        // Step 4d: No valid answer found
        return -1.0;
    }
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        unordered_map<string, unordered_map<string, double>> graph;
        unordered_set<string> variables;

        // Step 2a: Construct the graph and store variables
        for (int i = 0; i < equations.size(); i++) {
            const string& Ai = equations[i][0];
            const string& Bi = equations[i][1];
            const double value = values[i];

            graph[Ai][Bi] = value;
            graph[Bi][Ai] = 1.0 / value;

            variables.insert(Ai);
            variables.insert(Bi);
        }

        // Step 3: Evaluate queries
        vector<double> results;
        for (const auto& query : queries) {
            const string& Cj = query[0];
            const string& Dj = query[1];

            if (variables.find(Cj) == variables.end() || variables.find(Dj) == variables.end()) {
                // Unknown variable(s), return -1.0
                results.push_back(-1.0);
            } else {
                // Step 3a: Perform DFS to find the answer
                unordered_set<string> visited;
                double result = dfs(graph, Cj, Dj, visited);
                results.push_back(result);
            }
        }

        return results;
    }
};