class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        //optimized solution
        bool increasing = true;
        bool decreasing = true;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                increasing = false;  // Found a decreasing pair
            }
            if (nums[i] < nums[i + 1]) {
                decreasing = false;  // Found an increasing pair
            }
        }

        return increasing || decreasing;
    }
};


/*
//my solution
class Solution {
public:
    bool increasing(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                return false;
            }
        }
        return true;
    }

    bool decreasing(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] < nums[i + 1]) {
                return false;
            }
        }
        return true;
    }

    bool isMonotonic(vector<int>& nums) {
        return increasing(nums) || decreasing(nums);
    }
};
*/
