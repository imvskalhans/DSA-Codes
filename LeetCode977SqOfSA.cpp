/*'
977. Squares of a Sorted Array
Easy
7.3K
183
Companies
Given an integer array nums sorted in non-decreasing order, 
return an array of the squares of each number sorted in non-decreasing order.

 
//fastest approach
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector <int> ans (n);

        int left = 0;
        int right = n-1;

        int temp;
        for (int i=n-1; i>=0; i--){
            if (abs(nums[left]) >= abs(nums[right])){
                temp = nums[left];
                left++;
            }
            else{
                temp = nums[right];
                right--;
            }
            ans[i] = temp*temp;
        }
        return ans;
    }
};
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            long long int sq=0;
            sq=nums[i]*nums[i];
            v.push_back(sq);
        }
        sort(v.begin(),v.end());
        return v;
    }


    int main()
{
    vector<int> nums;
    cout<<"enter nums"<<endl;
     int input;
    while (std::cin >> input) {
        nums.push_back(input);
    }
    vector<int> result=sortedSquares(nums);
    for( int i: result){
         cout<<" "<<i<<" ";
}
}
   
    