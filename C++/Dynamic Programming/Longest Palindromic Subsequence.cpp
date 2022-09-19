class Solution{
  public:
    int lcs(string A, string r, int i, int j, vector<vector<int>> &dp)
    {
        if(i<0 || j<0){
            return 0;
        }
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        if(A[i]==r[j])
            dp[i][j]=1+lcs(A, r, i-1, j-1, dp);
        else
            dp[i][j]=max(lcs(A,r,i-1,j,dp), lcs(A,r,i,j-1,dp));
            
        return dp[i][j];
    }
    
    int longestPalinSubseq(string A) {
        string rev=A;
        reverse(rev.begin(), rev.end());
        
        int n=A.length();
        vector<vector<int>> dp(n, vector<int>(n,-1));
        
        return lcs(A, rev, n-1, n-1, dp);
    }
};
