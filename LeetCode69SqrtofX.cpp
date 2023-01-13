#include<iostream>
using namespace std;
int sqrtofx(int x)
 {
    int first=0,last=x,ans;
    int mid=first+(last-first)/2;
    while(first<=last)
    {
        if(x==mid*mid)
        {
            return mid;
          
        }
        if(mid*mid>x)
        {
           
            last=mid-1;
        }
        else{
            ans=mid;
            first=mid+1;
        }
        mid=first+(last-first)/2;

    }
    cout<<"perfect root not found nearest integer is"<<endl;
    return ans;

 }
 int main()
 {
    int x;
    cout<<"enter the value"<<endl;
    cin>>x;
    cout<< "squareroot of x ="<<sqrtofx(x)<<endl;
 }