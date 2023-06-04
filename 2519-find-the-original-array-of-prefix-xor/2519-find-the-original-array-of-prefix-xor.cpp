class Solution 
{
public:
    vector<int> findArray(vector<int>& pref) 
    {
        int n = pref.size();
        int pre_xor=0;
        
        for(int i=1; i<n; i++)
        {
            pre_xor ^= pref[i-1];
            pref[i] = pre_xor^pref[i];
        }
        return pref;
    }
};