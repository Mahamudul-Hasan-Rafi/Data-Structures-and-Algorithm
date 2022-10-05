class Solution{
public:

    string rem(string s){
        int len=s.size();
        int i=0;
        string t;
    
        while(i<len){
            if(i<len-1 && s[i]==s[i+1]){
                while(i<len-1 && s[i]==s[i+1])
                    i++;
            }
            else{
                t.push_back(s[i]);
            }
            i++;
        }
        
        return t;
    }
    string rremove(string s){
        string temp;
        while(temp.size()!=s.size()){
            temp=s;
            s=rem(s);
        }
        
        return s;
    }
};
