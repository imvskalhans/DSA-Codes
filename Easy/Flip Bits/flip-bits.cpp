//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int maxOnes(int a[], int n)
    {
        // Your code goes here 
    int maxScore = 0;
    int onesCount = 0;
    int zerosCount = 0;

    for (int i = 0; i < n; ++i) 
    {
        if (a[i] == 0) 
        {
            zerosCount ++;  
        } 
        else 
        {
            zerosCount--;
            onesCount ++;  
            
            if(zerosCount < 0)
            {
                zerosCount = 0;
            }
        }
        
        if(zerosCount > maxScore)
        {
            maxScore = zerosCount;
        }

    }
    
    return maxScore + onesCount;
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<< ob.maxOnes(a, n) <<endl;
    }
    return 0;
}

// } Driver Code Ends