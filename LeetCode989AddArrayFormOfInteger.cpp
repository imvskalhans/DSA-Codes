/*
lc 989

*/
//will fail for 999999 + 1 
#include<iostream>
#include<vector>
using namespace std;

 vector<int> addToArrayForm(vector<int>& num, int k) {
        long  int number=0;
        long long int sum=0;
        vector<int> ans;
        for(int i=0;i<num.size();i++)
        {
            number=number*10 + num[i];
        }
        cout<<"number"<<number<<endl;
        sum=number+k;
       // cout<<"sum 1"<<sum<<endl;
        while(sum>0)
        {
            int d=sum%10;
            //cout<<"sum 2"<<sum<<endl;
            ans.insert(ans.begin(),d);

            sum=sum/10;
           // cout<<"sum 3"<<sum<<endl;
        }
        return ans;
    }

int main()
{
    int k;
    cout<<"enter k "<<endl;
    cin>>k;
    vector<int> nums;
    cout<<"enter nums"<<endl;
     int input;
    while (std::cin >> input) {
        nums.push_back(input);
    }
    vector<int> result=addToArrayForm(nums,k);
    for(int i=0;i<result.size();i++)
   {
    cout<<result[i]<<" ";
   }
}