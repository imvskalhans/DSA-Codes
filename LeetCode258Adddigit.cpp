/*
LeetCode
258. Add Digits
Easy
Given an integer num, 
repeatedly add all its digits until the result has only one digit, and return it.

//best appraoach
class Solution {
public:
    int addDigits(int num) {
        return 1 + (num - 1) % 9;
    }
};

*/

#include<iostream>
using namespace std;
int adddigit(int n)
{
   // int sum1=0;
        while (n>9) {
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit;
            n /= 10;
        }
        n = sum;

    }
    return n;
    }

int main ()
{
    int n;
    cout<<"n"<<endl;
    cin>>n;
    int res = adddigit(n);
    cout<<"result -"<<res<<endl;
}
