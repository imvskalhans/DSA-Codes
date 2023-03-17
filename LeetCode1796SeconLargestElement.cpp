/*
LeetCode 1796. Second Largest Digit in a String
You are given a string s that consists of only lowercase English letters and digits.
Return the second largest numerical digit that appears in s, or -1 if it does not exist.
Analogous to LeetCode 2574. Left and Right Sum Differences
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int secondHighest(string s)
{
    vector<int> ans;
    for (char c : s)
    {
        if (c >= '0' && c <= '9')
        {
            int d = c - '0';
            ans.push_back(d);
        }
    }
    if (ans.empty())
    {
        return -1;
    }
    sort(ans.begin(), ans.end());
    bool b = false;
    int lilmax = -1;
    for (int i = 0; i < ans.size() - 1; i++)
    {
        if (ans[i] != ans[i + 1])
        {
            b = true;
        }
        if (ans[i] < ans[ans.size() - 1])
        {
            lilmax = ans[i];
        }
    }
    return b == true ? lilmax : -1;
}

int main()
{
    string s;
    cin >> s;
    cout << secondHighest(s);
}

/*
//below is the solution from LeetCode
best solution

class Solution
{
public:
    int secondHighest(string s)
    {
        priority_queue<int> pq;
        int ans = -1, maxx = -1;
        int flag = 0;
        for (auto it : s)
        {
            if (isdigit(it))
            {
                int num = it - '0';
                if (flag != 0)
                {
                    if (num > maxx)
                    {
                        ans = maxx;
                        maxx = num;
                    }
                    else if (num < maxx)
                    {
                        ans = max(ans, num);
                    }
                    else
                    {
                        continue;
                    }
                }
                else
                {
                    maxx = num;
                    flag++;
                    cout << "here"
                         << " ";
                }
            }
        }
        return ans;
    }
};
*/