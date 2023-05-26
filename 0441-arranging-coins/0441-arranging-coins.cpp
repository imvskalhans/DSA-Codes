class Solution {
public:
    int arrangeCoins(int n) {
        long long int sum = 0;
        int stairs = 1;
        for(; sum <= n ; stairs++)
        {
            sum += stairs;
        }
        return stairs-2;
    }
};