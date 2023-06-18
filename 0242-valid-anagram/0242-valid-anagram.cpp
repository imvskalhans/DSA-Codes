class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
       if(s.size()!=t.size())
        {
            return false;
        }
          return s==t;
        
        
    }
};