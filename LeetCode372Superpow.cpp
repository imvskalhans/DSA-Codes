/*
leetcode 372. Super Pow
Your task is to calculate ab mod 1337 where a is a positive integer and b is an extremely large positive integer given in the form of an array.
*/

#include<iostream>
#include<vector>
using namespace std;

int superPow(int a, vector<int>& b)
{
    int ans = 1;
    for (int i = 0; i < b.size(); i++)
    {
        int temp = 1;
        for (int j = 0; j < 10; j++)
        {
            temp = (temp * a) % 1337;
        }
        for (int j = 0; j < b[i]; j++)
        {
            ans = (ans * temp) % 1337;
        }
        a = temp;
    }
    return ans;
}

int main()
{
    int a = 2;
    vector<int> b = { 1, 0 };
    cout << superPow(a, b);
    return 0;
}