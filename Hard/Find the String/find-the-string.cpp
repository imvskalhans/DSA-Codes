//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    void dfs(string &curr, string & ans, unordered_map<string,int> &mp, int k)
    {
        string temp; int i;
        for(int i=k-1; i>=0; i--)
        {
          temp=curr. substr (1); 
          temp+=char(i+48);
        if(mp.find(temp)==mp.end()){
            mp[temp]=1;
            ans+=char(i+48);
            dfs (temp, ans, mp, k); 
            return;
            }
        }   
    }
    string findString(int n, int k) {
    
    string ans="" , temp="";
    unordered_map<string, int> mp;
    for(int i=0; i<n; i++)
    {
    ans+='0';
    }
    temp=ans; mp[temp]=1;
    dfs (temp, ans, mp, k);
    return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        cin>>N>>K;
        Solution ob;
        string ans = ob.findString(N, K);
        int ok=1;
        for(auto i:ans){
            if(i<'0'||i>K-1+'0')
                ok=0;
        }
        if(!ok){
            cout<<-1<<endl;
            continue;
        }
        unordered_set<string> st;
        for(int i=0;i+N-1<ans.size();i++){
            st.insert(ans.substr(i,N));
        }
        int tot=1;
        for(int i=1;i<=N;i++)
            tot*=K;
        if(st.size()==tot)
        {
            cout<<ans.size()<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
} 
// } Driver Code Ends