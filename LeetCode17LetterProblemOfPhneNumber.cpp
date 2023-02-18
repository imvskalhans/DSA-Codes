/*

*/

#include<iostream>
#include<vector>
using namespace std;

vector<string> map(int n)
{
    switch(n)
    {
    case 2:  vector<string> s2 {"abc"} ; return s2;
    break;
     case 3: vector<string> s3 {"def"} ; return s3;
    break;
     case 4: vector<string> s4 {"ghi"} ; return s4;
    break;
     case 5: vector<string> s5 {"jkl"} ; return s5;
    break;
     case 6: vector<string> s6 {"mno"} ; return s6;
    break;
     case 7: vector<string> s7 {"pqrs"} ; return s7;
    break;
     case 8: vector<string> s8 {"tuv"} ; return s8;
    break;
     case 9: vector<string> s9 {"wxyz"} ; return s9;
    break;
}
}

vector<string> letterCombinations(string digits) {
    
          vector<int> ans;
          vector<string>q = map(digits[0]);
          vector<string>w = map(digits[1]);
          for(int i=0;i<q.size();i++)
          {
            for(int j=0;j<w.size();j++)
            {
                if(i!=j)
                {
                    ans.push_back(q[i]);
                    ans.push_back(w[j]);
                }

            }
          }
  
        
    }



 int main()
{
    string s;
    cout<<"enter the string s"<<endl;
    getline (cin s);
    vector<string> result  letterCombinations(s);
    cout<<result;
}