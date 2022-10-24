class Solution
{
    public bool validateBST(Node root, int min, int max){
        if(root==null)
            return true;
        
        if(root.data<min || root.data>max)
            return false;
        
        return (validateBST(root.left, min, root.data) && validateBST(root.right, root.data, max));
    }
    public bool isBST(Node root) 
    {
        return validateBST(root, Int32.MinValue, Int32.MaxValue);
    }
}
