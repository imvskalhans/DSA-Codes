#include<iostream>
using namespace std;
 bool rec(int arr[], int n)
 {

    //base condition
    if(n==0)
    {
        return true;
    }
    //recursive relation
    if(arr[n]>arr[n-1])
    {
        rec(arr,n-1);
    }
    else{
        return false;
    }

 }


int main(){
    int arr[5]={1,1,1,1,5};
    cout<<rec(arr,4);

}