/*

*/

#include<iostream>
#include<vector>
using namespace std;

int strStr(string haystack, string needle)
{
    int i = 0;
    while (i < haystack.size()-needle.size())
    {
        int j = 0;
        while (j < needle.size()&& haystack[i+j] == needle[j])
        {
                j++;
            }
                if (j == needle.size() - 1)
            {
                return i;
            }
        i++;
    }
    return -1;
}

int main()
{
    string s;
    cout << "enter the string s" << endl;
    getline(cin, s);
    string t;
    cout << "enter the string t" << endl;
    getline(cin, t);
    int result = strStr(s, t);
    cout << result;
}

/*
int strStr(string haystack, string needle) {
    int i = 0;
    while (i <= haystack.size() - needle.size()) {
        int j = 0;
        while (j < needle.size() && haystack[i + j] == needle[j]) {
            j++;
        }
        if (j == needle.size()) {
            return i;
        }
        i++;
    }
    return -1;
}
*/
/*
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
*/

/*

class Solution {
public:
    int strStr(string h, string n) {
        if(n.length()>h.length()) return -1;
        for(int i = 0; i<h.length()-n.length()+1; i++){
            if(h.substr(i, n.length())==n) return i;
        }
        return -1;
    }
};

*/

/*

class Solution {
public:


    string st(string & haystack, int i, int j ){
        string temp = "";
        for (int k = i; k<=j; k++){
            temp += haystack[k];
        }
        return temp;

    }
    int strStr(string haystack, string needle) {
        int m = haystack.size();
        int n = needle.size();
        if ((n>m) || (n==m && haystack != needle ))
        return -1;

        for (int i = n-1; i<m; i++){
            if (st(haystack, i-n+1, i) == needle){
                return i-n+1;
            }
        }

        return -1;
        }


    };

class Solution {
public:


    string st(string & haystack, int i, int j ){
        string temp = "";
        for (int k = i; k<=j; k++){
            temp += haystack[k];
        }
        return temp;

    }
    int strStr(string haystack, string needle) {
        int m = haystack.size();
        int n = needle.size();
        if ((n>m) || (n==m && haystack != needle ))
        return -1;

        for (int i = n-1; i<m; i++){
            if (st(haystack, i-n+1, i) == needle){
                return i-n+1;
            }
        }

        return -1;
        }


    };


class Solution {
public:
    int strStr(string haystack, string needle) {
      return haystack.find(needle);
    }
};

*/
