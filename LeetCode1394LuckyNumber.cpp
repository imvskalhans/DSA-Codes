/*

*/
#include<iostream>
#include<vector>
using namespace std;
int findLucky(vector<int>& arr) {
        vector<int> count(501,0);
        for(auto& i : arr)
        {
            count[i]++;
        }
        // auto max_it = max_element(count.begin(), count.end());
        //int max_index = distance(v.begin(), max_it);
        int i=arr.size();
        for(;i>=1;i--)
        {
            if(count[i]==i)
            {
                return i;
            }
        }
        return -1;   
    }
    int main()
{
    vector<int> arr;
    cout<<"enter arr"<<endl;
     int input;
    while (std::cin >> input) {
        arr.push_back(input);
    }
    int result=findLucky(arr);
    cout<<"output = "<<result<<" ";
}