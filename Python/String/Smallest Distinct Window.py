class Solution:
    def findSubString(self, str):
        n=0
        dct={}
        count=0
        
        for s in str:
            if s not in dct:
                dct[s]=0
                n+=1
        
        i=0
        j=0
        str_len=len(str)
        ans=str_len
        
        
        for j in range(str_len):
            if dct[str[j]]==0:
                count+=1
                
            dct[str[j]]+=1
            if count==n:
                while count==n:
                    dct[str[i]]-=1
                    
                    if dct[str[i]]==0:
                        count-=1
                    ans=min(ans, j-i+1)
                    i+=1
        
        return ans
    
