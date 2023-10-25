//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG{
    public static void main(String args[])throws IOException
    {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(in.readLine());
        while(t-- > 0){
            String line1[] = in.readLine().trim().split("\\s+");
            int N = Integer.parseInt(line1[0]);
            int W = Integer.parseInt(line1[1]);
            String line2[] = in.readLine().trim().split("\\s+");
            int val[] = new int[N];
            for(int i = 0;i < N;i++)
                val[i] = Integer.parseInt(line2[i]);
            String line3[] = in.readLine().trim().split("\\s+");
            int wt[] = new int[N];
            for(int i = 0;i < N;i++)
                wt[i] = Integer.parseInt(line3[i]);
                
            Solution ob = new Solution();
            System.out.println(ob.knapSack(N, W, val, wt));
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution{
    static int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
              int[] dp = new int[W+1];
        dp[0] = 0;
        int max = 0;
        int tbagc = 0;
        for(int bagc = 1;bagc<=W;bagc++) {
            max = 0;
            for(int j = 0;j<N;j++) {
                if(wt[j] <= bagc) {
                    int rbagc = bagc - wt[j];
                    tbagc = val[j] + dp[rbagc];
                }
                if(max < tbagc) {
                    max = tbagc;
                }
            }
            dp[bagc] = max;
        }
        return dp[W];      
    }
}