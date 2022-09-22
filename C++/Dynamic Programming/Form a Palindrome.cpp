class Solution{
  public:
  
    int lcs(string str, string t, int i, int j, vector<vector<int>> &dp)
    {
        if(i<0 || j<0)
            return 0;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
            
        if(str[i]==t[j])
            return dp[i][j]=1+lcs(str, t, i-1, j-1, dp);
        else
            return dp[i][j]=max(lcs(str, t, i-1, j, dp), lcs(str, t, i, j-1, dp));
    }
    
    int countMin(string str){
        
        int n=str.length();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        
        string t=str;
        reverse(t.begin(), t.end());
        
        return n-lcs(str,t,n-1,n-1,dp);
    }
};
