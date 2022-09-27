int CountPS(char S[], int N)
{
    vector<vector<int>> dp(N, vector<int>(N,0));
    
    int cnt=0;
    for(int i=0; i<N; i++){
        for(int j=i, k=0; j<N; j++, k++){
            if(j==k)
                dp[k][j]=1;
            else if(S[j]==S[k] && j-k==1)
                dp[k][j]=1;
            else
                if(S[j]==S[k] && dp[k+1][j-1]==1)
                    dp[k][j]=1;
        }
        
    }
    
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(i!=j && dp[i][j])
                cnt++;
        }
    }
    
    return cnt;
}
