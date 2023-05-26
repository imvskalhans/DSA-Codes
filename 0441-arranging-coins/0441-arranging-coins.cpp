//optimized using binary search
class Solution {
public:
    int arrangeCoins(int n) 
    {
       int low =1;
       int high = n;
       int mid =0;
       while(low<=high){
         long mid = low+(high-low)/2;
           long  total = (long) (mid*(mid+1))/2;
           if(total==n){
               return mid;
           }
           else if(total<n){
               low=mid+1;
           }
           else{
               high = mid-1;
           }
       }
       return high;
    }
};

//my solution
/*
class Solution {
public:
    int arrangeCoins(int n) {
        long long int sum = 0;
        int stairs = 1;
        for(; sum <= n ; stairs++)
        {
            sum += stairs;
        }
        return stairs-2;
    }
};
*/