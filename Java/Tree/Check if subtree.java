class Solution {
    public static boolean flag;
    public static boolean checkSubTree(Node T, Node S)
    {
       
        if(T==null && S==null)
            return true;
        
        if(T==null || S==null || T.data!=S.data)
            return false;
        
        boolean f=checkSubTree(T.left, S.left) && checkSubTree(T.right, S.right);
        return f;
    }
    public static void preOrder(Node T, Node S){
        if(T==null)
            return;
        if(T.data==S.data){
            if(checkSubTree(T,S))
                flag=true;
        }
        preOrder(T.left, S);
        preOrder(T.right, S);
    }
    public static boolean isSubtree(Node T, Node S) {
        flag=false;
        preOrder(T,S);
        return flag;
    }
}
