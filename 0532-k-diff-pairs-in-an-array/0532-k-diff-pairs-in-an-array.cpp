class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int count = 0;
        unordered_map<int, int> freq;

        // Count the frequency of each number in the array
        for (int num : nums) {
            freq[num]++;
        }

        // Check for k-diff pairs
        for (auto it : freq) {
            int num = it.first;
            int freqCount = it.second;

            //when k is > 0 we check if num + k is present
            if (k > 0 && freq.count(num + k)) 
            {
                count++;
            } 
            else if (k == 0 && freqCount > 1) // if k = 0 , then we simply count frequency
            {
                count++;
            }
        }

        return count;
    }
};
/*
wrong ans
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        vector<vector<int>> pairs;
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (abs(nums[i] - nums[j]) == k) {
                    pairs.push_back({nums[i], nums[j]});
                }
            }
        }
        // Sorting the vector is a prerequisite for removing duplicates.
        sort(pairs.begin(), pairs.end());
        pairs.erase(unique(pairs.begin(), pairs.end()), pairs.end());
        return pairs.size();
    }
};
fails for
Input
nums =
[1,2,4,4,3,3,0,9,2,3]
k =
3
Use Testcase
Output
3
Expected
2
*/