/*
22 Jan solution by Vishal Singh
Leetcode
189. Rotate Array
Medium
Given an integer array nums,
rotate the array to the right by k steps, where k is non-negative.
#include<iostream>
using namespace std;
//rotating right
int rotate(int arr[],int s,int k)
{
   int j=0;
    while(j<k)
    {
       int temp=arr[0];
       int i=0;
        for(;i<s-1;i++)
        {
            arr[i]=arr[i+1];
        }
        arr[i]=temp;
        j++;

    }
    for(int i=0;i<s;i++)
    {
        cout<< arr[i]<<" ";

    }
    
}
*/

// rotating left
/*
int rotate(int arr[],int s,int k)
{
   int j=0;
    while(j<k)
    {
       int temp=arr[s-1];
       int i=s;
        for(;i>0;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[i]=temp;
        j++;

    }
    for(int i=0;i<s;i++)
    {
        cout<< arr[i]<<" ";

    }
    
}
*/
// leetcode approach by lbDSA

    /*void rotate(vector<int>& nums, int k) {
        vector<int> tes(nums);
        int j=0;
        int s=nums.size();
    while(j<k)
    {
       int temp=tes[s-1];
       int i=s;
        for(;i>0;i--)
        {
            tes[i]=tes[i-1];
        }
        tes[i]=temp;
        j++;

    }   
    nums=tes;     
    }
*/
    
#include<iostream>
#include<vector>
using namespace std;
vector<int> rotate(vector<int>& nums, int k)
{
    vector<int> temp(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            temp[(i+k)%nums.size()]=nums[i];
        }
            nums=temp;
            return nums;
}



int main()
{
    int k;
    cout<<"enter k";
    cin>>k;
    vector<int> nums;
    cout<<"enter nums"<<endl;
     int input;
    while (std::cin >> input) {
        nums.push_back(input);
    }
    vector<int> result = rotate(nums,k); 
for (int i : result) {
    cout << i << " ";
}
   
}
