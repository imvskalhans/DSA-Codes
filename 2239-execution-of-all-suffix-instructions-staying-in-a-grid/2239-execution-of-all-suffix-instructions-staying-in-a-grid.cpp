class Solution {
public:
vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
    vector<int> ans(s.length());
    int index = 0;

    int row = startPos[0];
    int col = startPos[1];

    for(int i = 0; i < s.length(); i++) 
    {
        int count = 0;
        for(int j = i; j < s.length(); j++) 
        {
            if(s[j] == 'L') 
            {
                col--;
            } 
            else if(s[j] == 'R') 
            {
                col++;
            } 
            else if(s[j] == 'U')
            {
                row--;
            } 
            else 
            {
                row++;
            }

            //checking if execution is within bound
            if(row >= 0 && row < n && col >=0 && col < n) 
            {
                count++;
            } 
            else 
            {
                break;
            }
        }
            
        row = startPos[0];
        col = startPos[1];
        ans[index++] = count;
    }
    return ans;
    }
};