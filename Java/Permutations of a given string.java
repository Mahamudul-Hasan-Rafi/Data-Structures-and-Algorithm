class Solution {
    
    public String swap(String S, int a, int b){
        StringBuilder sb = new StringBuilder(S);
        
        sb.setCharAt(a, S.charAt(b));
        sb.setCharAt(b, S.charAt(a));
        
        return sb.toString();
    }
    
    public void permute(String S, int l, int r, List<String> list){
        if(l==r){
            list.add(S);
            return;
        }
        char[] arr=S.toCharArray();
        Arrays.sort(arr, l, r+1);
        S=new String(arr);
        
        for(int i=l; i<=r; i++){
            if(i==l || (i!=l && S.charAt(i)!=S.charAt(l) && S.charAt(i)!=S.charAt(i-1))){
                S=swap(S,i,l);
                permute(S, l+1, r, list);
                S=swap(S,i,l);
            }
        }
    }
    
    public List<String> find_permutation(String S) {
        int l=0, r=S.length()-1;
        
        List<String> al = new ArrayList<String>();
        
        permute(S,l,r,al);
        
        return al;
    }
}
