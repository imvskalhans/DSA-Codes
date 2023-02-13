/*
LC 66
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int res = 1;
        int i = digits.size() - 1;
        while (res && i >= 0)
        {
            res = digits[i] + res;
            digits[i] = res % 10;
            res /= 10;
            --i;
        }
        if (res)
        {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};
*/
#include<iostream>
#include<vector>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
         int n = digits.size();
    for (int i = n - 1; i >= 0; i--) {
        if (digits[i] == 9) {
            digits[i] = 0;
        } else {
            digits[i]++;
            return digits;
        }
    }
    digits[0] = 1;
    digits.push_back(0);
    return digits;
}

int main()
{
    vector<int> nums;
    cout<<"enter nums"<<endl;
     int input;
    while (std::cin >> input) {
        nums.push_back(input);
    }
    vector<int> result=plusOne(nums);
    for(int i=0;i<result.size();i++)
   {
    cout<<"Result = "<<result[i]<<" ";
   }
}