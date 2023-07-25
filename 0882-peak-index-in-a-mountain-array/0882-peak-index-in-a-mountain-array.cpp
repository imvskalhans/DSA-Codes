  
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
         int first=0,last=arr.size()-1;
     int mid=first + (last-first)/2;
    while(first<last)
    {
      
        if(arr[mid]<arr[mid+1])
        {
          
             first=mid+1;
        }
         else
        {
            last=mid;
        }
        
       
        mid=first + (last-first)/2;
    }
    return mid;
    }
};