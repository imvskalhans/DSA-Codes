//wrong
/*
best approach
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size(), i = 0, j = n - 1;
        while (i + 1 < n && arr[i] < arr[i + 1]) i++;
        while (j > 0 && arr[j - 1] > arr[j]) j--;
        return i > 0 && i == j && j < n - 1;
    }
};
*/

#include<iostream>
#include<vector>
using namespace std;

bool validMountainArray(vector<int>& arr) {
    int n=arr.size();
    int i=0;
    int j=n-1;
    while(i+1<n&&j>0)
   {
        if(arr[i+1]>arr[i])
        {
            i++;
        }
        else {
            return false;
        }
        if(arr[j]<arr[j-1])
        {
            j--;
        }
        else
        {
            return false;
        }
       
    }
    return i==j-1;
        
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