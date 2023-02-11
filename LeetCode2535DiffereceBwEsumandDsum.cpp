/*

*/
#include<iostream>
#include<vector>
using namespace std;

  int differenceOfSum(vector<int>& nums) {
        int n=nums.size();
        int esum=0;
        for(int i=0;i<n;i++)
        {
            esum += nums[i];
        }
        cout<<"esum = "<<esum<<" "<<endl;
        int dsum=0;
         for(int i=0;i<n;i++)
        {
            if(nums[i]<9)
            dsum += nums[i];
            else{
                int j=nums[i];
                while(j!=0){
                dsum = dsum + j%10;
                j=j/10;
                }
            }
        }
        cout<<"dsum = "<<dsum<<" "<<endl;
        return abs(esum-dsum);
    }

    int main()
{
    vector<int> nums;
    cout<<"enter nums"<<endl;
     int input;
    while (std::cin >> input) {
        nums.push_back(input);
    }
    int result=differenceOfSum(nums);
    cout<<"Running Sum = ";
        cout<<result<<" ";
}