/*
LC 2161
*/

//need coreection 
#include<iostream>
#include<vector>

using namespace std;
vector<int> pivotArray(vector<int>& nums, int pivot) {
       // sort(nums.begin(), nums.end());
        int i=0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]<pivot)
            {
            }
            else
            {
               nums.insert(nums.begin() + i, pivot);
               nums.erase(nums.begin() + i); 

               break;
            }
        }
       // nums.pop_back();
        //sort(nums.begin(), nums.end() - (i+1), greater<int>());
        return nums;
        
    }
int main()
{
    int k;
    cout<<"enter k"<<endl;
    cin>>k;

    vector<int> nums;
    cout<<"enter nums"<<endl;
     int input;
    while (std::cin >> input) {
        nums.push_back(input);
    }
    vector<int> result=pivotArray(nums,k);
    for(int i=0; i< nums.size();i++){
        cout<<" "<<result[i]<<" ";
    }
    
}