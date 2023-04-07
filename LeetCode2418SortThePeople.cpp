/*
LeeCode 2418 Sort the People
Description:
There are n people standing in a line, and each person is assigned a unique rating value. You are given an integer array rating of size n that represents the rating value of each person in the line from left to right.

*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;

vector<string> sortPeople(vector<string> &names, vector<int> &heights)
{
    vector<string> res;
    unordered_map<int, vector<string>> map;
    for (int i = 0; i < names.size(); i++)
    {
        map[heights[i]].push_back(names[i]);
    }
    for (auto it = map.begin(); it != map.end(); it++)
    {
        sort(it->second.begin(), it->second.end());
    }
    for (auto it = map.begin(); it != map.end(); it++)
    {
        for (int i = 0; i < it->second.size(); i++)
        {
            res.push_back(it->second[i]);
        }
    }
    return res;
}

int main()
{
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
    vector<int> heights = {1, 3, 2, 5, 3, 5, 6, 2, 8, 9, 1, 0, 5, 8, 9, 7, 4, 0, 6, 2, 6, 4, 3, 4, 6, 2};
    vector<string> res = sortPeople(names, heights);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}