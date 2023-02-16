/*

*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> addToarrayform(vector<int> &num, int k)
{
    vector<int> ans; int carry =0;
    int i=num.size()-1;
    while(i>0)
    {      while(k!=0){
        int sum=0;
            sum=num[i]+(k%10)+carry; 
            carry=0;
            if(sum>9)
            {
               carry=sum/10;
               sum=sum%10;
            }
            ans.insert(ans.begin(), sum) ;
            //ans.push_back(sum);
            k=k/10;
    }
            i--;

    }
    if(carry>0){
        ans.insert(ans.begin(), carry) ;
    }

    return ans;

}

int main()
{
    int k;
    cout<<"enter k"<<endl;
    cin>>k;

    vector<int> num;
    cout<<"enter nums"<<endl;
     int input;
    while (std::cin >> input) {
        num.push_back(input);
    }
    vector<int> result=addToarrayform(num,k);
    for(int i=0; i< num.size();i++){
        cout<<" "<<result[i]<<" ";
    }
    
}