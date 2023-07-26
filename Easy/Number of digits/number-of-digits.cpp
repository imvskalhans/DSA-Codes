//{ Driver Code Starts


#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends

class Solution{
public:
    long long noOfDigits(int N){
        // code here
            if (N <= 0) {
        return 0;
    }

    // Calculate the Nth Fibonacci number
    double phi = (1 + sqrt(5)) / 2; // Golden ratio
    double F_N = round(pow(phi, N) / sqrt(5));

    // Calculate the number of digits in F(N)
    int digits = static_cast<int>(floor(log10(F_N))) + 1;

    return digits;
    }
};



//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.noOfDigits(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends