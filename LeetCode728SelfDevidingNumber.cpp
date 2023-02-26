/*

*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> selfDividingNumbers(int left, int right)
{
    vector<int> result;
    for (int i = left; i <= right; i++)
    {
        int temp = i;
        bool isSelfDividing = true;
        while (temp > 0)
        {
            int digit = temp % 10;
            if (digit == 0 || i % digit != 0)
            {
                isSelfDividing = false;
                break;
            }
            temp = temp / 10;
        }
        if (isSelfDividing)
        {
            result.push_back(i);
        }
    }
    return result;
}
int main()
{
    int left, right;
    cout << "enter left and right" << endl;
    cin >> left >> right;
    vector<int> result = selfDividingNumbers(left, right);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}
