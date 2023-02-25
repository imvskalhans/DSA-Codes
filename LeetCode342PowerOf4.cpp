/*
leetcode 342. Power of Four

Easy

*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPowerOfFour(int n)
{
    if (n == 0)
    {
        return false;
    }
    while (n % 4 == 0)
    {
        n = n / 4;
    }
    return n == 1;
}
int main()
{
    int n;
    cout << "enter n" << endl;
    cin >> n;
    bool result = isPowerOfFour(n);
    cout << result << " ";
}
/*
another solution recursive
class Solution {
public: bool isPowerOfFour(int n) {
if(n==0)
return false;
if(n==1)
return true;
if(n>1)
return n%4==0 && isPowerOfFour(n/4);
else
return false;
}
// another solution iterative
bool isPowerOfFour(int n) {
       if(n <= 0) {
            return false;
        }
        while(n > 1) {
            if(n % 4 == 0) {
                n = n / 4;
            } else {
                return false;
            }
        }
        return true;
    }
};
*/
