class Solution {
  public:
    string findSum(string X, string Y) {
        int len1=X.length();
        int len2=Y.length();
        
        int i=len1-1, j=len2-1, num, c=0, rem, k=0;
        string res="";
        while(i>=0 && j>=0){
            num=X[i]-'0'+Y[j]-'0'+c;
            rem=num%10;
            c=num/10;
            res=to_string(rem)+res;
            
            i--;
            j--;
        }
        
        if(len1>len2){
            while(i>=0){
                num=X[i]-'0'+c;
                rem=num%10;
                c=num/10;
                res=to_string(rem)+res;
                i--;
            }
        }
        else if(len2>len1){
            while(j>=0){
                num=Y[j]-'0'+c;
                rem=num%10;
                c=num/10;
                res=to_string(rem)+res;
                j--;
            }
        }
        
        if(c!=0)
            res=to_string(c)+res;
        
        int l=res.length();
        while(k<l && res[k]=='0'){
            k++;
        }
        
        if(k==l)
            return "0";
        return res.substr(k,l);
    }
};
