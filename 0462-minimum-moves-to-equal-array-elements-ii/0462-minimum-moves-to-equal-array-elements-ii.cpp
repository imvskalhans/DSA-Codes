class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(), nums.end()); // Sort the array in non-decreasing order

        int median = size % 2 == 0 ? (nums[size / 2 - 1] + nums[size / 2]) / 2 : nums[size / 2];
        // Calculate the median based on whether the size is even or odd

        int moves = 0;
        for (int i = 0; i < size; i++) {
            moves += abs(nums[i] - median);
        }

        return moves;
    }
};

/*
wrong approach , i calculated avg corrrect move is to calculate median
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        double sum = accumulate(nums.begin(), nums.end(), 0);
        int size = nums.size();
        int avg = ceil(sum/size);
        int moves = 0 ;
        for(int i = 0 ; i<size ; i++)
        {
            moves += abs(nums[i]- avg);
        }
        return moves;
    }
};
*/