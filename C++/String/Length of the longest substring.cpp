class Solution{
    public:
    int longestUniqueSubsttr(string S){
        //code
        int len=S.length(), max_len=1;
        vector<int> vec(26,-1);
        
    
        int i=0, j=0;
        while(j<len){
            if(vec[S[j]-'a']!=-1){
                if(max_len<(j-i))
                    max_len=j-i;
                if(i<=(vec[S[j]-'a']+1))
                    i=vec[S[j]-'a']+1;
            }

            vec[S[j]-'a']=j;
            j++;
        }
        
        if(max_len<(j-i))
            max_len=j-i;
        
        return max_len;
    }
};
