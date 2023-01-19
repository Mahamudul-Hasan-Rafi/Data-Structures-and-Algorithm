#include<bits/stdc++.h>
using namespace std;

int lcs(string s1, string s2, int i, int j, vector<vector<int>>& dp)
{
    if(i==0 || j==0)
        return 0;

    if(dp[i][j]!=-1)
        return dp[i][j];

    if(s1[i-1]==s2[j-1])
        return dp[i][j]=1+lcs(s1, s2, i-1, j-1, dp);
    else
        return dp[i][j]=max(lcs(s1, s2, i, j-1, dp), lcs(s1, s2, i-1, j, dp));
}

int main()
{
    string s1="abcde", s2="bdgek";

    int len1=s1.length(), len2=s2.length();
    vector<vector<int>> dp(len1+1, vector<int>(len2+1, -1));

    //Recursion+memoization
    //lcs(s1, s2, len1, len2, dp);

    //Tabulation
    for(int i=0; i<=len1; i++)
        dp[i][0]=0;
    for(int j=0; j<=len2; j++)
        dp[0][j]=0;
    for(int i=1; i<=len1; i++){
        for(int j=1; j<=len2; j++){
            if(s1[i-1]==s2[j-1])
                dp[i][j]=1+dp[i-1][j-1];
            else
                dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
        }
    }

    //printing the longest common sequence
    int i=len1, j=len2;
    string temp="";
    while(i>0 && j>0){
        if(s1[i-1]==s2[j-1]){
            temp=s1[i-1]+temp;
            i--;
            j--;
        }
        else{
            if(dp[i-1][j]>dp[i][j-1])
                i-=1;
            else
                j-=1;
        }
    }

    cout<<dp[len1][len2]<<endl;
    cout<<temp<<endl;

    return 0;
}

