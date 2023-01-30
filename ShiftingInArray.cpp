#include<iostream>
#include<vector>
using namespace std;

vector<int> shifting(vector<int> nums)
{
    vector<int> ans;
    int temp=0,i=0;
    int s=nums.size()-1;
    while(i<=s)
    {
        if(nums[i]==nums[i+1])
        {
        }
        else{
            ans.push_back(nums[i]);
            //ans.push_back(nums[i+1]);
        }
    
        i++;
    }
    return ans;

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

    vector<int> result=shifting(nums);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    //cout<<"average = "<<std::fixed<<std::setprecision(5)<<result<<endl;
}