//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
            int n = str1.length();

    // If lengths are different, they can't be rotated versions.
    if (n != str2.length()) {
        return false;
    }

    // Check for rotation in the left direction (anticlockwise).
    string leftRotation = str1.substr(2) + str1.substr(0, 2);
    if (leftRotation == str2) {
        return true;
    }

    // Check for rotation in the right direction (clockwise).
    string rightRotation = str1.substr(n - 2) + str1.substr(0, n - 2);
    return (rightRotation == str2);
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends