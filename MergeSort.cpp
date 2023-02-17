/*

*/
#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &num, int s, int e)
{
    //creating  two arrays
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-s;
    
    vector<int> first (len1);
    
    vector<int> second (len2);


    //copying values in two arrays
    int mainarrayindex = s;
    for(int i=0;i<len1;i++)
    {
        first[i]=num[mainarrayindex++];
    }
     for(int i=0;i<len2;i++)
    {
        second[i]=num[mainarrayindex++];
    }
    
    //merge two sorted arrays
    int index1=0;
    int index2=0;
    mainarrayindex = s;
    while(index1<len1&&index2<len2)
    {
        if(first[index1]<second[index2])
        {
            num[mainarrayindex++]=first[index1];
        }
        else{
            num[mainarrayindex++]=second[index2];
        }

    }
    while(index1<len1)
    {
        num[mainarrayindex++]=first[index1];
    }
    while(index2<len2)
    {
        num[mainarrayindex++]=second[index2];
    }


}

void mergesort(vector<int> &num , int s , int e )
{
    //base case
    if(s>=e)
    {
        return;
    }
    int mid=s+(e-s)/2;
    //left part breaking
    mergesort(num,s,mid);

    //right part breaking
    mergesort(num,mid+1,e);

    //merging and sorting two arrays
    merge(num,s,e);




}


int main()
{
    vector<int> num;
    cout<<"enter num"<<endl;
     int input;
    while (std::cin >> input) {
        num.push_back(input);
    }
    int s=0;
    int e=num.size()-1;
    mergesort(num,s,e);
    for(int i=0; i< num.size();i++){
        cout<<" "<<num[i]<<" ";
    }cout<<endl;
    
}
