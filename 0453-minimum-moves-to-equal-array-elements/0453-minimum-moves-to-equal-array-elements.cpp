//logic
class Solution {
public:
    int minMoves(vector<int>& nums) {
    int moves = 0;

    // Find the minimum element using min_element
    int minElement = *min_element(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++) 
    {
        moves += nums[i] - minElement;
    }

    return moves;
    }
};