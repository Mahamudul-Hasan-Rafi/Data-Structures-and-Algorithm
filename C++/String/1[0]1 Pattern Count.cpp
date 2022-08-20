class Solution
{
    public:
        int patternCount(string S) 
        { 
            int len = S.length();
            
            int i=0, count=0;
            while(i<len){
                if(S[i]=='1'){
                    while(i<len && S[i]=='1')i++;
                    
                    if(i<len && S[i]=='0'){
                        while(i<len && S[i]=='0')i++;
                        
                        if(i<len && S[i]=='1')count++;
                    }
                }
                else
                    i++;
                
            }
            
            return count;
        } 

};
