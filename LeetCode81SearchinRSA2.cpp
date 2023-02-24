/*
LeetCode81. Search in Rotated Sorted Array II
Description:
Follow up for "Search in Rotated Sorted Array":
What if duplicates are allowed?
Would this affect the run-time complexity? How and why?
Write a function to determine if a given target is in the array.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                return true;
            }
            if (nums[left] < nums[mid]) {
                if (nums[left] <= target && target < nums[mid]) {
                    right = mid - 1;
                }
                else {
                    left = mid + 1;
                }
            }
            else if (nums[left] > nums[mid]) {
                if (nums[mid] < target && target <= nums[right]) {
                    left = mid + 1;
                }
                else {
                    right = mid - 1;
                }
            }
            else {
                left++;
            }
        }
        return false;
    }
};

int main() {
    int target ;
    cout<<"enter target"<<endl;
    cin>> target;
    vector<int> nums;
    cout << "enter nums" << endl;
    int input;
    while (std::cin >> input)
    {
        nums.push_back(input);
    }
    
    
    Solution sol;
    cout << sol.search(nums, target) << endl;
    return 0;
}
