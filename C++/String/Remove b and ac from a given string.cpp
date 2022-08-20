class Solution
{
  public:
    string stringFilter(string str) 
    { 
        int len=str.length();
        string s="";
        int i=0;
        
        while(i<len){
            if(str[i]=='b')
                i++;
            else if(str[i]=='a'){
                if(i<len && str[i+1]=='c')
                    i+=2;
                else{
                    s+=str[i];
                    i++;
                }
            }
            else{
                s+=str[i];
                i++;
            }
        }
        
        return s;
    } 
};
