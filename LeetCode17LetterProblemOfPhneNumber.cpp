/*
17. Letter Combinations of a Phone Number
Medium
14.1K
813
Companies
Given a string containing digits from 2-9 inclusive, return all possible letter 
combinations that the number could represent. Return the answer in any order.

A mapping of digits to letters (just like on the telephone buttons) is given below
. Note that 1 does not map to any letters.


 
*/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

void solve(string digits,int index,string output,vector<string>& ans,string mapping[])
    {
        //base case
        if(index>=digits.length())
        {
            ans.push_back(output);
            return;
        }
        //find number
        int number=digits[index]-'0';
        string value=mapping[number];
        //recursive call
        for(int i=0;i<value.size();i++)
        {
            output.push_back(value[i]);
            solve(digits,index+1,output,ans,mapping);
            output.pop_back();
        }
    }

vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length()==0)
        {
            return ans;
        }
        string output;
        int index=0;
        string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,index,output,ans,mapping);
        return ans;
        
    }




 int main()
{
    string s;
    cout<<"enter the string s"<<endl;
    getline (cin ,s);
    vector<string> result = letterCombinations(s);
    
    for (string word : result) {
        cout << word << " ";
    }
    cout << endl;
}