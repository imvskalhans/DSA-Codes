/*
LeeCode 1356 Sort Integers by The Number of 1 Bits
Given an integer array arr. You have to sort the integers in the array in ascending order by the number of 1's in their binary representation and in case of two or more integers have the same number of 1's you have to sort them in ascending order.
Return the sorted array.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int count1Bits(int num)
{
    int count = 0;
    while (num > 0)
    {
        if (num & 1)
        {
            count++;
        }
        num >>= 1;
    }
    return count;
}
bool compare(int num1, int num2)
{
    int count1 = count1Bits(num1);
    int count2 = count1Bits(num2);
    if (count1 == count2)
    {
        return num1 < num2;
    }
    return count1 < count2;
}
vector<int> sortByBits(vector<int>& arr)
{
    sort(arr.begin(), arr.end(), compare);
    return arr;
}
int main()
{
    vector<int> arr = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
    vector<int> result = sortByBits(arr);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}

/*
approach 2: use lambda function

vector<int> sortByBits(vector<int>& arr)
    {
        vector<int> ans;
        vector<pair<int,int>> vp;
        for (auto val: arr)
        {
            int num = val;
            int count=0;
            while (num > 0)
            {
                if (num & 1)
                {
                    count++;
                }
                num >>= 1;
            }
            vp.push_back({count,val});
        }
        sort(vp.begin(),vp.end());
        for (auto val: vp)
        {
            ans.push_back(val.second);
        }
        return ans;
    }


*/