/*
LeetCode
2544. Alternating Digit Sum
Easy
You are given a positive integer n. 
Each digit of n has a sign according to the following rules:
The most significant digit is assigned a positive sign.
Each other digit has an opposite sign to its adjacent digits.
Return the sum of all digits with their corresponding sign.



*/
#include<iostream>
#include<vector>
using namespace std;

int alternateDigitSum(int n) {
    vector<int>d;
     while (n> 0) {
        d.push_back(n % 10);
        n /= 10;
    }
    int sum = 0, sign = 1;
    for (int i = d.size() - 1; i >= 0; i--) {
        sum += sign * d[i];
        sign *= -1;
    }
    return sum;
}
int main()
{
    int n;
    cout<<"enter n "<<endl;
    cin>>n;
    int result=alternateDigitSum(n);
    cout<<"result "<<result<<endl;

}