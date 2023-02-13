#include<iostream>
using namespace std;
 int rec(int arr[],int n)
 {

    int sum=0;
    //base condition
    if(n==0)
    {
        return arr[n];
    }
    //recursive relation
    int d=rec(arr,n-1);
   return sum+d;
 }
int main(){
    int arr[5]={5,1,1,1,8};
    cout<<rec(arr,4);
}