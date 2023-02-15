/*
Leetcode 2160
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int minimumSum(int num) {
        vector <int> ans(0);
        while(num>0)
        {
            ans.push_back(num%10);
            num=num/10;
        }
        sort(ans.begin(),ans.end());
        int num1;
        num1=ans[0]*10+ans[2];
     //cout<< "output 2 ="<<num1<<endl;
        int num2;
        num2=ans[1]*10+ans[3];
       // cout<< "output 3 ="<<num2<<endl;
        return num1+num2;
    }
 int main()
 {
    int num ; 
    cout<<"enter the number num"<<endl;
    cin>>num;
    int reult = minimumSum(num);
    cout<< "output ="<<reult<<endl;
 }