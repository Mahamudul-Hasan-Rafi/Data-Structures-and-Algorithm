class Solution {
public:
    string func(int n)
    {
        if(n==2)
            return "11";
        
        string s, res="";
        s=func(n-1);
        int cnt=1, len=s.length();
        char temp=s[0];

        for(int i=1; i<len; i++){
            if(temp==s[i])
                cnt++;
            else{
                res+=(to_string(cnt)+temp);
                cnt=1;
                temp=s[i];
            }
        }
        res+=(to_string(cnt)+temp);
 
        return res;

    }
    string countAndSay(int n) {
        if(n==1)
            return "1";
        return func(n);
    }
};
