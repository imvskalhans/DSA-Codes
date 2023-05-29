class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int shift = 0;
        
        // Find the common prefix of the binary representation of left and right
        while (left < right) {
            left >>= 1;   // Right-shift left by 1 bit
            right >>= 1;  // Right-shift right by 1 bit
            shift++;      // Keep track of the number of shifts performed
        }
        
        // Left shift the common prefix to restore the original value
        return left << shift;
    }
};

/*
class Solution {
public:
    int rangeBitwiseAnd(int left, int right) 
    {
        for(int i = left+1 ; i<right ; i++)
        {
            left &= i;
        }
        return left;
    }
};
Wrong Answer

8074 / 8269 testcases passed
Input
left =
1
right =
2
Use Testcase
Output
1
Expected
0
*/