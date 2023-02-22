/*

*/
#include<iostream>
#include<vector>
using namespace std;
bool isUgly(int n) {
        if (n <= 0) {
        return false;
    }
    
    while (n % 2 == 0) {
        n /= 2;
    }
    while (n % 3 == 0) {
        n /= 3;
    }
    while (n % 5 == 0) {
        n /= 5;
    }
    
    return n == 1;
        
    }
    int main()
{
    int arr;
    cout<<"enter arr"<<endl;
    cin>>arr;
    bool result=isUgly(arr);
    cout<<"output = "<<result<<" ";
}