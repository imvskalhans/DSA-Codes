/*
leetcode 875. Koko Eating Bananas
Koko loves to eat bananas.  There are N piles of bananas, the i-th pile has piles[i] bananas.  The guards have gone and will come back in H hours.

*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <numeric>
#include <functional>
#include <sstream>
#include <cassert>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int H) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (canFinish(piles, H, mid)) {
                high = mid;
            }
            else {
                low = mid + 1;
            }
        }
        return low;
    }
private:
    bool canFinish(vector<int>& piles, int H, int K) {
        int time = 0;
        for (int pile : piles) {
            time += pile / K + (pile % K == 0 ? 0 : 1);
        }
        return time <= H;
    }
};

void test() {
    Solution sol;
    vector<int> piles = {3, 6, 7, 11};
    int H = 8;
    cout << sol.minEatingSpeed(piles, H) << endl;
}


int main() {
    test();
    return 0;
}