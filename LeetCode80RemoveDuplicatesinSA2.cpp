
/*
80. Remove Duplicates from Sorted Array II
Medium
4.5K
970
Companies
Given an integer array nums sorted in non-decreasing order, remove some 
duplicates in-place such that each unique element appears at most twice. 
The relative order of the elements should be kept the same.

Since it is impossible to change the length of the array in some languages, 
you must instead have the result be placed in the first part of the array 
nums. More formally, if there are k elements after removing the duplicates, 
then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums.

Do not allocate extra space for another array. You must do this by 
modifying the input array in-place with O(1) extra memory.

Custom Judge:

The judge will test your solution with the following code:

int[] nums = [...]; // Input array
int[] expectedNums = [...]; // The expected answer with correct length

int k = removeDuplicates(nums); // Calls your implementation

assert k == expectedNums.length;
for (int i = 0; i < k; i++) {
    assert nums[i] == expectedNums[i];
}
If all assertions pass, then your solution will be accepted.

best approach
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int k=0;k<nums.size();k++)
        {
            if(i<2||nums[k]>nums[i-2])
            {
                nums[i]=nums[k];
                i++;
            }
        }
        return i;
    }
}

*/



#include<iostream>
#include<vector>
using namespace std;


vector<int> removeDuplicates(vector<int>& nums , int *newsize) {
    int i = 0;
    int j = 1;
    int count=0;
    while (j < nums.size()){
        if (nums[i] == nums[j]) {
            count++;
            if(count<2)
            {
                i++;
                nums[i]=nums[j];
            }
        }
        else{
            count=0;
            i++;
            nums[i]=nums[j];
        }
        j++;
    }
    *newsize=i+1;
    return nums;
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
    vector<int> result=removeDuplicates(nums,&newsize);
    cout<<"final array = ";
    for(int i=0;i<newsize;i++)
    {
        cout<<result[i]<<" ";
    }
}