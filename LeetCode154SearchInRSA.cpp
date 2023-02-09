
/*

154. Find Minimum in Rotated Sorted Array II
Hard
3.7K
413
Companies
Suppose an array of length n sorted in ascending order is rotated between 
1 and n times. For example, the array nums = [0,1,4,4,5,6,7] might become:
[4,5,6,7,0,1,4] if it was rotated 4 times.
[0,1,4,4,5,6,7] if it was rotated 7 times.
Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results 
in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].
Given the sorted rotated array nums that may contain duplicates, return the 
minimum element of this array.
You must decrease the overall operation steps as much as possible.

 

*/
#include<iostream>
#include<vector>
using namespace std;


int findMin(vector<int>& nums) {

        int s=0;
        int e=nums.size()-1;

        while(s<e){

            int mid=s+(e-s)/2;

            if(nums[mid]>nums[e]){
                s=mid+1;
            }
            else if(nums[mid]<nums[e]){
                e=mid;
            }
            else{
                e--;
            }
        }

        return nums[s];

        // sort(nums.begin(),nums.end());
        // return nums[0];

        // int i = 0, j = nums.size()-1,mid;
        // while(i<j){
        //     mid = ((j-i)>>1)+i;
        //     if(nums[mid]>nums[j]){
        //         i = mid+1;
        //     }else{
        //         j--;
        //     }
        // }
        // return nums[i];
        
}


int main()
{
    vector<int> nums;
    cout<<"enter nums"<<endl;
     int input;
    while (std::cin >> input) {
        nums.push_back(input);
    }
    int result=findMin(nums);
    cout<<"min = "<<result<<" ";
}