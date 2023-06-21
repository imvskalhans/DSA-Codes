//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) {
        // code here
                int count5 = 0; // count of $5 bills
        int count10 = 0; // count of $10 bills
        
        for (int bill : bills) {
            if (bill == 5) {
                count5++;
            } else if (bill == 10) {
                if (count5 > 0) {
                    count5--;
                    count10++;
                } else {
                    return false; // cannot provide change
                }
            } else if (bill == 20) {
                if (count10 > 0 && count5 > 0) {
                    count10--;
                    count5--;
                } else if (count5 >= 3) {
                    count5 -= 3;
                } else {
                    return false; // cannot provide change
                }
            }
        }
        
        return true; // change provided to all customers
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends