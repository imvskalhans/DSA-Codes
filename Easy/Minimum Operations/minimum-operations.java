//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;
class GfG
{
    public static void main(String args[])
        {
            Scanner sc = new Scanner(System.in);
            int t = sc.nextInt();
            while(t-->0)
                {
                    int n = sc.nextInt();
                    Solution ob = new Solution();
                    System.out.println(ob.minOperation(n));
                }
        }
}    
// } Driver Code Ends


//User function Template for Java


class Solution
{
    public int minOperation(int N)
    {
        //code here.
            int count = 0;
    while (N > 0) {
        if (N % 2 == 0) {
            N /= 2;
        } else {
            N -= 1;
        }
        count++;
    }
    return count;
    }
}