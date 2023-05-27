/*
// optimized solution
Actually do a prefix sum and keep one equation in mind that is
for a particular index we have i ways in which its positive and n-i ways in which its negative because our array is sorted we can draw this relation
(nums[i] - nums[0]) + (nums[i] - nums[1]) + ... + (nums[i] - nums[i-1]) + (nums[i+1] - nums[i]) + (nums[i+2] - nums[i]) + ... + (nums[n-1] - nums[i]).

So we can see for a particular index i i∗nums[i]i*nums[i]i∗nums[i] is positive and (n−i)∗nusm[i](n-i) *nusm[i](n−i)∗nusm[i] elements are negative .
From above we can observe front ones are getting subtraced and back elemnts are being added so keep a prefix sum for both the sides
And from this we can find a final relation with our answer:
res=abs(pref−(n−i)∗arr[i]+(i)∗arr[i]−diff)res=abs(pref-(n-i)*arr[i]+(i)*arr[i]-diff)res=abs(pref−(n−i)∗arr[i]+(i)∗arr[i]−diff)
keeping track with prefix sum of current index in both directions , from back side should be added and from front side should be subtracted . You can dry run on some test cases for more clearity
*/
class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
        
        // Calculate the initial prefix sum
        int prefixSum = accumulate(arr.begin(), arr.end(), 0);
        int diff = 0; // Tracks the difference in current and previous elements
        
        for (int i = 0; i < n; i++) {
            // Compute the absolute difference for each element
            int result = abs(prefixSum - (n - i) * arr[i] + i * arr[i] - diff);
            
            // Update prefixSum and diff for the next iteration
            prefixSum -= arr[i];
            diff += arr[i];
            
            // Add the result to the answer array
            ans.push_back(result);
        }
        
        return ans;
    }
};

/*
//my solution TLE
class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0 ;  i < nums.size() ; i++)
        {
            int sum = 0 ;
            for(int j = 0 ; j<nums.size() ; j++)
            {
                sum += abs(nums[i]-nums[j]);
            }
            ans.push_back(sum);
        }
        return ans;
    }
};
*/