class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n = details[0].size();
        int count = 0;
        for(string detail : details)
        {
            if(detail[n-4] == '7' || detail[n-4] == '8' || detail[n-4] == '9')
            {
                count++;
            }
            else if(detail[n-4] == '6' && detail[n-3] != '0')
            {
                count++;
            }
        }
        return count;
    }
};