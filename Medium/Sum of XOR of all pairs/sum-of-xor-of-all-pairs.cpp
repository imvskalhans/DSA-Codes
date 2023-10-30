//{ Driver Code Starts
// An efficient C++ program to compute 
// sum of bitwise OR of all pairs
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
    public:
    // Returns sum of bitwise OR
    // of all pairs
    long long int sumXOR(int arr[], int n)
    {
        long long sum = 0;
        for(int bit = 0; bit < 32; bit++){
            long long int set_bits = 0, unset_bits = 0;
            for(int j = 0; j < n; j++){
                if((arr[j]&(1 << bit)) != 0){
                    set_bits++;
                }else{
                    unset_bits++;
                }
            }
            long long possible_combinations = (set_bits)*(unset_bits);
            sum += possible_combinations*(1 << bit);
        }
        return sum;
    }
};

//{ Driver Code Starts.


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	 int n ;
	 cin>>n;
	 int arr[n+1];
	 for( int i=0;i<n;i++)
	    cin>>arr[i];
	 Solution ob;
	 cout<<ob.sumXOR(arr, n)<<endl;
	}	
	return 0;
}

// } Driver Code Ends