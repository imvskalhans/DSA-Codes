//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
        vector <int> rotate (int N, int D)
        {
    // Convert N to binary representation as a string with 16 bits
    // Ensure D is in the range [0, 15] to handle rotations greater than 16 bits
    D %= 16;
    
    // Convert N to binary representation as a string with 16 bits
    string binary_str = bitset<16>(N).to_string();
    
    // Perform left rotation
    string left_rotated_str = binary_str.substr(D) + binary_str.substr(0, D);
    int left_rotated_decimal = stoi(left_rotated_str, 0, 2);
    
    // Perform right rotation
    string right_rotated_str = binary_str.substr(16 - D) + binary_str.substr(0, 16 - D);
    int right_rotated_decimal = stoi(right_rotated_str, 0, 2);
    
    return {left_rotated_decimal, right_rotated_decimal};
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        
        int n, d; cin >> n >> d;
        Solution ob;
        vector <int> res = ob.rotate (n, d);
        cout << res[0] << endl << res[1] << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends