//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    void deleteMidHelp(stack<int>&s, int sizeOfStack, int x)
    {
     // Base case
        if (x == sizeOfStack / 2) {
            s.pop();
            return ;
        }
        
        // Processing
        int temp = s.top();
        s.pop();
        x = x + 1;
        
        // Recursion
       deleteMidHelp(s, sizeOfStack, x);
        
        // Backtrack
        s.push(temp);
    }
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        deleteMidHelp(s, sizeOfStack, 0);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends