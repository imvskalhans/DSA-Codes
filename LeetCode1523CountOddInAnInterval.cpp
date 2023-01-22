/*
22 Jan solution by Vishal Singh
Leetcode
1523. Count Odd Numbers in an Interval Range
Easy
Given two non-negative integers low and high.
Return the count of odd numbers between low and high (inclusive).
*/
#include<iostream>
using namespace std;

int countOdds(int low, int high) {
       //best solution
       if(low%2==0 && high%2==0)
       {
           return (high-low)/2;
       }
       else
       {
           return (high-low)/2 + 1;
       }
        // time limit exceeds
        /*int count=0;
        for(int i=low;i<=high;i++)
        {
            if(i%2==1){
                count++;
            }
        }
        return count;
    }*/
    // or just return this but it fails in few test case
    //return (high - low + 1) / 2 + (low % 2 == 1 ? 1 : 0);
    }

int main()
{
    int high,low;
    cout<<"enter low and high intervals respectively"<<endl;
    cin>>low;
    cin>>high;
    int result=countOdds(low,high);
    cout<<"countodds = "<<result<<endl;
}