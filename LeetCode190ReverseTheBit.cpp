/*
leetcode 190 Reverse Bits
Reverse bits of a given 32 bits unsigned integer.
*/

#include<iostream>
#include<vector>
using namespace std;

int reverseBits(int n)
{
    int rev = 0;
    for (int i = 0; i < 32; i++)
    {
        rev = rev * 2 + n % 2;
        n = n / 2;
    }
    return rev;
}

int main()
{
    int n;
    cin >> n;
    cout << reverseBits(n);
    return 0;
}
/*
//best approach
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t num=0;
        for(int i=0;i<32;i++){
            num=num<<1;
            num=num+(n&1);
            n=n>>1;
        }
        return num;
    }
};
*/