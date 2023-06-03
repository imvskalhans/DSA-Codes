class Solution {
public:
    string removeTrailingZeros(string num) {
        int i ;
        for(i = num.size() - 1; i>=0 ; i--)
        {
            if(num[i] == '0')
            {
                continue;
            }
            else
            {
                break;
            }
        }
        return num.substr(0,i+1);
    }
};