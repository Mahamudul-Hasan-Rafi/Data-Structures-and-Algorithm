class Tree
{
    // Return a list containing the Preorder traversal of the given tree
    ArrayList<Integer> preOrder(Node root)
    {
        Stack<Node> stck = new Stack<Node>();
        ArrayList<Integer> aL = new ArrayList<Integer>();
        
        stck.push(root);
        while(!stck.empty()){
            Node temp = stck.pop();
            
            if(temp.right!=null)
                stck.push(temp.right);
            if(temp.left!=null)
                stck.push(temp.left);
            
            aL.add(temp.data);
        }
        
        return aL;
    }
    
    
}
