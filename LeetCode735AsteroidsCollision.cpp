/*
LeetCode735. Asteroids Collision
Description:
We are given an array asteroids of integers representing asteroids in a row.
For each asteroid, the absolute value represents its size, and the sign represents its direction (positive meaning right, negative meaning left).
Each asteroid moves at the same speed.
Find out the state of the asteroids after all collisions.
If two asteroids meet, the smaller one will explode.
If both are the same size, both will explode.
Two asteroids moving in the same direction will never meet.

*/

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <stack>
#include <algorithm>
using namespace std;

vector<int> asteroidCollision(vector<int>& asteroids)
{
    stack<int> s;
    for (int i = 0; i < asteroids.size(); i++)
    {
        if (asteroids[i] > 0)
        {
            s.push(asteroids[i]);
        }
        else
        {
            while (!s.empty() && s.top() > 0 && s.top() < -asteroids[i])
            {
                s.pop();
            }
            if (s.empty() || s.top() < 0)
            {
                s.push(asteroids[i]);
            }
            else if (s.top() == -asteroids[i])
            {
                s.pop();
            }
        }
    }
    vector<int> result;
    while (!s.empty())
    {
        result.push_back(s.top());
        s.pop();
    }
    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    vector<int> asteroids = { 5, 10, -5 };
    vector<int> result = asteroidCollision(asteroids);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}