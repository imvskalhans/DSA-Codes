/*
leetcode 326. Power of Three
Easy

*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPowerOfThree(int n)
{
    if (n == 0)
    {
        return false;
    }
    while (n % 3 == 0)
    {
        n = n / 3;
    }
    return n == 1;
}
int main()
{
    int n;
    cout << "enter n" << endl;
    cin >> n;
    bool result = isPowerOfThree(n);
    cout << result << " ";
}
/*
another solution recursive
class Solution {
public: bool isPowerOfThree(int n) {
if(n==0)
return false;
if(n==1)
return true;
if(n>1)
return n%3==0 && isPowerOfThree(n/3);
else
return false;
}
// another solution iterative
bool isPowerOfThree(int n) {
       if(n <= 0) {
            return false;
        }
        while(n > 1) {
            if(n % 3 == 0) {
                n = n / 3;
            } else {
                return false;
            }
        }
        return true;
    }
};
*/