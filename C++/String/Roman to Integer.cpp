class Solution {
  public:
    int romanToDecimal(string &str) {
        unordered_map<char, int> mp;
        
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        
        int sum=0;
        int l=str.length();
        sum=mp[str[l-1]];
        
        for(int i=l-2; i>=0; i--){
            if(mp[str[i]]<mp[str[i+1]])
                sum-=mp[str[i]];
            else
                sum+=mp[str[i]];
        }
        
        return sum;
    }
};
