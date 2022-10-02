class Solution{   
public:
    string printMinNumberForPattern(string S){
        int j=-1;
        int cnt=0;
        int len=S.length();
        string res="", temp;
        
        for(int k=0; k<len; k++){
            if(S[k]=='I'){
                j++;
                cnt++;
                
                if(k==j)
                    res+=to_string(cnt);
                else{
                    temp="";
                    while(j<k){
                        temp=to_string(cnt)+temp;
                        j++;
                        cnt++;
                    }
                
                    temp=to_string(cnt)+temp;
                    res+=temp;
                }
            }
        }
        
        temp="";
        while(j<len){
            cnt++;
            temp=to_string(cnt)+temp;
            j++;
        }
        
        return res+temp;
    }
};
