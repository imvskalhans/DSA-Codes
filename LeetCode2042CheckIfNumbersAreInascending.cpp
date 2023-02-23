/*


*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool areNumbersAscending(string s) {
        vector<int>ans;
        for(int i=0;i<s.size();i++){ int s1=0,s2=0;
            if(isdigit(s[i])){
                if(isdigit(s[i+1])){
                s1=s[i]-'0';
                s2=s1*10+(s[i+1]-'0');
                ans.push_back(s2);
                i++;
                }
                else{
                    s1=s[i] -'0';
                    ans.push_back(s1);
                }
            }
        }
        for (int i = 0; i < ans.size();i++)
        {
            cout << ans[i] << endl;
        }
            int i = 0;
        for(;i<ans.size()-1;i++){
            if(ans[i]<ans[i+1]){
                //count++;
            }
            else{
                break;
            }
        }
        return (i==ans.size()-1);
}
int main()
{
    string s;
    cout<<"enter the string s"<<endl;
    getline (cin, s);
    bool result = areNumbersAscending(s);
    cout<<result;
}