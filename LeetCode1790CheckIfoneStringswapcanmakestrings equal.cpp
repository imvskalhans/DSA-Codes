/*
LeetCode 1790. Check if One String Swap Can Make Strings Equal
You are given two strings s1 and s2 of equal length. A string swap is an operation where you choose two indices in a string (not necessarily different) and swap the characters at these indices.
*/
#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

bool areAlmostEqual(string s1, string s2)
{
    int n = s1.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s1[i] != s2[i])
            count++;
    }
    if (count > 2)
        return false;
    unordered_map<char, int> m;
    for (int i = 0; i < n; i++)
    {
        m[s1[i]]++;
        m[s2[i]]--;
    }
    for (auto it = m.begin(); it != m.end(); it++)
    {
        if (it->second != 0)
            return false;
    }
    return true;
}