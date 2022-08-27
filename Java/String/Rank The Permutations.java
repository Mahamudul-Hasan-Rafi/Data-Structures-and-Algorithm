class Solution
{
    public long fact(int n){
        if(n==0)
            return 1;
        return n*fact(n-1);
    }
    
    public long findRank(String S)
    {
        HashMap<Character, Integer> mp = new HashMap<Character, Integer>();
        
        int len=S.length();
        char c;
        long sum=1;
        for(int i=0; i<len; i++){
            mp.put(S.charAt(i), 0);
        }
        
        for(int i=0; i<len; i++){
            c=S.charAt(i);
            for(int j=i+1; j<len; j++){
                if(c>S.charAt(j))
                    mp.put(c, mp.get(c)+1);
            }
        }
        
        for(int i=len-1, j=0; i>=0; i--, j++){
            sum+=(fact(j)*mp.get(S.charAt(i)));
        }
        
        return sum;
    }
}
