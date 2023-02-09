/*
485. Max Consecutive Ones
Easy
3.9K
418
Companies
Given a binary array nums, return the maximum number 
of consecutive 1's in the array.

 */
#include<iostream>
#include<vector>
using namespace std;


    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,n=nums.size();
        int  maxC = 0;
       for(int i=0;i<n;i++){
        if(nums[i]==1){
            count++;
        }
        else{
            maxC = max(maxC, count);
            count=0;
        }
        }
       return max(maxC, count);
    }


int main()
{
    vector<int> nums;
    cout<<"enter nums"<<endl;
     int input;
    while (std::cin >> input) {
        nums.push_back(input);
    }
    int result=findMaxConsecutiveOnes(nums);
    cout<<"output = "<<result<<" ";
}