//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
            // Check if lengths are equal and not zero
    if (s1.length() != s2.length() || s1.length() == 0) {
        return false;
    }

    // Concatenate s1 with itself
    string concatStr = s1 + s1;

    // Check if s2 is a substring of the concatenated string
    return concatStr.find(s2) != string::npos;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}

// } Driver Code Ends