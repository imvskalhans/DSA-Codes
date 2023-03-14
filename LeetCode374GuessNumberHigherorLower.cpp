/*
LeeCode 374 Guess Number Higher or Lower
You are playing a game with your friend. You write down a number and ask your friend to guess what the number is. Each time your friend makes a guess, you provide a hint that indicates how many digits in said guess match your secret number exactly in both digit and position (called "bulls") and how many digits match the secret number but locate in the wrong position (called "cows"). Your friend will use successive guesses and hints to eventually derive the secret number.
Write a function to return a hint according to the secret number and friend's guess, use A to indicate the bulls and B to indicate the cows.
Please note that both secret number and friend's guess may contain duplicate digits.

*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int guess(int num)
{
    return 0;
}

int guessNumber(int n)
{
    int start = 0;
    int end = n;
    int ans;
    while (start <= end)
    {
        int pick = start + (end - start) / 2;
        ans = guess(pick);
        if (ans == 0)
        {
            ans = pick;
            break;
        }
        else if (ans == -1)
        {
            end = pick - 1;
        }
        else if (ans == 1)
        {
            start = pick + 1;
        }
    }
    return ans;
}
int main()
{
    int n = 10;
    int ans = guessNumber(n);
    cout << ans << endl;
    return 0;
}