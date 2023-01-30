#include<iostream>
#include<vector>
using namespace std;

/*
vector<int> shiftArrayRight(vector<int> nums) {
    int k=2;
    vector<int> temp;
    for (int i = 0; i < nums.size(); i++) {
        temp[(i + k) % nums.size()] = nums[i];
    }
    for (int i = 0; i < nums.size(); i++) {
        nums[i] = temp[i];
    }
    return nums;
}
*/


vector<int> shiftArrayRight(vector<int> nums , int k) {
    int n= nums.size()-1;
    k %= n;
    int count = 0;
    for (int start = 0; count < n; start++) {
        int current = start;
        int prev = nums[start];
        do {
            int next = (current + k) % n;
            int temp = nums[next];
            nums[next] = prev;
            prev = temp;
            current = next;
            count++;
        } while (start != current);
    }
}


int main()
{
    vector<int> nums;
    cout<<"enter nums"<<endl;
     int input;
    while (std::cin >> input) {
        nums.push_back(input);
    }
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    vector<int> result=shiftArrayRight(nums,2);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    //cout<<"average = "<<std::fixed<<std::setprecision(5)<<result<<endl;
}