/*
leetcode 2455. Average Value of Even Numbers After Queries
You are given an integer array nums and an array queries where queries[i] = [vali, indexi]. For each query i, first, apply nums[indexi] = nums[indexi] + vali, then print the average of the even values of nums.

*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int averageValue(vector<int>& nums) {
        int c=0,s=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%6==0){
                s+=nums[i];
                c++;
            }
        }
        return c==0?0:s/c;
    }

int main()
{
        vector<int> nums;
        nums.push_back(1);
        nums.push_back(2);
        nums.push_back(3);
        nums.push_back(4);
        nums.push_back(5);
        nums.push_back(6);
        int result = averageValue(nums);
        cout << result << endl;

}