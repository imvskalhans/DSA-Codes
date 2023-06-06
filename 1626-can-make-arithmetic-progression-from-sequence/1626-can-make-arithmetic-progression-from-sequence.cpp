class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int diff = abs(arr[0]-arr[1]);
        for(int i = 0 ; i<arr.size()-1; i++)
        {
            int diff2 = abs(arr[i]-arr[i+1]);
            if(diff2 == diff)
            {
                continue;
            }
            else
            {
                return false;
            }   
        }
        return true;
    }
};