/*
leetcode 1539. Kth Missing Positive Number
Easy

*/

#include<iostream>
#include<vector>
using namespace std;


    int findKthPositive(vector<int> & arr, int k)
    {
        vector<int> v(k,0);
        int i = 1;
        int j = 0;
        while(i<1000)
        {
            if(i == arr[j])
            {
                i++;
                j++;
            }
            else
            {
                v.push_back(i);
                i++;
            }
        }
        return v[k-1];
    }

 int main()
{
        int k;
        cout<<"Enter the value of k: ";
        cin>>k;
        cout<<"Enter the array: ";
        vector<int> arr;
        int n;
        while(cin>>n)
        {
            arr.push_back(n);
        }
        cout << findKthPositive(arr, k);
        return 0;
}

/*

int findKthPositive(vector<int>& arr, int k)
{
    int i=0;
    int j=1;
    int count=0;
    while(i<arr.size())
    {
        if(arr[i]==j)
        {
            i++;
            j++;
        }
        else
        {
            count++;
            if(count==k)
            {
                return j;
            }
            j++;
        }
    }
    return j+k-count-1;
}
*/
