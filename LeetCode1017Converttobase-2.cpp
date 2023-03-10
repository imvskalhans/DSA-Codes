/*
leetcode 1017 Convert to base -2

*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string baseneg2(int N)
{
    string ans;
    while (N != 0)
    {
        int r = N % (-2);
        N = N / (-2);
        if (r < 0)
        {
            r += 2;
            N += 1;
        }
        ans += to_string(r);
    }
    if (ans.empty())
    {
        return "0";
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int N = 2;
    cout << baseneg2(N) << endl;
    return 0;
}

/*
string baseNeg2(int n) {
     if (n == 0) {
            return "0";
        }
        string result = "";
        while (n != 0) {
            int rem = n % (-2);
            if (rem < 0) {
                rem += 2; // adjust for negative remainder
            }
            result = to_string(rem) + result;
            n = (n - rem) / (-2); // divide by -2 to get next digit
        }
        return result;
    }
*/