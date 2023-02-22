/*

*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 int findShortestSubArray(vector<int>& nums) {
    int count[10]={0};
    for (int i : nums) {
        count[i]++;
    }
    int* maxi = max_element(count, count + 10);
    cout<<"maxi = "<< *maxi<<endl;
    int index = maxi-count;
    cout<<"index = "<< index<<endl;
    int i = 0;
    int j = nums.size() - 1;
    int k = 0;
    int l = 0;
    while (i < nums.size()) {
        if (nums[i] == index) {
            k = i;
            break;
        }
        i++;
    }
    while (j >=0) {
        if (nums[j] == index) {
            l = j;
            break;
        }
        j--;
    }
    return l - k + 1;
}

int main()
{
    vector<int> nums;
    cout<<"enter nums"<<endl;
     int input;
    while (std::cin >> input) {
        nums.push_back(input);
    }
    int result=findShortestSubArray(nums);
    cout<<"result = ";
    cout<<result<<" ";
}