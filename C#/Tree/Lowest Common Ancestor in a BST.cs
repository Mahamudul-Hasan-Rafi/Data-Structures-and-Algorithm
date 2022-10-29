class Solution
{

    //Function to find the lowest common ancestor in a BST.
    public Node FindLCA(Node root, int n1, int n2)
    {
        if(root.data<n1 && root.data<n2)
            return FindLCA(root.right, n1, n2);
        else if(root.data>n1 && root.data>n2)
            return FindLCA(root.left, n1, n2);
        else
            return root;
    }
    public Node LCA(Node root,int n1,int n2)
    {
        return FindLCA(root, n1, n2);
    }
}
