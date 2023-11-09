//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here 
            int n = S.size();
    stack<int> stk;
    string result = "";

    for (int i = 0; i <= n; ++i) {
        stk.push(i + 1);

        if (i == n || S[i] == 'I') {
            while (!stk.empty()) {
                result += to_string(stk.top());
                stk.pop();
            }
        }
    }

    return result;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 

// } Driver Code Ends