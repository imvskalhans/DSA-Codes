class Solution {
bool isvalid(int &i,string haystack, string needle)
{
    int p1=i,p2=0;
    while(p1<haystack.length() && p2<needle.length())
    {
        if(haystack[p1]!=needle[p2])
          return false;

        p1++,p2++;
    }
    return true;
}

public:
    int strStr(string haystack, string needle) {

        int m=haystack.length(),n=needle.length();
        for(int i=0;i<=m-n;i++)
        {
            if(isvalid(i,haystack,needle))
              return i;
        }

        return -1;

    }
};