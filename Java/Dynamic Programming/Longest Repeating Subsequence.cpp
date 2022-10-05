class Solution
{
    public int lcs(String s1, String s2, int i, int j, int[][] dp)
    {
        if(i==0 || j==0)
            return dp[i][j]=0;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        if(s1.charAt(i-1)==s2.charAt(j-1) && i!=j)
            return dp[i][j]=1+lcs(s1, s2, i-1, j-1, dp);
        
        int a=lcs(s1, s2, i-1, j, dp);
        int b=lcs(s1, s2, i, j-1, dp);
        
        if(a>b)
            dp[i][j]=a;
        else
            dp[i][j]=b;
        
        return dp[i][j];
    }
    
    public int LongestRepeatingSubsequence(String str)
    {
        int n=str.length();
        
        int[][] dp = new int[n+1][n+1];
        for(int i=0; i<=n; i++)
            for(int j=0; j<=n; j++)
                dp[i][j]=-1;
                
        return lcs(str, str, n, n, dp);
    }
}
