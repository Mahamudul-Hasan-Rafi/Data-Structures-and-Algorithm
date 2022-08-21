class Solution {
  public:
    string longestPalin (string S) {
        int len=S.length();
        
        bool arr[len][len]={0};
        
        int k, max_len=1, i, st, end;
        string ans;
        
        ans=S[0];
        for(int i=0; i<len-1; i++){
            arr[i][i]=1;
            
            if(S[i]==S[i+1]){
                arr[i][i+1]=1;
                max_len=2;
            }
        }
        arr[len-1][len-1]=1;
        
        for(int j=2; j<len; j++){
            k=j;
            i=0;
            while(k<len){
                if(S[i]==S[k] && arr[i+1][k-1]==1){
                    arr[i][k]=1;
                    
                    if(max_len<(k-i+1)){
                        max_len=k-i+1;
                        
                        st=i;
                        end=k;
                    }
                }
                i++;
                k++;
            }
        }
        
        if(max_len==1){
            string g(1, S[0]);
            return g;
        }
        else if(max_len==2){
            for(int p=0; p<len-1; p++){
                if(S[p]==S[p+1]){
                    return S.substr(p,2);
                }
            }
        }
        else{
            return S.substr(st, end-st+1);
        }

    }
};
