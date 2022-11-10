class Solution  
{ 
    // Return True if the given trees are isomotphic. Else return False.
    void makeIso(Node root)
    {
        if(root==null)
            return;
        makeIso(root.left);
        makeIso(root.right);
        Node tmp=root.left;
        root.left=root.right;
        root.right=tmp;
    }
    
    boolean checkIso(Node root1, Node root2)
    {
        if(root1==null && root2!=null)
            return false;
        else if(root1!=null && root2==null)
            return false;
        else if(root1==null && root2==null)
            return true;
        else if(root1.data!=root2.data)
            return false;
        return (checkIso(root1.left, root2.left) && checkIso(root1.right, root2.right));
    }
    boolean isIsomorphic(Node root1, Node root2)  
    { 
         if(root1==null && root2==null)
            return true;
         else if((root1==null && root2!=null) || (root1!=null && root2==null))
            return false;
         else{
             if(checkIso(root1, root2))
                return true;
             makeIso(root1);
             return checkIso(root1, root2);
         }
    }
    
}    
