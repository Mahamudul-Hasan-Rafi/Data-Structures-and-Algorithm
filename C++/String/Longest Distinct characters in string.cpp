int longestSubstrDistinctChars (string S)
{
    int ans=1, i=0, j=0, k;
    int len=S.length();
    
    unordered_map<char, int> mp;
    
    while(j<len){
        if(mp.find(S[j])==mp.end()){
            mp[S[j]]=j;
            j++;
        }
        else{
            ans=max(ans, j-i);
            k=mp[S[j]];
            
            while(i<=k){
                mp.erase(S[i]);
                i++;
            }                         
        }
    }
    
    ans=max(ans,j-i);
    
    return ans;
}
