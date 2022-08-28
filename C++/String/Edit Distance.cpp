class Solution {
  public:
  
    int func(int i, int j, string &s, string &t, vector<vector<int>> &dp){
        if(i<0)
            return j+1;
        if(j<0)
            return i+1;
            
        if(s[i]==t[j])
            return func(i-1,j-1,s,t,dp);
        if(dp[i][j]!=-1)
            return dp[i][j];
            
        dp[i][j]=1+min(min(func(i,j-1,s,t,dp), func(i-1,j,s,t,dp)), func(i-1,j-1,s,t,dp));
        
        return dp[i][j];
    }
    
    int editDistance(string s, string t) {
        int len1=s.length();
        int len2=t.length();
        
        vector<vector<int>> dp(len1, vector<int>(len2,-1));
        
        return func(len1-1, len2-1, s, t, dp);
    }
};
