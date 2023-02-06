#include<iostream>
#include<vector>
using namespace std;

bool validMountainArray(vector<int>& arr) {
    int i=0;
    int j=1;
    int k=0;
    for(int j=1;j<arr.size();j++)
    {
        if(arr[j]>arr[i])
        {
            i++;
        }
        else{
            k=j;
            for(int i=k;i<arr.size();i++)
            {
                if(arr[i]>arr[i+1])
                {
                    return true;
                }
            }
        }
    }
    return false;
        
}

int main()
{
    vector<int> nums;
    cout<<"enter nums"<<endl;
     int input;
    while (std::cin >> input) {
        nums.push_back(input);
    }
    int result=validMountainArray(nums);
    cout<<"peak index = "<<result<<" ";
}