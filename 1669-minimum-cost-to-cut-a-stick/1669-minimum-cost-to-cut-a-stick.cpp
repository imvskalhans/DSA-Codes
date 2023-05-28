//Solve Again
class Solution {
public:
    int minCost(int n, vector<int>& cuts) {
    cuts.push_back(0); // Add the starting point of the stick
    cuts.push_back(n); // Add the ending point of the stick
    sort(cuts.begin(), cuts.end()); // Sort the cuts array

    int m = cuts.size(); // Number of cuts
    vector<vector<int>> dp(m, vector<int>(m, 0)); // Initialize dp array

    // Perform dynamic programming
    for (int len = 2; len < m; len++) {
        for (int i = 0; i < m - len; i++) {
            int j = i + len;
            dp[i][j] = INT_MAX;
            for (int k = i + 1; k < j; k++) {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j] + cuts[j] - cuts[i]);
            }
        }
    }

    return dp[0][m - 1]; // Return the minimum cost
    }
};