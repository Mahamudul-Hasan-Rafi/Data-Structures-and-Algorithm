#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="abacdde";

    int len=s.length();
    vector<vector<int>> dp(len+1, vector<int>(len+1, -1));

    //Tabulation
    for(int i=0; i<=len; i++)
        dp[i][0]=0;
    for(int j=0; j<=len; j++)
        dp[0][j]=0;
    for(int i=1; i<=len; i++){
        for(int j=1; j<=len; j++){
            if(s[i-1]==s[j-1] && i!=j)
                dp[i][j]=1+dp[i-1][j-1];
            else
                dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
        }
    }

    //printing the longest repeating sequence
    int i=len, j=len;
    string temp="";
    while(i>0 && j>0){
        if(s[i-1]==s[j-1] && i!=j){
            temp=s[i-1]+temp;
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

    cout<<dp[len][len]<<endl;
    cout<<temp<<endl;

    return 0;
}

