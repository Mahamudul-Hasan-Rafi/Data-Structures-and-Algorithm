class Solution
{
    //Function to find the largest number after k swaps.
    static String max;
    
    public static StringBuilder swap(StringBuilder st, int i, int j){
        char temp=st.charAt(i);
        st.setCharAt(i, st.charAt(j));
        st.setCharAt(j, temp);
        
        return st;
    }
    public static void findMax(StringBuilder str, int k, int len){
        
        if(str.toString().compareTo(max)>0)
            max=str.toString();
        
        if(k==0)
            return;
        
        for(int i=0; i<len-1; i++){
            for(int j=i+1; j<len; j++){
                if(str.charAt(i)<str.charAt(j)){
                    str=swap(str,i,j);
                    findMax(str,k-1,len);
                    str=swap(str,i,j);
                }
            }
        }
    }
    
    public static String findMaximumNum(String str, int k)
        {
            
            max=str;
            int len=str.length();
            StringBuilder sb = new StringBuilder(str);
            findMax(sb,k,len);
            return max;
        }
}
