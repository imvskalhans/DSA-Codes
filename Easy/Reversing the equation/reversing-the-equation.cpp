//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
            //code here.
            int n = s.length();
            reverse(s.begin(),s.end());
            int prev=0;
            for(int i=0;i<n;i++){
                if(s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/'){
                    int j=i-1;
                    while(prev<j){
                        swap(s[prev],s[j]);
                        j--;
                        prev++;
                    }
                    prev=i+1;
                }
            }
            int j=n-1;
            while(prev<j){
                swap(s[prev],s[j]);
                j--;
                prev++;
            }
            return s;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends