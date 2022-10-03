class Solution{
  public:
    /*You are required to complete this method */
    bool func(string A, string B, string C, int i, int j, int k, vector<vector<int>>& dp)
    {
        if(k==0)
            return 1;
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int a=0, b=0;
        if(i-1>=0 && A[i-1]==C[k-1])
            a=func(A,B,C,i-1,j,k-1,dp);
        if(j-1>=0 && B[j-1]==C[k-1])
            b=func(A,B,C,i,j-1,k-1,dp);
        
        return dp[i][j]=a or b;
    }
    
    bool isInterleave(string A, string B, string C) 
    {
        int len1=A.length();
        int len2=B.length();
        int len3=C.length();
        
        if(len3!=(len1+len2))
            return -1;
        
        vector<vector<int>> dp(len1+1, vector<int>(len2+1,-1));
        
        return func(A, B, C, len1, len2, len3, dp);
    }
};
