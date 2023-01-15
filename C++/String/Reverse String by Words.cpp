class Solution {
public:
    string reverseWords(string str) {
        int len=str.length();
    
        int i=0, j=0;
        string res, w;
        while(i<len){
            while(i<len && str[i]==' ')
                i++;
            if(i>=len)
                break;
            j=i+1;
            while(j<len && str[j]!=' ')
                j++;
            
            w=str.substr(i,j-i);
            if(res.empty())
                res=w;
            else
                res=w+' '+res;
            i=j+1;
        }
    
        return res;
    }
};
