class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        unordered_map<char, int> mp;
        
        int len2=p.length(), len1=s.length(), i=0, j=0, count, min_len=INT_MAX;
        string ans="";
        
        for(int k=0; k<len2; k++)
            mp[p[k]]++;
        
        count=mp.size();
        while(j<len1){
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                if(mp[s[j]]==0)
                    count--;
            }
            
            if(count==0){
                while(count<1){
                    if(mp.find(s[i])!=mp.end()){
                        mp[s[i]]++;
                        if(mp[s[i]]>0)
                            count++;
                    }
                    i++;
                }
                if(min_len>(j-i+2)){
                    min_len=j-i+2;
                    ans=s.substr(i-1, j-i+2);
                }
                
            }
            j++;
        }
        
        if(ans=="")
            return "-1";
        else
            return ans;
    }
};
