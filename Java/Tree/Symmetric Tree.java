class GfG
{
    // return true/false denoting whether the tree is Symmetric or not
    public static boolean flag=true;
    
    public static boolean checkSymmetric(Node a, Node b){
        if(a==null || b==null){
            if(a==b)
                return true;
            else
                return false;
        }
        
        if(a.data!=b.data)
            return false;
        
        return checkSymmetric(a.left, b.right) && checkSymmetric(a.right, b.left);
    }
    public static boolean isSymmetric(Node root)
    {
        if(root==null)
            return true;
        return checkSymmetric(root.left, root.right);
    }
}
