class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        long long x = num - 3;
        if(x%3 == 0)
        {
            x = x/3;
            return {x, x+1, x+2};
        }
        return {};
    }
};