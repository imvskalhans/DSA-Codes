/*
leetcode 2037. Minimum Number of Moves to Seat Everyone
minimum number of moves to seat everyone
There are n seats and n students in a room. You are given an array seats of length n, where seats[i] is the position of the ith seat. You are also given the array students of length n, where students[j] is the position of the jth student.
You may perform the following move any number of times:
Increase or decrease the position of the ith student by 1 (i.e., moving the ith student from position x to x + 1 or x - 1)
Return the minimum number of moves required to move each student to a seat such that no two students are in the same seat.
Note that there may be multiple seats or students in the same position at the beginning.

*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int minMovesToSeat(vector<int> &seats, vector<int> &students)
{
    int result = 0;
    sort(seats.begin(), seats.end());
    sort(students.begin(), students.end());
    for (int i = 0; i < seats.size(); i++)
    {
        result += abs(seats[i] - students[i]);
    }
    return result;
}
int main()
{
    int n;
    cout << "enter n" << endl;
    cin >> n;
    vector<int> seats(n);
    vector<int> students(n);
    cout << "enter seats" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> seats[i];
    }
    cout << "enter students" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> students[i];
    }
    int result = minMovesToSeat(seats, students);
    cout << "result is " << result << endl;
}
