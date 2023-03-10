/*
leetcode 1304. Find N Unique Integers Sum up to Zero
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sumZero(int n)
{
    vector<int> ans;
    if (n % 2 != 0)
    {
        ans.push_back(0);
    }
    for (int i = 1; i <= n / 2; i++)
    {
        ans.push_back(i);
        ans.push_back(-1 * i);
    }
    return ans;
}

int main()
{
    int n = 5;
    vector<int> ans = sumZero(n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}