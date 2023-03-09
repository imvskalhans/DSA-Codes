/*
leetcode 2231 Largest Number After Digit Swap by Parity
Medium
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int largestInteger(int num)
{
    vector<int> odd;
    vector<int> even;
    int result = 0;
    int i = 1;
    while (num > 0)
    {
        int d = num % 10;
        if (i % 2 == 0)
        {
            even.push_back(d);
        }
        else
        {
            odd.push_back(d);
        }
        i++;
        num = num / 10;
    }
    int size = i - 1;
    vector<int> ans;
    cout << i-1<<endl;

    sort(odd.begin(), odd.end(), greater<int>());
    for (int i = 0; i < odd.size();i++)
    {
        cout << odd[i] << " ";
    }
    cout << endl;
    sort(even.begin(), even.end(), greater<int>());
    for (int i = 0; i < even.size(); i++)
    {
        cout << even [i] << " ";
    }
    cout << endl;
    int n = odd.size();
    int m = even.size();
    int j = 0;
    int k = 0;
    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
        {
            if(j==m)
            {
                ans.push_back(odd[k]);
                break;
            }
            ans.push_back(even[j]);
            j++;
        }
        else
        {
            ans.push_back(odd[k]);
            k++; 
        }
    }

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    for (int i = 0; i < ans.size(); i++)
    {
        result = result * 10 + ans[i];
    }
    return result;
}

 int main()
{
        cout<<"Enter the number : ";
        int n;
        cin >> n;
        cout << largestInteger(n);
        return 0;
}