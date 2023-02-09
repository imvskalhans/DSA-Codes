/*
605. Can Place Flowers
You have a long flowerbed in which some of the plots are planted, and some are not. 
However, flowers cannot be planted in adjacent plots.
Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 
means not empty, and an integer n, return if n new flowers can be planted in the 
flowerbed without violating the no-adjacent-flowers rule.


*/
#include<iostream>
#include<vector>
using namespace std;

 //need correction failing at few edge cases
 bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int s=flowerbed.size();
        int count=0;
        for(int i=0;i<s;i++){
            //if(flowerbed[i-1]==0&&flowerbed[i+1]==0)
             if(flowerbed[i]==0&&(i==0||flowerbed[i-1]==0)&&(i==s-1||flowerbed[i+1]==0))
            {
                flowerbed[i]==1;
                count++;
            }
        }
        return count>=n;
        
    }

    int main()
{
    int n;
    cout<<"enter n "<<endl;
    cin>>n;
    vector<int> nums;
    cout<<"enter nums"<<endl;
     int input;
    while (std::cin >> input) {
        nums.push_back(input);
    }
    bool result=canPlaceFlowers(nums,n);
    cout<<"output = "<<result<<" ";
}