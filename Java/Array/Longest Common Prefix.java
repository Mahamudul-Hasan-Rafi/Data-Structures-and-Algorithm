class Solution{
    String longestCommonPrefix(String arr[], int n){
        String s=arr[0], prefix=""; 
        int len1, len2;
        
        for(int i=0; i<n; i++){
            len1=arr[i].length();
            len2=s.length();
            
            prefix="";
            for(int j=0,k=0; j<len1 && k<len2; j++,k++){
                if(arr[i].charAt(j)==s.charAt(k)){
                    prefix+=arr[i].charAt(j);
                }
                else
                    break;
            }
            s=prefix;
        }
        
        if(prefix.length()==0)
            return "-1";
        else
            return s;
    }
}
