//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        // vector<int> ans;
        
        // for(int i = 0 ; i<n ; i++)
        // {
        //     bool flag = true;
        //     for( int j = i+1; j<n ; j++)
        //     {
        //         if(a[i]<= a[j])
        //         {
        //             flag = false;
        //             break;
        //         }
        //     }
        //     if(flag == true)
        //     {
        //         ans.push_back(a[i]);
        //     }
        // }
        // return ans;
        
            vector<int> ans;
    int maxRight = a[n - 1];  // Initialize the maximum element from the right
    
    ans.push_back(maxRight);  // The last element is always a leader
    
    for (int i = n - 2; i >= 0; i--) 
    {
        if (a[i] >= maxRight) {
            maxRight = a[i];
            ans.push_back(maxRight);
        }
    }
    
    reverse(ans.begin(), ans.end());  // Reverse the leaders to get the correct order
    return ans;
        
    }
};

//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

// } Driver Code Ends