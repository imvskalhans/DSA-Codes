//solve again
class Solution {
public:
    int maxProduct(vector<int>& nums) {
    int n = nums.size();
    int maxProduct = nums[0]; // Initialize the maximum product
    int currMax = nums[0]; // Initialize the current maximum product
    int currMin = nums[0]; // Initialize the current minimum product

    for (int i = 1; i < n; i++) 
    {
        int tempMax = currMax; // Store the current maximum product
        currMax = max(nums[i], max(currMax * nums[i], currMin * nums[i]));
        currMin = min(nums[i], min(tempMax * nums[i], currMin * nums[i]));
        maxProduct = max(maxProduct, currMax);
    }

    return maxProduct;
    }
};

/*
    int n = nums.size();
    int maxProduct = nums[0];
    int minProduct = nums[0];
    int result = nums[0];

    for (int i = 1; i < n; i++) {
        if (nums[i] < 0) {
            swap(maxProduct, minProduct);
        }

        maxProduct = max(nums[i], maxProduct * nums[i]);
        minProduct = min(nums[i], minProduct * nums[i]);
        result = max(result, maxProduct);
    }

    return result;
    */