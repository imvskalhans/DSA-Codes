//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		     		int rl=0,ru=n-1,cl=0,cu=m-1,count=0;
     		while(count!=n*m){
     		    for(int i=cl;i<=cu;i++){
     		        count++;
     		        if(count==k)return a[rl][i];
     		    }
     		    rl++;
     		    for(int i=rl;i<=ru;i++){
     		        count++;
     		        if(count==k)return a[i][cu];
     		    }
     		    cu--;
     		    for(int i=cu;i>=cl;i--){
     		        count++;
     		        if(count==k)return a[ru][i];
     		    }
     		    ru--;
     		    for(int i=ru;i>=rl;i--){
     		        count++;
     		        if(count==k)return a[i][cl];
     		    }
     		    cl++;
     		}
     		return 0;
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends