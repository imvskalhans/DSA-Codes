/*
leetcode 796. Rotate String
Easy

*/

#include<iostream>
#include<string>
using namespace std;

bool rotateString(string A, string B) {
    if(A.size()!=B.size())
    {
        return false;
    }
    if(A==B)
    {
        return true;
    }
    int i=0;
    int j=0;
    int k=0;
    while(i<A.size())
    {
        if(A[i]==B[j])
        {
            i++;
            j++;
        }
        else
        {
            i=0;
            j=0;
            k++;
            j=k;
        }
    }
    if(i==A.size())
    {
        return true;
    }
    else
    {
        return false;
    }
}

 int main()
{
    string A="abcde";
    string B="cdeab";
    cout<<rotateString(A,B);
    return 0;
}