
//logic important
class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int oddcount = 0, evencount = 0;
        for(int chips : position)
        {
            if(chips % 2 == 0)
            {
                evencount++;
            }
            else
            {
                oddcount++;
            }
        }
        return min(evencount,oddcount);
    }
};