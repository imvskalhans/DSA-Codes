//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    vector<string> addOperators(string S, int target) {
        vector<string> result;
        string expression;
        backtrack(S, target, 0, 0, 0, expression, result);
        return result;
    }

private:
    void backtrack(const string& S, int target, int index, long long prevOperand, long long currOperand, string& expression, vector<string>& result) {
        if (index == S.length()) {
            if (currOperand == target) {
                result.push_back(expression);
            }
            return;
        }

        for (int i = index; i < S.length(); i++) {
            // Handle cases with leading zeros
            if (i != index && S[index] == '0') {
                break;
            }

            long long num = stoll(S.substr(index, i - index + 1));

            if (index == 0) {
                expression += to_string(num);
                backtrack(S, target, i + 1, num, num, expression, result);
                expression.resize(expression.length() - to_string(num).length());
            } else {
                expression += '+' + to_string(num);
                backtrack(S, target, i + 1, num, currOperand + num, expression, result);
                expression[expression.length() - to_string(num).length() - 1] = '-';
                backtrack(S, target, i + 1, -num, currOperand - num, expression, result);
                expression[expression.length() - to_string(num).length() - 1] = '*';
                backtrack(S, target, i + 1, prevOperand * num, currOperand - prevOperand + prevOperand * num, expression, result);
                expression.resize(expression.length() - to_string(num).length() - 1);
            }
        }
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int target;
        string S;
        cin >> S >> target;

        Solution obj;
        vector<string> ans = obj.addOperators(S, target);
        sort(ans.begin(), ans.end());
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends