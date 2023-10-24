//{ Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int palindromicPartition(string str)
    {
        // code here
            int n = str.length();
    
    // Create a 2D array to store whether substrings are palindromes
    bool isPalindrome[n][n];
    
    // Initialize the array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            isPalindrome[i][j] = false;
        }
    }
    
    // All substrings of length 1 are palindromes
    for (int i = 0; i < n; i++) {
        isPalindrome[i][i] = true;
    }
    
    // Check for palindromes in substrings of length 2 or more
    for (int len = 2; len <= n; len++) {
        for (int i = 0; i < n - len + 1; i++) {
            int j = i + len - 1;
            if (str[i] == str[j] && len == 2) {
                isPalindrome[i][j] = true;
            } else if (str[i] == str[j] && isPalindrome[i + 1][j - 1]) {
                isPalindrome[i][j] = true;
            }
        }
    }
    
    // Create an array to store the minimum cuts
    int cuts[n];
    
    // Initialize the cuts array
    for (int i = 0; i < n; i++) {
        int minCuts = i;  // Maximum possible cuts
        for (int j = 0; j <= i; j++) {
            if (isPalindrome[j][i]) {
                if (j == 0) {
                    minCuts = 0;  // If the whole string is a palindrome
                } else {
                    minCuts = min(minCuts, cuts[j - 1] + 1);
                }
            }
        }
        cuts[i] = minCuts;
    }
    
    return cuts[n - 1];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}
// } Driver Code Ends