//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
            int n = str1.length();
    int m = str2.length();

    if (n != m)
        return false;

    unordered_map<char, char> mapping;
    unordered_map<char, bool> isMapped;

    for (int i = 0; i < n; i++) {
        if (mapping.find(str1[i]) == mapping.end()) {
            if (isMapped.find(str2[i]) != isMapped.end())
                return false;

            mapping[str1[i]] = str2[i];
            isMapped[str2[i]] = true;
        } else {
            if (mapping[str1[i]] != str2[i])
                return false;
        }
    }

    return true;
        
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends