/*
27. Remove Element
Easy
5.2K
7K
Companies
Given an integer array nums and an integer val, remove all occurrences of 
val in nums in-place. The relative order of the elements may be changed.
Since it is impossible to change the length of the array in some languages, 
you must instead have the result be placed in the first part of the array 
nums. More formally, if there are k elements after removing the duplicates, 
then the first k elements of nums should hold the final result. 
It does not matter what you leave beyond the first k elements.
Return k after placing the final result in the first k slots of nums.
Do not allocate extra space for another array. You must do this by 
modifying the input array in-place with O(1) extra memory.
Custom Judge:
The judge will test your solution with the following code:
int[] nums = [...]; // Input array
int val = ...; // Value to remove
int[] expectedNums = [...]; // The expected answer with correct length.
                            // It is sorted with no values equaling val.

int k = removeElement(nums, val); // Calls your implementation
assert k == expectedNums.length;
sort(nums, 0, k); // Sort the first k elements of nums
for (int i = 0; i < actualLength; i++) {
    assert nums[i] == expectedNums[i];
}
If all assertions pass, then your solution will be accepted.

*/


#include<iostream>
#include<vector>
using namespace std;


vector<int> removeElement(vector<int>& nums, int val, int* newsize) {
     int i = 0;
    for (int j = 0; j < nums.size(); j++) {
        if (nums[j] != val) {
            nums[i] = nums[j];
            i++;
        }
    }
    *newsize=i;
    return nums;
}
    
int main()
{
    vector<int> nums;
    int newsize=0,val;
    cout<<"enter value to remove"<<endl;
    cin>>val;
    cout<<"enter nums"<<endl;
     int input;
    while (std::cin >> input) {
        nums.push_back(input);
    }
    cout<<"enter value to remove"<<endl;
    cin>>val;
    vector<int> result=removeElement(nums,val,&newsize);
    cout<<"final array = ";
    for(int i=0;i<newsize;i++)
    {
        cout<<result[i]<<" ";
    }
}






