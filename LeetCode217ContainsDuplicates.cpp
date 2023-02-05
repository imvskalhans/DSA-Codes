/*
217. Contains Duplicate
Easy
8.2K
1.1K
Companies
Given an integer array nums, return true if any value appears at least 
twice in the array, 
and return false if every element is distinct.

*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


 bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=1;
        while(j<nums.size())
        {
            if(nums[i]==nums[j])
            {
                return true;
            }
            i++;
            j++;
        } return false;
    }
    
int main()
{
    vector<int> nums;
    int newsize=0;
    cout<<"enter nums"<<endl;
     int input;
    while (std::cin >> input) {
        nums.push_back(input);
    }
    bool result=containsDuplicate(nums);
   
        cout<<result<<" ";
    }