class Solution {
public:
    string toLowerCase(string s) {
        string ans;
        
        for(int i=0;i<s.size();i++)
        {char ch=s[i];
            if(ch>='A'&&ch<='Z')
            {
                ch=ch-'A'+'a';
                
            }
            ans.push_back(ch);
        }
        return ans;
    }

};