class Solution {
    public long coinCount(int S[], int index, int t, long dp[][])
    {
        if(index==0){
            if(t%S[index]==0)
                return 1;
            else
                return 0;
        }
        
        if(dp[index][t]!=-1)
            return dp[index][t];
        
        long nottake = coinCount(S, index-1, t, dp);
        long take=0;
        
        if(S[index]<=t)
            take = coinCount(S, index, t-S[index], dp);
        
        return dp[index][t]=take+nottake;
    }
    
    public long count(int S[], int m, int n) {
        int index=m-1;
        long dp[][] = new long[m+1][n+1];
        
        for(long[] arr1: dp)
            Arrays.fill(arr1, -1);
        
        return coinCount(S, index, n, dp);
    }
}
