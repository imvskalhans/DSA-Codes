//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
    std::map<int, int> mp;

    // Count the occurrences of each element in the input vector
    for (auto num : nums) {
        mp[num]++;
    }

    std::vector<int> ans;

    // Iterate through the map and find unique elements with count = 1
    for (const auto& pair : mp) {
        if (pair.second == 1) {
            ans.push_back(pair.first);
        }
    }

    return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends