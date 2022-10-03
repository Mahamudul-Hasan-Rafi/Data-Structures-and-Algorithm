class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        
        int res=0, f=1;
        string temp;
        
        if(str[0]=='-'){
            temp=str;
            str=temp.substr(1);
            f=-1;
        }
        int len=str.length();
        
        for(int i=0; i<len; i++){
            if(str[i]>='0' && str[i]<='9')
                res+=(str[i]-'0')*pow(10, len-i-1);
            else
                return -1;
        }
        
        return res*f;
    }
};
