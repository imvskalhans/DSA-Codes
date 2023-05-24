class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long>ans;
        long long mid = num/3;
        if(mid-1 + mid + mid+1 == num)
        {
            ans.push_back(mid-1);
            ans.push_back(mid);
            ans.push_back(mid+1);
        }
        else
        {
            return ans;
        }
        return ans;
    }
};