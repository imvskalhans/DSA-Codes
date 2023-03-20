/*
LeetCode 812. Largest Triangle Area
You have a list of points in the plane. Return the area of the largest triangle that can be formed by any 3 of the points.

*/

#include<iostream>
#include<vector>
#include<algorithm>
#include <iomanip>
using namespace std;

double largestTriangleArea(vector<vector<int>> &points)
{
    double maxArea = 0;
    for (int i = 0; i < points.size();i++)
    {
        for (int j = i + 1; j < points.size();j++)
        {
            for (int k = j + 1; k < points.size();k++)
            {
                double area = 0.5 * abs(points[i][0] * points[j][1] + points[j][0] * points[k][1] + points[k][0] * points[i][1] - points[i][1] * points[j][0] - points[j][1] * points[k][0] - points[k][1] * points[i][0]);
                maxArea = max(maxArea, area);
            }
        }
    }
    return maxArea;
}