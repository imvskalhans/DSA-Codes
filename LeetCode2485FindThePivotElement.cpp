 /*
22 Jan solution by Vishal Singh
Leetcode
2485. Find the Pivot Integer
Easy
Given a positive integer n, find the pivot integer x such that:

The sum of all elements between 1 and x inclusively equals the
sum of all elements between x and n inclusively.
Return the pivot integer x. If no such integer exists,
return -1. It is guaranteed that there will be at most one pivot index 
for the given input.

 // best approach
 class Solution {
public:
    int pivotInteger(int n) {
        if(n==1){
            return 1;
        }
        int k=n/2;
        while(k!=n){
            if(((k*(k+1))/2)==(((n*(n+1))/2)-((k-1)*(k))/2)){
                return k;
            }
            k++;
        }
        return -1;
    }
};
 
 
 */
 
 
 
 
 
 // my approach
 
 #include<iostream>
 using namespace std;
 int pivotInteger(int n) {
        if (n<1) return -1;
        int start = 1, end = n;
        int mid = start + (end-start)/2;
        while(start<=end)
        {   long int sum1 = ((mid * (mid+1))/2);
            long int sum2 = (n * (n+1))/2 - sum1 + mid;
            if(sum1 == sum2)
            {
                return mid;
            }
            else if(sum1 < sum2)
            {
                start = mid+1;
            }
            else
            {
                end = mid-1;
            }
            mid = start + (end-start)/2;
        }
        return -1;
    } 

int main()
 {
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    cout<< "pivotInteger ="<<pivotInteger(n)<<endl;
 }