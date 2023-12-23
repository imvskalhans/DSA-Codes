//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

struct Stock {
    int price;
    int day;
};

class Solution {
public:
    static bool compare(const Stock& a, const Stock& b) {
        return a.price < b.price;
    }

    int buyMaximumProducts(int n, int k, int price[]) {
        Stock stocks[n];

        // Create an array of structures
        for (int i = 0; i < n; i++) {
            stocks[i].price = price[i];
            stocks[i].day = i + 1;
        }

        // Sort the array based on stock prices
        std::sort(stocks, stocks + n, compare);

        int maxStocks = 0;

        // Iterate through the sorted array
        for (int i = 0; i < n; i++) {
            int affordableStocks = std::min(stocks[i].day, k / stocks[i].price);
            maxStocks += affordableStocks;
            k -= stocks[i].price * affordableStocks;
        }

        return maxStocks;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k;
	    cin >> n >> k;
	    int price[n];
	    for(int i = 0 ; i < n; i++){
	        cin >> price[i];
	    }
	    Solution ob;
	    int ans = ob.buyMaximumProducts(n, k, price);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends