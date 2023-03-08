/*
leetcode 2187. Minimum Time to Complete Trips

*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int minTimeToCompleteTrips(vector<int> & arr, int k)
{
    //using binary search
    int n = arr.size();
    int low = 0;
    int high = 1000000000;
    int ans = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            count = count + (mid / arr[i]);
        }
        if (count >= k)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int k;
    cout << "Enter the value of k: ";
    cin >> k;
    cout << "Enter the array: ";
    vector<int> arr;
    int n;
    while (cin >> n)
    {
        arr.push_back(n);
    }
    cout << minTimeToCompleteTrips(arr, k);
    return 0;
}