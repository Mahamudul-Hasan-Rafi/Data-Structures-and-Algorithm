class Solution {
    int isRepeat(String s) {
        String a1=s+s;
        String a2=a1.substring(1, a1.length()-1);
        
        if(a2.contains(s)) return 1;
        else return 0;
    }
}
