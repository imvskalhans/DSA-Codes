class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int ones = 0, twos = 0, threes = 0;
        for (int num : nums) {
            twos |= ones & num; // update twos
            ones ^= num; // update ones
            threes = ones & twos; // update threes
            ones &= ~threes; // clear bits that appear three times
            twos &= ~threes; // clear bits that appear three times
        }
        return ones;
    }
};