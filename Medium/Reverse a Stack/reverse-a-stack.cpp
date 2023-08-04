//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
void insertAtBottom(std::stack<int> &St, int item) {
    if (St.empty()) {
        St.push(item);
        return;
    }

    int temp = St.top();
    St.pop();
    insertAtBottom(St, item);
    St.push(temp);
}
    void Reverse(stack<int> &St){
            if (St.empty()) {
        return;
    }

    int temp = St.top();
    St.pop();
    Reverse(St);
    insertAtBottom(St, temp);
    }
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
// } Driver Code Ends