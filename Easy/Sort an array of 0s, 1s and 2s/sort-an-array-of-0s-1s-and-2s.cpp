//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int zero = 0;
        int one = 0 ;
        int two = n-1 ;
        
        while (one <= two) 
        {
            if (a[one] == 0) 
            {
                swap(a[zero], a[one]);
                zero++;
                one++;
            } 
            else if (a[one] == 1) 
            {
                one++;
            } 
            else 
            {
                swap(a[one], a[two]);
                two--;
            }
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends