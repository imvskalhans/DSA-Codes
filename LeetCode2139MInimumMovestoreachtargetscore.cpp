/*
leetcode 2139 Minimum Moves to reach target 

*/

#include<iostream>
#include<vector>
using namespace std;
/*
if (num == 0)
{
    return "0";
}
string result = "";
int remainder;
bool is_negative = num < 0;
if (is_negative)
{
    num = -num;
}
while (num != 0)
{
    remainder = num % 7;
    num = num / 7;
    result = to_string(remainder) + result;
}
if (is_negative)
{
    result = "-" + result;
}
return result;
*/

int minMoves(int target, int maxDoubles)
{
    int count = 0;
    if (maxDoubles == 0)
    {
        return target - 1;
    }
    while (target != 1)
    {
        if (target % 2 == 1)
        {
            target = target - 1;
            count++;
        }
        if (maxDoubles > 0)
        {
            target = target / 2;
            maxDoubles--;
            count++;
        }
        else
        {
            target = target - 1;
            count++;
        }
    }
    return count;
}

int main()
{
    int target, maxDoubles;
    cout<<"Enter the target and maxDoubles: ";
    cin >> target >> maxDoubles;
    int result = minMoves(target, maxDoubles);
    cout<<result;
}