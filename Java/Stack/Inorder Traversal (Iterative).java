class Solution
{
    // Return a list containing the inorder traversal of the given tree
    ArrayList<Integer> inOrder(Node root)
    {
        Stack<Node> stck = new Stack<Node>();
        ArrayList<Integer> aL = new ArrayList<Integer>();
        
        stck.push(root);
        while(!stck.empty()){
            Node t=stck.peek();
            while(t.left!=null){
                t=t.left;
                stck.push(t);
            }
            
            aL.add(t.data);
            stck.pop();
            while(!stck.empty() && t.right==null){
                t=stck.pop();
                aL.add(t.data);
            }
            
            if(t.right!=null)
                stck.push(t.right);
        }
        
        return aL;
    }
}
