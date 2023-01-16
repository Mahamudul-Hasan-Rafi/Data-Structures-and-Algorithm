class Solution {
public:
    string longestPalindrome(string str) {
        int len=str.length(), flag, start, step;
    
        vector<vector<bool>> dp(len, vector<bool>(len, false));
        for(int g=0; g<len; g++){
            flag=0;
            for(int i=0, j=g; j<len; j++,i++){
                if(g==0)
                    dp[i][j]=true;
                else if(g==1){
                    if(str[i]==str[j])
                        dp[i][j]=true;
                    else
                        dp[i][j]=false;
                }
                else{
                    if(str[i]!=str[j])
                        dp[i][j]=false;
                    else
                        dp[i][j]=dp[i+1][j-1];
                }
                
                if(dp[i][j] && !flag){
                    start=i;
                    step=g;
                    flag=1;
                }
            }
        
        }
        string s=str.substr(start, step+1);
        return s;
    }
};
