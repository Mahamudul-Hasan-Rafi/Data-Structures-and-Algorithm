class Solution{
  public:
    int longestKSubstr(string s, int k) {
        int ans=-1, i=0, j=0;
        int len=s.length();
        
        if(len<k)
            return ans;
        
        map<char, int> mp;
        while(j<len){
            mp[s[j]]++;
            if(mp.size()<k){
                j++;
            }
            else if(mp.size()==k){
                ans=max(ans,j-i+1);
                j++;
            }
            else{
                while(mp.size()>k){
                    mp[s[i]]--;
                    if(mp[s[i]]==0)
                        mp.erase(s[i]);
                    i++;
                }
                j++;
            }
        }
        
        return ans;
        
    }
};
